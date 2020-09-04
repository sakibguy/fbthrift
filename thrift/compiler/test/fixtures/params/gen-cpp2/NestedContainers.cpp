/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/params/gen-cpp2/NestedContainers.h"
#include "thrift/compiler/test/fixtures/params/gen-cpp2/NestedContainers.tcc"
#include "thrift/compiler/test/fixtures/params/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

namespace cpp2 {
std::unique_ptr<apache::thrift::AsyncProcessor> NestedContainersSvIf::getProcessor() {
  return std::make_unique<NestedContainersAsyncProcessor>(this);
}


void NestedContainersSvIf::mapList(std::unique_ptr<::std::map<int32_t, ::std::vector<int32_t>>> /*foo*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("mapList");
}

folly::SemiFuture<folly::Unit> NestedContainersSvIf::semifuture_mapList(std::unique_ptr<::std::map<int32_t, ::std::vector<int32_t>>> foo) {
  return apache::thrift::detail::si::semifuture([&] {
    return mapList(std::move(foo));
  });
}

folly::Future<folly::Unit> NestedContainersSvIf::future_mapList(std::unique_ptr<::std::map<int32_t, ::std::vector<int32_t>>> foo) {
  return apache::thrift::detail::si::future(semifuture_mapList(std::move(foo)), getThreadManager());
}


void NestedContainersSvIf::async_tm_mapList(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<::std::map<int32_t, ::std::vector<int32_t>>> foo) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] {
    return future_mapList(std::move(foo));
  });
}

void NestedContainersSvIf::mapSet(std::unique_ptr<::std::map<int32_t, ::std::set<int32_t>>> /*foo*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("mapSet");
}

folly::SemiFuture<folly::Unit> NestedContainersSvIf::semifuture_mapSet(std::unique_ptr<::std::map<int32_t, ::std::set<int32_t>>> foo) {
  return apache::thrift::detail::si::semifuture([&] {
    return mapSet(std::move(foo));
  });
}

folly::Future<folly::Unit> NestedContainersSvIf::future_mapSet(std::unique_ptr<::std::map<int32_t, ::std::set<int32_t>>> foo) {
  return apache::thrift::detail::si::future(semifuture_mapSet(std::move(foo)), getThreadManager());
}


void NestedContainersSvIf::async_tm_mapSet(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<::std::map<int32_t, ::std::set<int32_t>>> foo) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] {
    return future_mapSet(std::move(foo));
  });
}

void NestedContainersSvIf::listMap(std::unique_ptr<::std::vector<::std::map<int32_t, int32_t>>> /*foo*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("listMap");
}

folly::SemiFuture<folly::Unit> NestedContainersSvIf::semifuture_listMap(std::unique_ptr<::std::vector<::std::map<int32_t, int32_t>>> foo) {
  return apache::thrift::detail::si::semifuture([&] {
    return listMap(std::move(foo));
  });
}

folly::Future<folly::Unit> NestedContainersSvIf::future_listMap(std::unique_ptr<::std::vector<::std::map<int32_t, int32_t>>> foo) {
  return apache::thrift::detail::si::future(semifuture_listMap(std::move(foo)), getThreadManager());
}


void NestedContainersSvIf::async_tm_listMap(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<::std::vector<::std::map<int32_t, int32_t>>> foo) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] {
    return future_listMap(std::move(foo));
  });
}

void NestedContainersSvIf::listSet(std::unique_ptr<::std::vector<::std::set<int32_t>>> /*foo*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("listSet");
}

folly::SemiFuture<folly::Unit> NestedContainersSvIf::semifuture_listSet(std::unique_ptr<::std::vector<::std::set<int32_t>>> foo) {
  return apache::thrift::detail::si::semifuture([&] {
    return listSet(std::move(foo));
  });
}

folly::Future<folly::Unit> NestedContainersSvIf::future_listSet(std::unique_ptr<::std::vector<::std::set<int32_t>>> foo) {
  return apache::thrift::detail::si::future(semifuture_listSet(std::move(foo)), getThreadManager());
}


void NestedContainersSvIf::async_tm_listSet(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<::std::vector<::std::set<int32_t>>> foo) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] {
    return future_listSet(std::move(foo));
  });
}

void NestedContainersSvIf::turtles(std::unique_ptr<::std::vector<::std::vector<::std::map<int32_t, ::std::map<int32_t, ::std::set<int32_t>>>>>> /*foo*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("turtles");
}

folly::SemiFuture<folly::Unit> NestedContainersSvIf::semifuture_turtles(std::unique_ptr<::std::vector<::std::vector<::std::map<int32_t, ::std::map<int32_t, ::std::set<int32_t>>>>>> foo) {
  return apache::thrift::detail::si::semifuture([&] {
    return turtles(std::move(foo));
  });
}

folly::Future<folly::Unit> NestedContainersSvIf::future_turtles(std::unique_ptr<::std::vector<::std::vector<::std::map<int32_t, ::std::map<int32_t, ::std::set<int32_t>>>>>> foo) {
  return apache::thrift::detail::si::future(semifuture_turtles(std::move(foo)), getThreadManager());
}


void NestedContainersSvIf::async_tm_turtles(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<::std::vector<::std::vector<::std::map<int32_t, ::std::map<int32_t, ::std::set<int32_t>>>>>> foo) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] {
    return future_turtles(std::move(foo));
  });
}

void NestedContainersSvNull::mapList(std::unique_ptr<::std::map<int32_t, ::std::vector<int32_t>>> /*foo*/) {
  return;
}

void NestedContainersSvNull::mapSet(std::unique_ptr<::std::map<int32_t, ::std::set<int32_t>>> /*foo*/) {
  return;
}

void NestedContainersSvNull::listMap(std::unique_ptr<::std::vector<::std::map<int32_t, int32_t>>> /*foo*/) {
  return;
}

void NestedContainersSvNull::listSet(std::unique_ptr<::std::vector<::std::set<int32_t>>> /*foo*/) {
  return;
}

void NestedContainersSvNull::turtles(std::unique_ptr<::std::vector<::std::vector<::std::map<int32_t, ::std::map<int32_t, ::std::set<int32_t>>>>>> /*foo*/) {
  return;
}

const char* NestedContainersAsyncProcessor::getServiceName() {
  return "NestedContainers";
}

void NestedContainersAsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<NestedContainersSvIf>::gen(*response.metadata_ref(), *response.context_ref());
}

