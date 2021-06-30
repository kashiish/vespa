// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/actions/sdk/v2/actions_testing.proto

#include "google/actions/sdk/v2/actions_testing.pb.h"
#include "google/actions/sdk/v2/actions_testing.grpc.pb.h"

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
namespace actions {
namespace sdk {
namespace v2 {

static const char* ActionsTesting_method_names[] = {
  "/google.actions.sdk.v2.ActionsTesting/SendInteraction",
  "/google.actions.sdk.v2.ActionsTesting/MatchIntents",
  "/google.actions.sdk.v2.ActionsTesting/SetWebAndAppActivityControl",
};

std::unique_ptr< ActionsTesting::Stub> ActionsTesting::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< ActionsTesting::Stub> stub(new ActionsTesting::Stub(channel, options));
  return stub;
}

ActionsTesting::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_SendInteraction_(ActionsTesting_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_MatchIntents_(ActionsTesting_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetWebAndAppActivityControl_(ActionsTesting_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status ActionsTesting::Stub::SendInteraction(::grpc::ClientContext* context, const ::google::actions::sdk::v2::SendInteractionRequest& request, ::google::actions::sdk::v2::SendInteractionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::google::actions::sdk::v2::SendInteractionRequest, ::google::actions::sdk::v2::SendInteractionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SendInteraction_, context, request, response);
}

void ActionsTesting::Stub::async::SendInteraction(::grpc::ClientContext* context, const ::google::actions::sdk::v2::SendInteractionRequest* request, ::google::actions::sdk::v2::SendInteractionResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::google::actions::sdk::v2::SendInteractionRequest, ::google::actions::sdk::v2::SendInteractionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SendInteraction_, context, request, response, std::move(f));
}

void ActionsTesting::Stub::async::SendInteraction(::grpc::ClientContext* context, const ::google::actions::sdk::v2::SendInteractionRequest* request, ::google::actions::sdk::v2::SendInteractionResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SendInteraction_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::google::actions::sdk::v2::SendInteractionResponse>* ActionsTesting::Stub::PrepareAsyncSendInteractionRaw(::grpc::ClientContext* context, const ::google::actions::sdk::v2::SendInteractionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::google::actions::sdk::v2::SendInteractionResponse, ::google::actions::sdk::v2::SendInteractionRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SendInteraction_, context, request);
}

::grpc::ClientAsyncResponseReader< ::google::actions::sdk::v2::SendInteractionResponse>* ActionsTesting::Stub::AsyncSendInteractionRaw(::grpc::ClientContext* context, const ::google::actions::sdk::v2::SendInteractionRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSendInteractionRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status ActionsTesting::Stub::MatchIntents(::grpc::ClientContext* context, const ::google::actions::sdk::v2::MatchIntentsRequest& request, ::google::actions::sdk::v2::MatchIntentsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::google::actions::sdk::v2::MatchIntentsRequest, ::google::actions::sdk::v2::MatchIntentsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_MatchIntents_, context, request, response);
}

void ActionsTesting::Stub::async::MatchIntents(::grpc::ClientContext* context, const ::google::actions::sdk::v2::MatchIntentsRequest* request, ::google::actions::sdk::v2::MatchIntentsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::google::actions::sdk::v2::MatchIntentsRequest, ::google::actions::sdk::v2::MatchIntentsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_MatchIntents_, context, request, response, std::move(f));
}

void ActionsTesting::Stub::async::MatchIntents(::grpc::ClientContext* context, const ::google::actions::sdk::v2::MatchIntentsRequest* request, ::google::actions::sdk::v2::MatchIntentsResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_MatchIntents_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::google::actions::sdk::v2::MatchIntentsResponse>* ActionsTesting::Stub::PrepareAsyncMatchIntentsRaw(::grpc::ClientContext* context, const ::google::actions::sdk::v2::MatchIntentsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::google::actions::sdk::v2::MatchIntentsResponse, ::google::actions::sdk::v2::MatchIntentsRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_MatchIntents_, context, request);
}

::grpc::ClientAsyncResponseReader< ::google::actions::sdk::v2::MatchIntentsResponse>* ActionsTesting::Stub::AsyncMatchIntentsRaw(::grpc::ClientContext* context, const ::google::actions::sdk::v2::MatchIntentsRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncMatchIntentsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status ActionsTesting::Stub::SetWebAndAppActivityControl(::grpc::ClientContext* context, const ::google::actions::sdk::v2::SetWebAndAppActivityControlRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall< ::google::actions::sdk::v2::SetWebAndAppActivityControlRequest, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SetWebAndAppActivityControl_, context, request, response);
}

void ActionsTesting::Stub::async::SetWebAndAppActivityControl(::grpc::ClientContext* context, const ::google::actions::sdk::v2::SetWebAndAppActivityControlRequest* request, ::google::protobuf::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::google::actions::sdk::v2::SetWebAndAppActivityControlRequest, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetWebAndAppActivityControl_, context, request, response, std::move(f));
}

void ActionsTesting::Stub::async::SetWebAndAppActivityControl(::grpc::ClientContext* context, const ::google::actions::sdk::v2::SetWebAndAppActivityControlRequest* request, ::google::protobuf::Empty* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetWebAndAppActivityControl_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* ActionsTesting::Stub::PrepareAsyncSetWebAndAppActivityControlRaw(::grpc::ClientContext* context, const ::google::actions::sdk::v2::SetWebAndAppActivityControlRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::google::protobuf::Empty, ::google::actions::sdk::v2::SetWebAndAppActivityControlRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SetWebAndAppActivityControl_, context, request);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* ActionsTesting::Stub::AsyncSetWebAndAppActivityControlRaw(::grpc::ClientContext* context, const ::google::actions::sdk::v2::SetWebAndAppActivityControlRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSetWebAndAppActivityControlRaw(context, request, cq);
  result->StartCall();
  return result;
}

ActionsTesting::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ActionsTesting_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ActionsTesting::Service, ::google::actions::sdk::v2::SendInteractionRequest, ::google::actions::sdk::v2::SendInteractionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](ActionsTesting::Service* service,
             ::grpc::ServerContext* ctx,
             const ::google::actions::sdk::v2::SendInteractionRequest* req,
             ::google::actions::sdk::v2::SendInteractionResponse* resp) {
               return service->SendInteraction(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ActionsTesting_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ActionsTesting::Service, ::google::actions::sdk::v2::MatchIntentsRequest, ::google::actions::sdk::v2::MatchIntentsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](ActionsTesting::Service* service,
             ::grpc::ServerContext* ctx,
             const ::google::actions::sdk::v2::MatchIntentsRequest* req,
             ::google::actions::sdk::v2::MatchIntentsResponse* resp) {
               return service->MatchIntents(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ActionsTesting_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ActionsTesting::Service, ::google::actions::sdk::v2::SetWebAndAppActivityControlRequest, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](ActionsTesting::Service* service,
             ::grpc::ServerContext* ctx,
             const ::google::actions::sdk::v2::SetWebAndAppActivityControlRequest* req,
             ::google::protobuf::Empty* resp) {
               return service->SetWebAndAppActivityControl(ctx, req, resp);
             }, this)));
}

ActionsTesting::Service::~Service() {
}

::grpc::Status ActionsTesting::Service::SendInteraction(::grpc::ServerContext* context, const ::google::actions::sdk::v2::SendInteractionRequest* request, ::google::actions::sdk::v2::SendInteractionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ActionsTesting::Service::MatchIntents(::grpc::ServerContext* context, const ::google::actions::sdk::v2::MatchIntentsRequest* request, ::google::actions::sdk::v2::MatchIntentsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ActionsTesting::Service::SetWebAndAppActivityControl(::grpc::ServerContext* context, const ::google::actions::sdk::v2::SetWebAndAppActivityControlRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace actions
}  // namespace sdk
}  // namespace v2

