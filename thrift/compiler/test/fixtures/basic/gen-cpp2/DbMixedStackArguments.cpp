/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/basic/gen-cpp2/DbMixedStackArguments.h"
#include "thrift/compiler/test/fixtures/basic/gen-cpp2/DbMixedStackArguments.tcc"
#include "thrift/compiler/test/fixtures/basic/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

namespace cpp2 {
std::unique_ptr<apache::thrift::AsyncProcessor> DbMixedStackArgumentsSvIf::getProcessor() {
  return std::make_unique<DbMixedStackArgumentsAsyncProcessor>(this);
}


void DbMixedStackArgumentsSvIf::getDataByKey0(::std::string& /*_return*/, std::unique_ptr<::std::string> /*key*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("getDataByKey0");
}

folly::SemiFuture<std::unique_ptr<::std::string>> DbMixedStackArgumentsSvIf::semifuture_getDataByKey0(std::unique_ptr<::std::string> key) {
  return apache::thrift::detail::si::semifuture_returning_uptr([&](::std::string& _return) { getDataByKey0(_return, std::move(key)); });
}

folly::Future<std::unique_ptr<::std::string>> DbMixedStackArgumentsSvIf::future_getDataByKey0(std::unique_ptr<::std::string> key) {
  return apache::thrift::detail::si::future(semifuture_getDataByKey0(std::move(key)), getThreadManager());
}

void DbMixedStackArgumentsSvIf::async_tm_getDataByKey0(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>> callback, std::unique_ptr<::std::string> key) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] {
    return future_getDataByKey0(std::move(key));
  });
}

void DbMixedStackArgumentsSvIf::getDataByKey1(::std::string& /*_return*/, std::unique_ptr<::std::string> /*key*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("getDataByKey1");
}

folly::SemiFuture<std::unique_ptr<::std::string>> DbMixedStackArgumentsSvIf::semifuture_getDataByKey1(std::unique_ptr<::std::string> key) {
  return apache::thrift::detail::si::semifuture_returning_uptr([&](::std::string& _return) { getDataByKey1(_return, std::move(key)); });
}

folly::Future<std::unique_ptr<::std::string>> DbMixedStackArgumentsSvIf::future_getDataByKey1(std::unique_ptr<::std::string> key) {
  return apache::thrift::detail::si::future(semifuture_getDataByKey1(std::move(key)), getThreadManager());
}

void DbMixedStackArgumentsSvIf::async_tm_getDataByKey1(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>> callback, std::unique_ptr<::std::string> key) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] {
    return future_getDataByKey1(std::move(key));
  });
}

void DbMixedStackArgumentsSvNull::getDataByKey0(::std::string& /*_return*/, std::unique_ptr<::std::string> /*key*/) {}

void DbMixedStackArgumentsSvNull::getDataByKey1(::std::string& /*_return*/, std::unique_ptr<::std::string> /*key*/) {}



const char* DbMixedStackArgumentsAsyncProcessor::getServiceName() {
  return "DbMixedStackArguments";
}

void DbMixedStackArgumentsAsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<DbMixedStackArgumentsSvIf>::gen(*response.metadata_ref(), *response.context_ref());
}

void DbMixedStackArgumentsAsyncProcessor::processSerializedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), protType, context, eb, tm);
}

std::shared_ptr<folly::RequestContext> DbMixedStackArgumentsAsyncProcessor::getBaseContextForRequest() {
  return iface_->getBaseContextForRequest();
}

const DbMixedStackArgumentsAsyncProcessor::ProcessMap& DbMixedStackArgumentsAsyncProcessor::getBinaryProtocolProcessMap() {
  return binaryProcessMap_;
}

const DbMixedStackArgumentsAsyncProcessor::ProcessMap DbMixedStackArgumentsAsyncProcessor::binaryProcessMap_ {
  {"getDataByKey0", &DbMixedStackArgumentsAsyncProcessor::setUpAndProcess_getDataByKey0<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"getDataByKey1", &DbMixedStackArgumentsAsyncProcessor::setUpAndProcess_getDataByKey1<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
};

const DbMixedStackArgumentsAsyncProcessor::ProcessMap& DbMixedStackArgumentsAsyncProcessor::getCompactProtocolProcessMap() {
  return compactProcessMap_;
}

const DbMixedStackArgumentsAsyncProcessor::ProcessMap DbMixedStackArgumentsAsyncProcessor::compactProcessMap_ {
  {"getDataByKey0", &DbMixedStackArgumentsAsyncProcessor::setUpAndProcess_getDataByKey0<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"getDataByKey1", &DbMixedStackArgumentsAsyncProcessor::setUpAndProcess_getDataByKey1<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
};

} // cpp2
