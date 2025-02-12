// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/watcher/v1/watch.proto

#include "google/watcher/v1/watch.pb.h"
#include "google/watcher/v1/watch.grpc.pb.h"

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
namespace watcher {
namespace v1 {

static const char* Watcher_method_names[] = {
  "/google.watcher.v1.Watcher/Watch",
};

std::unique_ptr< Watcher::Stub> Watcher::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Watcher::Stub> stub(new Watcher::Stub(channel, options));
  return stub;
}

Watcher::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Watch_(Watcher_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::ClientReader< ::google::watcher::v1::ChangeBatch>* Watcher::Stub::WatchRaw(::grpc::ClientContext* context, const ::google::watcher::v1::Request& request) {
  return ::grpc::internal::ClientReaderFactory< ::google::watcher::v1::ChangeBatch>::Create(channel_.get(), rpcmethod_Watch_, context, request);
}

void Watcher::Stub::async::Watch(::grpc::ClientContext* context, const ::google::watcher::v1::Request* request, ::grpc::ClientReadReactor< ::google::watcher::v1::ChangeBatch>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::google::watcher::v1::ChangeBatch>::Create(stub_->channel_.get(), stub_->rpcmethod_Watch_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::google::watcher::v1::ChangeBatch>* Watcher::Stub::AsyncWatchRaw(::grpc::ClientContext* context, const ::google::watcher::v1::Request& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::google::watcher::v1::ChangeBatch>::Create(channel_.get(), cq, rpcmethod_Watch_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::google::watcher::v1::ChangeBatch>* Watcher::Stub::PrepareAsyncWatchRaw(::grpc::ClientContext* context, const ::google::watcher::v1::Request& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::google::watcher::v1::ChangeBatch>::Create(channel_.get(), cq, rpcmethod_Watch_, context, request, false, nullptr);
}

Watcher::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Watcher_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< Watcher::Service, ::google::watcher::v1::Request, ::google::watcher::v1::ChangeBatch>(
          [](Watcher::Service* service,
             ::grpc::ServerContext* ctx,
             const ::google::watcher::v1::Request* req,
             ::grpc::ServerWriter<::google::watcher::v1::ChangeBatch>* writer) {
               return service->Watch(ctx, req, writer);
             }, this)));
}

Watcher::Service::~Service() {
}

::grpc::Status Watcher::Service::Watch(::grpc::ServerContext* context, const ::google::watcher::v1::Request* request, ::grpc::ServerWriter< ::google::watcher::v1::ChangeBatch>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace watcher
}  // namespace v1

