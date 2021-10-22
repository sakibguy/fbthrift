/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <thrift/lib/py3lite/PythonTableBased.h>

#include <folly/Indestructible.h>
#include <folly/Memory.h>
#include <folly/Range.h>

namespace apache {
namespace thrift {
namespace python {

constexpr const size_t kHeadOffset = sizeof(PyVarObject);
constexpr const size_t kFieldOffset = sizeof(PyObject*);

PyObject* createUnionTuple() {
  UniquePyObjectPtr tuple{
      PyTuple_New(2)}; // one for the type and the other for the value
  if (!tuple) {
    THRIFT_PY3_CHECK_ERROR();
  }
  PyTuple_SET_ITEM(
      tuple.get(), 0, PyLong_FromLong(0)); // init type to __EMPTY__ (0)
  PyTuple_SET_ITEM(tuple.get(), 1, Py_None); // init value to None
  Py_INCREF(Py_None);
  return tuple.release();
}

UniquePyObjectPtr getDefaultValue(
    const detail::TypeInfo* typeInfo,
    const FieldValueMap& userValueMap,
    int16_t index) {
  auto userValueFound = userValueMap.find(index);
  if (userValueFound != userValueMap.end()) {
    auto value = userValueFound->second;
    Py_INCREF(value);
    return UniquePyObjectPtr(value);
  }
  static folly::Indestructible<
      std::unordered_map<const detail::TypeInfo*, PyObject*>>
      defaultValueMap;
  auto defaultValueFound = defaultValueMap->find(typeInfo);
  UniquePyObjectPtr value;
  if (defaultValueFound == defaultValueMap->end()) {
    switch (typeInfo->type) {
      case protocol::TType::T_BYTE:
      case protocol::TType::T_I16:
      case protocol::TType::T_I32:
      case protocol::TType::T_I64:
        value = UniquePyObjectPtr(PyLong_FromLong(0));
        break;
      case protocol::TType::T_DOUBLE:
      case protocol::TType::T_FLOAT:
        value = UniquePyObjectPtr(PyFloat_FromDouble(0));
        break;
      case protocol::TType::T_BOOL:
        value = UniquePyObjectPtr(Py_False);
        Py_INCREF(Py_False);
        break;
      case protocol::TType::T_STRING:
        value = UniquePyObjectPtr(PyBytes_FromString(""));
        break;
      case protocol::TType::T_LIST:
      case protocol::TType::T_MAP:
        value = UniquePyObjectPtr(PyTuple_New(0));
        break;
      case protocol::TType::T_SET:
        value = UniquePyObjectPtr(PyFrozenSet_New(nullptr));
        break;
      case protocol::TType::T_STRUCT: {
        auto structInfo =
            static_cast<const detail::StructInfo*>(typeInfo->typeExt);
        value = UniquePyObjectPtr(
            structInfo->unionExt != nullptr ? createUnionTuple()
                                            : createStructTuple(*structInfo));
        break;
      }
      default:
        LOG(FATAL) << "invalid typeInfo TType " << typeInfo->type;
    }
    if (!value) {
      THRIFT_PY3_CHECK_ERROR();
    }
    defaultValueMap->emplace(typeInfo, value.get());
  } else {
    value = UniquePyObjectPtr(defaultValueFound->second);
  }
  Py_INCREF(value.get());
  return value;
}

PyObject* createStructTuple(const detail::StructInfo& structInfo) {
  auto numFields = structInfo.numFields;
  std::string zeros(numFields, '\0');
  UniquePyObjectPtr issetArr{
      PyBytes_FromStringAndSize(zeros.c_str(), numFields)};
  if (!issetArr) {
    THRIFT_PY3_CHECK_ERROR();
  }
  // create a tuple with the first element as a bytearray for isset flags, and
  // the rest numFields for struct fields.

  UniquePyObjectPtr tuple{PyTuple_New(numFields + 1)};
  if (!tuple) {
    THRIFT_PY3_CHECK_ERROR();
  }
  PyTuple_SET_ITEM(tuple.get(), 0, issetArr.release());
  const auto& defaultValues =
      *static_cast<const FieldValueMap*>(structInfo.customExt);
  for (int i = 0; i < numFields; ++i) {
    auto fieldInfo = structInfo.fieldInfos[i];
    if (!fieldInfo.isUnqualified) { // optional field
      PyTuple_SET_ITEM(tuple.get(), i + 1, Py_None);
      Py_INCREF(Py_None);
    } else {
      PyTuple_SET_ITEM(
          tuple.get(),
          i + 1,
          getDefaultValue(fieldInfo.typeInfo, defaultValues, i).release());
    }
  }
  return tuple.release();
}

void setStructIsset(void* object, int16_t index, bool set) {
  PyObject** isset_bytes_ptr =
      toPyObjectPtr(static_cast<char*>(object) + kHeadOffset);
  PyObject* oldValue = *isset_bytes_ptr;
  auto sz = PyBytes_GET_SIZE(oldValue);
  if (sz == -1) {
    THRIFT_PY3_CHECK_ERROR();
  } else if (sz == 1) {
    // specialize single field case as PyBytes_FromStringAndSize caches and
    // reuse the single byte bytes objects, so we can't mutate the cached
    // singleton
    // https://github.com/python/cpython/blob/3.8/Objects/bytesobject.c#L110-L118
    DCHECK(index == 0);
    *isset_bytes_ptr = set ? PyBytes_FromStringAndSize("\x01", 1)
                           : PyBytes_FromStringAndSize("\x00", 1);
    if (!*isset_bytes_ptr) {
      THRIFT_PY3_CHECK_ERROR();
    }
    Py_DECREF(oldValue);
  } else {
    char* flags = PyBytes_AsString(*isset_bytes_ptr);
    if (!flags) {
      THRIFT_PY3_CHECK_ERROR();
    }
    flags[index] = set;
  }
}

void* setStruct(void* object, const detail::TypeInfo& typeInfo) {
  return setPyObject(
      object,
      UniquePyObjectPtr{createStructTuple(
          *static_cast<const detail::StructInfo*>(typeInfo.typeExt))});
}

void* setUnion(void* object, const detail::TypeInfo& /* typeInfo */) {
  return setPyObject(object, UniquePyObjectPtr{createUnionTuple()});
}

bool getIsset(const void* object, ptrdiff_t offset) {
  PyObject* isset =
      *toPyObjectPtr(static_cast<const char*>(object) + kHeadOffset);
  const char* flags = PyBytes_AsString(isset);
  if (!flags) {
    THRIFT_PY3_CHECK_ERROR();
  }
  return flags[offset];
}

void setIsset(void* object, ptrdiff_t offset, bool set) {
  return setStructIsset(object, offset, set);
}

void clearUnion(void* object) {
  PyObject* pyObj = toPyObject(object);
  PyObject* oldType = PyTuple_GET_ITEM(pyObj, 0);
  UniquePyObjectPtr zero{PyLong_FromLong(0)};
  if (!zero) {
    THRIFT_PY3_CHECK_ERROR();
  }
  PyTuple_SET_ITEM(pyObj, 0, zero.release());
  Py_XDECREF(oldType);
  PyObject* oldValue = PyTuple_GET_ITEM(pyObj, 1);
  PyTuple_SET_ITEM(pyObj, 1, Py_None);
  Py_INCREF(Py_None);
  Py_XDECREF(oldValue);
}

int getActiveId(const void* object) {
  PyObject* const* pyObj = toPyObjectPtr(object);
  auto id = PyLong_AsLong(PyTuple_GET_ITEM(pyObj, 0));
  if (id == -1) {
    THRIFT_PY3_CHECK_POSSIBLE_ERROR();
  }
  return id;
}

void setActiveId(void* object, int value) {
  PyObject* pyObj = toPyObject(object);
  PyObject* oldValue = PyTuple_GET_ITEM(pyObj, 0);
  UniquePyObjectPtr valueObj{PyLong_FromLong(value)};
  if (!valueObj) {
    THRIFT_PY3_CHECK_ERROR();
  }
  PyTuple_SET_ITEM(pyObj, 0, valueObj.release());
  Py_DECREF(oldValue);
}

const detail::UnionExtN<1> unionExt = {
    /* .clear */ clearUnion,
    /* .unionTypeOffset */ 0,
    /* .getActiveId */ getActiveId,
    /* .setActiveId */ setActiveId,
    /* .initMember */ {nullptr},
};

detail::OptionalThriftValue getString(const void* object) {
  PyObject* pyObj = *toPyObjectPtr(object);
  Py_ssize_t len = 0;
  char* buf = nullptr;
  if (PyBytes_AsStringAndSize(pyObj, &buf, &len) == -1) {
    THRIFT_PY3_CHECK_ERROR();
  }
  return folly::make_optional<detail::ThriftValue>(
      folly::StringPiece{buf, static_cast<std::size_t>(len)});
}

void setString(void* object, const std::string& value) {
  UniquePyObjectPtr bytesObj{
      PyBytes_FromStringAndSize(value.data(), value.size())};
  if (!bytesObj) {
    THRIFT_PY3_CHECK_ERROR();
  }
  setPyObject(object, std::move(bytesObj));
}

detail::OptionalThriftValue getStruct(const void* object) {
  PyObject* pyObj = *toPyObjectPtr(object);
  return folly::make_optional<detail::ThriftValue>(pyObj);
}

detail::TypeInfo createStructTypeInfo(
    const DynamicStructInfo& dynamicStructInfo) {
  return {
      /* .type */ protocol::TType::T_STRUCT,
      /* .get */ getStruct,
      /* .set */
      reinterpret_cast<detail::VoidFuncPtr>(
          dynamicStructInfo.isUnion() ? setUnion : setStruct),
      /* .typeExt */ &dynamicStructInfo.getStructInfo(),
  };
}

void ListTypeInfo::read(
    const void* context,
    void* object,
    std::uint32_t listSize,
    void (*reader)(const void* /*context*/, void* /*val*/)) {
  // use a tuple to represent a list field for immutability
  UniquePyObjectPtr list{PyTuple_New(listSize)};
  if (!list) {
    THRIFT_PY3_CHECK_ERROR();
  }
  for (std::uint32_t i = 0; i < listSize; ++i) {
    PyObject* elem = nullptr;
    reader(context, &elem);
    PyTuple_SET_ITEM(list.get(), i, elem);
  }
  setPyObject(object, std::move(list));
}

size_t ListTypeInfo::write(
    const void* context,
    const void* object,
    size_t (*writer)(const void* /*context*/, const void* /*val*/)) {
  const PyObject* list = toPyObject(object);
  auto size = PyTuple_GET_SIZE(list);
  size_t written = 0;
  for (Py_ssize_t i = 0; i < size; i++) {
    auto elem = PyTuple_GET_ITEM(list, i);
    written += writer(context, &elem);
  }
  return written;
}

void SetTypeInfo::read(
    const void* context,
    void* object,
    std::uint32_t setSize,
    void (*reader)(const void* /*context*/, void* /*val*/)) {
  UniquePyObjectPtr iterable{PyTuple_New(setSize)};
  if (!iterable) {
    THRIFT_PY3_CHECK_ERROR();
  }
  for (std::uint32_t i = 0; i < setSize; ++i) {
    PyObject* elem{};
    reader(context, &elem);
    PyTuple_SET_ITEM(iterable.get(), i, elem);
  }
  UniquePyObjectPtr frozenset{PyFrozenSet_New(iterable.get())};
  if (!frozenset) {
    THRIFT_PY3_CHECK_ERROR();
  }
  setPyObject(object, std::move(frozenset));
}

size_t SetTypeInfo::write(
    const void* context,
    const void* object,
    bool protocolSortKeys,
    size_t (*writer)(const void* /*context*/, const void* /*val*/)) {
  size_t written = 0;
  PyObject* set = const_cast<PyObject*>(toPyObject(object));
  UniquePyObjectPtr iter;
  if (protocolSortKeys) {
    UniquePyObjectPtr seq{PySequence_List(set)};
    if (!seq) {
      THRIFT_PY3_CHECK_ERROR();
    }
    if (PyList_Sort(seq.get()) == -1) {
      THRIFT_PY3_CHECK_ERROR();
    };
    iter = UniquePyObjectPtr{PyObject_GetIter(seq.get())};
  } else {
    iter = UniquePyObjectPtr{PyObject_GetIter(set)};
  }
  if (!iter) {
    THRIFT_PY3_CHECK_ERROR();
  }
  PyObject* elem;
  while ((elem = PyIter_Next(iter.get())) != nullptr) {
    written += writer(context, &elem);
    Py_DECREF(elem);
  }
  return written;
}

void MapTypeInfo::read(
    const void* context,
    void* object,
    std::uint32_t mapSize,
    void (*keyReader)(const void* context, void* key),
    void (*valueReader)(const void* context, void* val)) {
  // use a tuple to represent a map for immutablitity and hashability
  UniquePyObjectPtr map{PyTuple_New(mapSize)};
  if (!map) {
    THRIFT_PY3_CHECK_ERROR();
  }
  for (std::uint32_t i = 0; i < mapSize; ++i) {
    auto read = [=](auto reader) {
      PyObject* obj = nullptr;
      reader(context, &obj);
      return UniquePyObjectPtr(obj);
    };
    UniquePyObjectPtr mkey = read(keyReader);
    UniquePyObjectPtr mvalue = read(valueReader);
    UniquePyObjectPtr elem{PyTuple_New(2)};
    if (!elem) {
      THRIFT_PY3_CHECK_ERROR();
    }
    PyTuple_SET_ITEM(elem.get(), 0, mkey.release());
    PyTuple_SET_ITEM(elem.get(), 1, mvalue.release());
    PyTuple_SET_ITEM(map.get(), i, elem.release());
  }
  setPyObject(object, std::move(map));
}

size_t MapTypeInfo::write(
    const void* context,
    const void* object,
    bool protocolSortKeys,
    size_t (*writer)(
        const void* context, const void* keyElem, const void* valueElem)) {
  size_t written = 0;
  PyObject* map = const_cast<PyObject*>(toPyObject(object));
  auto size = PyTuple_GET_SIZE(map);
  UniquePyObjectPtr seq;
  if (protocolSortKeys) {
    seq = UniquePyObjectPtr{PySequence_List(map)};
    if (!seq) {
      THRIFT_PY3_CHECK_ERROR();
    }
    map = seq.get();
    if (PyList_Sort(map) == -1) {
      THRIFT_PY3_CHECK_ERROR();
    };
  }
  for (std::uint32_t i = 0; i < size; ++i) {
    PyObject* pair = PyTuple_GET_ITEM(map, i);
    PyObject* key = PyTuple_GET_ITEM(pair, 0);
    PyObject* value = PyTuple_GET_ITEM(pair, 1);
    written += writer(context, &key, &value);
  }
  return written;
}

DynamicStructInfo::DynamicStructInfo(
    const char* name, int16_t numFields, bool isUnion)
    : name_{name} {
  structInfo_ = static_cast<detail::StructInfo*>(folly::allocateBytes(
      sizeof(detail::StructInfo) + sizeof(detail::FieldInfo) * numFields));
  // reserve vector as we are assigning const char* from the string in
  // vector
  fieldNames_.reserve(numFields);
  structInfo_->numFields = numFields;
  structInfo_->name = name_.c_str();
  structInfo_->unionExt =
      isUnion ? reinterpret_cast<const detail::UnionExt*>(&unionExt) : nullptr;
  structInfo_->getIsset = getIsset;
  structInfo_->setIsset = setIsset;
  structInfo_->customExt = &fieldValues_;
}

DynamicStructInfo::~DynamicStructInfo() {
  for (auto kv : fieldValues_) {
    Py_DECREF(kv.second);
  }
  folly::deallocateBytes(
      structInfo_,
      sizeof(detail::StructInfo) +
          sizeof(detail::FieldInfo) * structInfo_->numFields);
}

void DynamicStructInfo::addFieldInfo(
    detail::FieldID id,
    bool isUnqualified,
    const char* name,
    const detail::TypeInfo* typeInfo) {
  fieldNames_.push_back(name);
  int16_t idx = fieldNames_.size() - 1;
  structInfo_->fieldInfos[idx] = detail::FieldInfo{
      /* .id */ id,
      /* .isUnqualified */ isUnqualified,
      /* .name */ fieldNames_[idx].c_str(),
      /* .memberOffset */
      static_cast<ptrdiff_t>(
          kHeadOffset + kFieldOffset * (isUnion() ? 1 : idx + 1)),
      /* .issetOffset */ isUnion() ? 0 : idx,
      /* .typeInfo */ typeInfo};
}

void DynamicStructInfo::addFieldValue(int16_t index, PyObject* fieldValue) {
  DCHECK(fieldValue != nullptr);
  if (fieldValue == Py_None) {
    return;
  }
  Py_INCREF(fieldValue);
  fieldValues_.emplace(index, fieldValue);
}

const auto& boolTypeInfo =
    PrimitiveTypeInfo<bool, protocol::TType::T_BOOL>::typeInfo;
const auto& byteTypeInfo =
    PrimitiveTypeInfo<std::int32_t, protocol::TType::T_BYTE>::typeInfo;
const auto& i16TypeInfo =
    PrimitiveTypeInfo<std::int32_t, protocol::TType::T_I16>::typeInfo;
const auto& i32TypeInfo =
    PrimitiveTypeInfo<std::int32_t, protocol::TType::T_I32>::typeInfo;
const auto& i64TypeInfo =
    PrimitiveTypeInfo<std::int64_t, protocol::TType::T_I64>::typeInfo;
const auto& doubleTypeInfo =
    PrimitiveTypeInfo<double, protocol::TType::T_DOUBLE>::typeInfo;
const auto& floatTypeInfo =
    PrimitiveTypeInfo<float, protocol::TType::T_FLOAT>::typeInfo;

const detail::StringFieldType stringFieldType =
    detail::StringFieldType::StringView;

const detail::TypeInfo stringTypeInfo{
    /* .type */ protocol::TType::T_STRING,
    /* .get */ getString,
    /* .set */ reinterpret_cast<detail::VoidFuncPtr>(setString),
    /* .typeExt */ &stringFieldType,
};

} // namespace python
} // namespace thrift
} // namespace apache