void NestedContainersAsyncProcessor::processSerializedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), protType, context, eb, tm);
}

std::shared_ptr<folly::RequestContext> NestedContainersAsyncProcessor::getBaseContextForRequest() {
  return iface_->getBaseContextForRequest();
}

const NestedContainersAsyncProcessor::ProcessMap& NestedContainersAsyncProcessor::getBinaryProtocolProcessMap() {
  return binaryProcessMap_;
}

const NestedContainersAsyncProcessor::ProcessMap NestedContainersAsyncProcessor::binaryProcessMap_ {
  {"mapList", &NestedContainersAsyncProcessor::_processInThread_mapList<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"mapSet", &NestedContainersAsyncProcessor::_processInThread_mapSet<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"listMap", &NestedContainersAsyncProcessor::_processInThread_listMap<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"listSet", &NestedContainersAsyncProcessor::_processInThread_listSet<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"turtles", &NestedContainersAsyncProcessor::_processInThread_turtles<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
};

const NestedContainersAsyncProcessor::ProcessMap& NestedContainersAsyncProcessor::getCompactProtocolProcessMap() {
  return compactProcessMap_;
}

const NestedContainersAsyncProcessor::ProcessMap NestedContainersAsyncProcessor::compactProcessMap_ {
  {"mapList", &NestedContainersAsyncProcessor::_processInThread_mapList<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"mapSet", &NestedContainersAsyncProcessor::_processInThread_mapSet<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"listMap", &NestedContainersAsyncProcessor::_processInThread_listMap<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"listSet", &NestedContainersAsyncProcessor::_processInThread_listSet<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"turtles", &NestedContainersAsyncProcessor::_processInThread_turtles<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
};

} // cpp2
