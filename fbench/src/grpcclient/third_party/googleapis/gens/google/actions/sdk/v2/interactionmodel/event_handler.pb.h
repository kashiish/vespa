// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/actions/sdk/v2/interactionmodel/event_handler.proto

#ifndef PROTOBUF_INCLUDED_google_2factions_2fsdk_2fv2_2finteractionmodel_2fevent_5fhandler_2eproto
#define PROTOBUF_INCLUDED_google_2factions_2fsdk_2fv2_2finteractionmodel_2fevent_5fhandler_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "google/actions/sdk/v2/interactionmodel/prompt/static_prompt.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2factions_2fsdk_2fv2_2finteractionmodel_2fevent_5fhandler_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2factions_2fsdk_2fv2_2finteractionmodel_2fevent_5fhandler_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_google_2factions_2fsdk_2fv2_2finteractionmodel_2fevent_5fhandler_2eproto();
namespace google {
namespace actions {
namespace sdk {
namespace v2 {
namespace interactionmodel {
class EventHandler;
class EventHandlerDefaultTypeInternal;
extern EventHandlerDefaultTypeInternal _EventHandler_default_instance_;
}  // namespace interactionmodel
}  // namespace v2
}  // namespace sdk
}  // namespace actions
namespace protobuf {
template<> ::google::actions::sdk::v2::interactionmodel::EventHandler* Arena::CreateMaybeMessage<::google::actions::sdk::v2::interactionmodel::EventHandler>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace actions {
namespace sdk {
namespace v2 {
namespace interactionmodel {

// ===================================================================

class EventHandler final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.actions.sdk.v2.interactionmodel.EventHandler) */ {
 public:
  EventHandler();
  virtual ~EventHandler();

  EventHandler(const EventHandler& from);

  inline EventHandler& operator=(const EventHandler& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  EventHandler(EventHandler&& from) noexcept
    : EventHandler() {
    *this = ::std::move(from);
  }

  inline EventHandler& operator=(EventHandler&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const EventHandler& default_instance();

  enum PromptCase {
    kStaticPrompt = 2,
    kStaticPromptName = 3,
    PROMPT_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const EventHandler* internal_default_instance() {
    return reinterpret_cast<const EventHandler*>(
               &_EventHandler_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(EventHandler* other);
  friend void swap(EventHandler& a, EventHandler& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline EventHandler* New() const final {
    return CreateMaybeMessage<EventHandler>(nullptr);
  }

  EventHandler* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<EventHandler>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const EventHandler& from);
  void MergeFrom(const EventHandler& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(EventHandler* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string webhook_handler = 1;
  void clear_webhook_handler();
  static const int kWebhookHandlerFieldNumber = 1;
  const ::std::string& webhook_handler() const;
  void set_webhook_handler(const ::std::string& value);
  #if LANG_CXX11
  void set_webhook_handler(::std::string&& value);
  #endif
  void set_webhook_handler(const char* value);
  void set_webhook_handler(const char* value, size_t size);
  ::std::string* mutable_webhook_handler();
  ::std::string* release_webhook_handler();
  void set_allocated_webhook_handler(::std::string* webhook_handler);

  // .google.actions.sdk.v2.interactionmodel.prompt.StaticPrompt static_prompt = 2;
  bool has_static_prompt() const;
  void clear_static_prompt();
  static const int kStaticPromptFieldNumber = 2;
  const ::google::actions::sdk::v2::interactionmodel::prompt::StaticPrompt& static_prompt() const;
  ::google::actions::sdk::v2::interactionmodel::prompt::StaticPrompt* release_static_prompt();
  ::google::actions::sdk::v2::interactionmodel::prompt::StaticPrompt* mutable_static_prompt();
  void set_allocated_static_prompt(::google::actions::sdk::v2::interactionmodel::prompt::StaticPrompt* static_prompt);

  // string static_prompt_name = 3;
  private:
  bool has_static_prompt_name() const;
  public:
  void clear_static_prompt_name();
  static const int kStaticPromptNameFieldNumber = 3;
  const ::std::string& static_prompt_name() const;
  void set_static_prompt_name(const ::std::string& value);
  #if LANG_CXX11
  void set_static_prompt_name(::std::string&& value);
  #endif
  void set_static_prompt_name(const char* value);
  void set_static_prompt_name(const char* value, size_t size);
  ::std::string* mutable_static_prompt_name();
  ::std::string* release_static_prompt_name();
  void set_allocated_static_prompt_name(::std::string* static_prompt_name);

  void clear_prompt();
  PromptCase prompt_case() const;
  // @@protoc_insertion_point(class_scope:google.actions.sdk.v2.interactionmodel.EventHandler)
 private:
  class HasBitSetters;
  void set_has_static_prompt();
  void set_has_static_prompt_name();

  inline bool has_prompt() const;
  inline void clear_has_prompt();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr webhook_handler_;
  union PromptUnion {
    PromptUnion() {}
    ::google::actions::sdk::v2::interactionmodel::prompt::StaticPrompt* static_prompt_;
    ::google::protobuf::internal::ArenaStringPtr static_prompt_name_;
  } prompt_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::TableStruct_google_2factions_2fsdk_2fv2_2finteractionmodel_2fevent_5fhandler_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// EventHandler

// string webhook_handler = 1;
inline void EventHandler::clear_webhook_handler() {
  webhook_handler_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& EventHandler::webhook_handler() const {
  // @@protoc_insertion_point(field_get:google.actions.sdk.v2.interactionmodel.EventHandler.webhook_handler)
  return webhook_handler_.GetNoArena();
}
inline void EventHandler::set_webhook_handler(const ::std::string& value) {
  
  webhook_handler_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.actions.sdk.v2.interactionmodel.EventHandler.webhook_handler)
}
#if LANG_CXX11
inline void EventHandler::set_webhook_handler(::std::string&& value) {
  
  webhook_handler_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.actions.sdk.v2.interactionmodel.EventHandler.webhook_handler)
}
#endif
inline void EventHandler::set_webhook_handler(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  webhook_handler_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.actions.sdk.v2.interactionmodel.EventHandler.webhook_handler)
}
inline void EventHandler::set_webhook_handler(const char* value, size_t size) {
  
  webhook_handler_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.actions.sdk.v2.interactionmodel.EventHandler.webhook_handler)
}
inline ::std::string* EventHandler::mutable_webhook_handler() {
  
  // @@protoc_insertion_point(field_mutable:google.actions.sdk.v2.interactionmodel.EventHandler.webhook_handler)
  return webhook_handler_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* EventHandler::release_webhook_handler() {
  // @@protoc_insertion_point(field_release:google.actions.sdk.v2.interactionmodel.EventHandler.webhook_handler)
  
  return webhook_handler_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EventHandler::set_allocated_webhook_handler(::std::string* webhook_handler) {
  if (webhook_handler != nullptr) {
    
  } else {
    
  }
  webhook_handler_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), webhook_handler);
  // @@protoc_insertion_point(field_set_allocated:google.actions.sdk.v2.interactionmodel.EventHandler.webhook_handler)
}

// .google.actions.sdk.v2.interactionmodel.prompt.StaticPrompt static_prompt = 2;
inline bool EventHandler::has_static_prompt() const {
  return prompt_case() == kStaticPrompt;
}
inline void EventHandler::set_has_static_prompt() {
  _oneof_case_[0] = kStaticPrompt;
}
inline ::google::actions::sdk::v2::interactionmodel::prompt::StaticPrompt* EventHandler::release_static_prompt() {
  // @@protoc_insertion_point(field_release:google.actions.sdk.v2.interactionmodel.EventHandler.static_prompt)
  if (has_static_prompt()) {
    clear_has_prompt();
      ::google::actions::sdk::v2::interactionmodel::prompt::StaticPrompt* temp = prompt_.static_prompt_;
    prompt_.static_prompt_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::google::actions::sdk::v2::interactionmodel::prompt::StaticPrompt& EventHandler::static_prompt() const {
  // @@protoc_insertion_point(field_get:google.actions.sdk.v2.interactionmodel.EventHandler.static_prompt)
  return has_static_prompt()
      ? *prompt_.static_prompt_
      : *reinterpret_cast< ::google::actions::sdk::v2::interactionmodel::prompt::StaticPrompt*>(&::google::actions::sdk::v2::interactionmodel::prompt::_StaticPrompt_default_instance_);
}
inline ::google::actions::sdk::v2::interactionmodel::prompt::StaticPrompt* EventHandler::mutable_static_prompt() {
  if (!has_static_prompt()) {
    clear_prompt();
    set_has_static_prompt();
    prompt_.static_prompt_ = CreateMaybeMessage< ::google::actions::sdk::v2::interactionmodel::prompt::StaticPrompt >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:google.actions.sdk.v2.interactionmodel.EventHandler.static_prompt)
  return prompt_.static_prompt_;
}

// string static_prompt_name = 3;
inline bool EventHandler::has_static_prompt_name() const {
  return prompt_case() == kStaticPromptName;
}
inline void EventHandler::set_has_static_prompt_name() {
  _oneof_case_[0] = kStaticPromptName;
}
inline void EventHandler::clear_static_prompt_name() {
  if (has_static_prompt_name()) {
    prompt_.static_prompt_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    clear_has_prompt();
  }
}
inline const ::std::string& EventHandler::static_prompt_name() const {
  // @@protoc_insertion_point(field_get:google.actions.sdk.v2.interactionmodel.EventHandler.static_prompt_name)
  if (has_static_prompt_name()) {
    return prompt_.static_prompt_name_.GetNoArena();
  }
  return *&::google::protobuf::internal::GetEmptyStringAlreadyInited();
}
inline void EventHandler::set_static_prompt_name(const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.actions.sdk.v2.interactionmodel.EventHandler.static_prompt_name)
  if (!has_static_prompt_name()) {
    clear_prompt();
    set_has_static_prompt_name();
    prompt_.static_prompt_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  prompt_.static_prompt_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.actions.sdk.v2.interactionmodel.EventHandler.static_prompt_name)
}
#if LANG_CXX11
inline void EventHandler::set_static_prompt_name(::std::string&& value) {
  // @@protoc_insertion_point(field_set:google.actions.sdk.v2.interactionmodel.EventHandler.static_prompt_name)
  if (!has_static_prompt_name()) {
    clear_prompt();
    set_has_static_prompt_name();
    prompt_.static_prompt_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  prompt_.static_prompt_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.actions.sdk.v2.interactionmodel.EventHandler.static_prompt_name)
}
#endif
inline void EventHandler::set_static_prompt_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  if (!has_static_prompt_name()) {
    clear_prompt();
    set_has_static_prompt_name();
    prompt_.static_prompt_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  prompt_.static_prompt_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.actions.sdk.v2.interactionmodel.EventHandler.static_prompt_name)
}
inline void EventHandler::set_static_prompt_name(const char* value, size_t size) {
  if (!has_static_prompt_name()) {
    clear_prompt();
    set_has_static_prompt_name();
    prompt_.static_prompt_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  prompt_.static_prompt_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.actions.sdk.v2.interactionmodel.EventHandler.static_prompt_name)
}
inline ::std::string* EventHandler::mutable_static_prompt_name() {
  if (!has_static_prompt_name()) {
    clear_prompt();
    set_has_static_prompt_name();
    prompt_.static_prompt_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_mutable:google.actions.sdk.v2.interactionmodel.EventHandler.static_prompt_name)
  return prompt_.static_prompt_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* EventHandler::release_static_prompt_name() {
  // @@protoc_insertion_point(field_release:google.actions.sdk.v2.interactionmodel.EventHandler.static_prompt_name)
  if (has_static_prompt_name()) {
    clear_has_prompt();
    return prompt_.static_prompt_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  } else {
    return nullptr;
  }
}
inline void EventHandler::set_allocated_static_prompt_name(::std::string* static_prompt_name) {
  if (has_prompt()) {
    clear_prompt();
  }
  if (static_prompt_name != nullptr) {
    set_has_static_prompt_name();
    prompt_.static_prompt_name_.UnsafeSetDefault(static_prompt_name);
  }
  // @@protoc_insertion_point(field_set_allocated:google.actions.sdk.v2.interactionmodel.EventHandler.static_prompt_name)
}

inline bool EventHandler::has_prompt() const {
  return prompt_case() != PROMPT_NOT_SET;
}
inline void EventHandler::clear_has_prompt() {
  _oneof_case_[0] = PROMPT_NOT_SET;
}
inline EventHandler::PromptCase EventHandler::prompt_case() const {
  return EventHandler::PromptCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace interactionmodel
}  // namespace v2
}  // namespace sdk
}  // namespace actions
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_google_2factions_2fsdk_2fv2_2finteractionmodel_2fevent_5fhandler_2eproto
