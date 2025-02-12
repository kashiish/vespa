// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: match_service.proto

#include "match_service.pb.h"
#include "match_service.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace google {
namespace cloud {
namespace aiplatform {
namespace container {
namespace v1beta1 {

static const char* MatchService_method_names[] = {
  "/google.cloud.aiplatform.container.v1beta1.MatchService/Match",
  "/google.cloud.aiplatform.container.v1beta1.MatchService/BatchMatch",
};

std::unique_ptr< MatchService::Stub> MatchService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< MatchService::Stub> stub(new MatchService::Stub(channel, options));
  return stub;
}

MatchService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Match_(MatchService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_BatchMatch_(MatchService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status MatchService::Stub::Match(::grpc::ClientContext* context, const ::google::cloud::aiplatform::container::v1beta1::MatchRequest& request, ::google::cloud::aiplatform::container::v1beta1::MatchResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::google::cloud::aiplatform::container::v1beta1::MatchRequest, ::google::cloud::aiplatform::container::v1beta1::MatchResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Match_, context, request, response);
}

void MatchService::Stub::async::Match(::grpc::ClientContext* context, const ::google::cloud::aiplatform::container::v1beta1::MatchRequest* request, ::google::cloud::aiplatform::container::v1beta1::MatchResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::google::cloud::aiplatform::container::v1beta1::MatchRequest, ::google::cloud::aiplatform::container::v1beta1::MatchResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Match_, context, request, response, std::move(f));
}

void MatchService::Stub::async::Match(::grpc::ClientContext* context, const ::google::cloud::aiplatform::container::v1beta1::MatchRequest* request, ::google::cloud::aiplatform::container::v1beta1::MatchResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Match_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::aiplatform::container::v1beta1::MatchResponse>* MatchService::Stub::PrepareAsyncMatchRaw(::grpc::ClientContext* context, const ::google::cloud::aiplatform::container::v1beta1::MatchRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::google::cloud::aiplatform::container::v1beta1::MatchResponse, ::google::cloud::aiplatform::container::v1beta1::MatchRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Match_, context, request);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::aiplatform::container::v1beta1::MatchResponse>* MatchService::Stub::AsyncMatchRaw(::grpc::ClientContext* context, const ::google::cloud::aiplatform::container::v1beta1::MatchRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncMatchRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status MatchService::Stub::BatchMatch(::grpc::ClientContext* context, const ::google::cloud::aiplatform::container::v1beta1::BatchMatchRequest& request, ::google::cloud::aiplatform::container::v1beta1::BatchMatchResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::google::cloud::aiplatform::container::v1beta1::BatchMatchRequest, ::google::cloud::aiplatform::container::v1beta1::BatchMatchResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_BatchMatch_, context, request, response);
}

void MatchService::Stub::async::BatchMatch(::grpc::ClientContext* context, const ::google::cloud::aiplatform::container::v1beta1::BatchMatchRequest* request, ::google::cloud::aiplatform::container::v1beta1::BatchMatchResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::google::cloud::aiplatform::container::v1beta1::BatchMatchRequest, ::google::cloud::aiplatform::container::v1beta1::BatchMatchResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_BatchMatch_, context, request, response, std::move(f));
}

void MatchService::Stub::async::BatchMatch(::grpc::ClientContext* context, const ::google::cloud::aiplatform::container::v1beta1::BatchMatchRequest* request, ::google::cloud::aiplatform::container::v1beta1::BatchMatchResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_BatchMatch_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::aiplatform::container::v1beta1::BatchMatchResponse>* MatchService::Stub::PrepareAsyncBatchMatchRaw(::grpc::ClientContext* context, const ::google::cloud::aiplatform::container::v1beta1::BatchMatchRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::google::cloud::aiplatform::container::v1beta1::BatchMatchResponse, ::google::cloud::aiplatform::container::v1beta1::BatchMatchRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_BatchMatch_, context, request);
}

::grpc::ClientAsyncResponseReader< ::google::cloud::aiplatform::container::v1beta1::BatchMatchResponse>* MatchService::Stub::AsyncBatchMatchRaw(::grpc::ClientContext* context, const ::google::cloud::aiplatform::container::v1beta1::BatchMatchRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncBatchMatchRaw(context, request, cq);
  result->StartCall();
  return result;
}

MatchService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MatchService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MatchService::Service, ::google::cloud::aiplatform::container::v1beta1::MatchRequest, ::google::cloud::aiplatform::container::v1beta1::MatchResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](MatchService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::google::cloud::aiplatform::container::v1beta1::MatchRequest* req,
             ::google::cloud::aiplatform::container::v1beta1::MatchResponse* resp) {
               return service->Match(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MatchService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MatchService::Service, ::google::cloud::aiplatform::container::v1beta1::BatchMatchRequest, ::google::cloud::aiplatform::container::v1beta1::BatchMatchResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](MatchService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::google::cloud::aiplatform::container::v1beta1::BatchMatchRequest* req,
             ::google::cloud::aiplatform::container::v1beta1::BatchMatchResponse* resp) {
               return service->BatchMatch(ctx, req, resp);
             }, this)));
}

MatchService::Service::~Service() {
}

::grpc::Status MatchService::Service::Match(::grpc::ServerContext* context, const ::google::cloud::aiplatform::container::v1beta1::MatchRequest* request, ::google::cloud::aiplatform::container::v1beta1::MatchResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MatchService::Service::BatchMatch(::grpc::ServerContext* context, const ::google::cloud::aiplatform::container::v1beta1::BatchMatchRequest* request, ::google::cloud::aiplatform::container::v1beta1::BatchMatchResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace cloud
}  // namespace aiplatform
}  // namespace container
}  // namespace v1beta1

