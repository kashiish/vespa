// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/actions/sdk/v2/release_channel.proto

#ifndef PROTOBUF_INCLUDED_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto
#define PROTOBUF_INCLUDED_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto

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
#include "google/api/resource.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto {
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
void AddDescriptors_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto();
namespace google {
namespace actions {
namespace sdk {
namespace v2 {
class ReleaseChannel;
class ReleaseChannelDefaultTypeInternal;
extern ReleaseChannelDefaultTypeInternal _ReleaseChannel_default_instance_;
}  // namespace v2
}  // namespace sdk
}  // namespace actions
namespace protobuf {
template<> ::google::actions::sdk::v2::ReleaseChannel* Arena::CreateMaybeMessage<::google::actions::sdk::v2::ReleaseChannel>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace actions {
namespace sdk {
namespace v2 {

// ===================================================================

class ReleaseChannel final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.actions.sdk.v2.ReleaseChannel) */ {
 public:
  ReleaseChannel();
  virtual ~ReleaseChannel();

  ReleaseChannel(const ReleaseChannel& from);

  inline ReleaseChannel& operator=(const ReleaseChannel& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ReleaseChannel(ReleaseChannel&& from) noexcept
    : ReleaseChannel() {
    *this = ::std::move(from);
  }

  inline ReleaseChannel& operator=(ReleaseChannel&& from) noexcept {
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
  static const ReleaseChannel& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ReleaseChannel* internal_default_instance() {
    return reinterpret_cast<const ReleaseChannel*>(
               &_ReleaseChannel_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ReleaseChannel* other);
  friend void swap(ReleaseChannel& a, ReleaseChannel& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ReleaseChannel* New() const final {
    return CreateMaybeMessage<ReleaseChannel>(nullptr);
  }

  ReleaseChannel* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ReleaseChannel>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ReleaseChannel& from);
  void MergeFrom(const ReleaseChannel& from);
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
  void InternalSwap(ReleaseChannel* other);
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

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string current_version = 2;
  void clear_current_version();
  static const int kCurrentVersionFieldNumber = 2;
  const ::std::string& current_version() const;
  void set_current_version(const ::std::string& value);
  #if LANG_CXX11
  void set_current_version(::std::string&& value);
  #endif
  void set_current_version(const char* value);
  void set_current_version(const char* value, size_t size);
  ::std::string* mutable_current_version();
  ::std::string* release_current_version();
  void set_allocated_current_version(::std::string* current_version);

  // string pending_version = 3;
  void clear_pending_version();
  static const int kPendingVersionFieldNumber = 3;
  const ::std::string& pending_version() const;
  void set_pending_version(const ::std::string& value);
  #if LANG_CXX11
  void set_pending_version(::std::string&& value);
  #endif
  void set_pending_version(const char* value);
  void set_pending_version(const char* value, size_t size);
  ::std::string* mutable_pending_version();
  ::std::string* release_pending_version();
  void set_allocated_pending_version(::std::string* pending_version);

  // @@protoc_insertion_point(class_scope:google.actions.sdk.v2.ReleaseChannel)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr current_version_;
  ::google::protobuf::internal::ArenaStringPtr pending_version_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ReleaseChannel

// string name = 1;
inline void ReleaseChannel::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ReleaseChannel::name() const {
  // @@protoc_insertion_point(field_get:google.actions.sdk.v2.ReleaseChannel.name)
  return name_.GetNoArena();
}
inline void ReleaseChannel::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.actions.sdk.v2.ReleaseChannel.name)
}
#if LANG_CXX11
inline void ReleaseChannel::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.actions.sdk.v2.ReleaseChannel.name)
}
#endif
inline void ReleaseChannel::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.actions.sdk.v2.ReleaseChannel.name)
}
inline void ReleaseChannel::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.actions.sdk.v2.ReleaseChannel.name)
}
inline ::std::string* ReleaseChannel::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.actions.sdk.v2.ReleaseChannel.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ReleaseChannel::release_name() {
  // @@protoc_insertion_point(field_release:google.actions.sdk.v2.ReleaseChannel.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ReleaseChannel::set_allocated_name(::std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.actions.sdk.v2.ReleaseChannel.name)
}

// string current_version = 2;
inline void ReleaseChannel::clear_current_version() {
  current_version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ReleaseChannel::current_version() const {
  // @@protoc_insertion_point(field_get:google.actions.sdk.v2.ReleaseChannel.current_version)
  return current_version_.GetNoArena();
}
inline void ReleaseChannel::set_current_version(const ::std::string& value) {
  
  current_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.actions.sdk.v2.ReleaseChannel.current_version)
}
#if LANG_CXX11
inline void ReleaseChannel::set_current_version(::std::string&& value) {
  
  current_version_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.actions.sdk.v2.ReleaseChannel.current_version)
}
#endif
inline void ReleaseChannel::set_current_version(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  current_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.actions.sdk.v2.ReleaseChannel.current_version)
}
inline void ReleaseChannel::set_current_version(const char* value, size_t size) {
  
  current_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.actions.sdk.v2.ReleaseChannel.current_version)
}
inline ::std::string* ReleaseChannel::mutable_current_version() {
  
  // @@protoc_insertion_point(field_mutable:google.actions.sdk.v2.ReleaseChannel.current_version)
  return current_version_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ReleaseChannel::release_current_version() {
  // @@protoc_insertion_point(field_release:google.actions.sdk.v2.ReleaseChannel.current_version)
  
  return current_version_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ReleaseChannel::set_allocated_current_version(::std::string* current_version) {
  if (current_version != nullptr) {
    
  } else {
    
  }
  current_version_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), current_version);
  // @@protoc_insertion_point(field_set_allocated:google.actions.sdk.v2.ReleaseChannel.current_version)
}

// string pending_version = 3;
inline void ReleaseChannel::clear_pending_version() {
  pending_version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ReleaseChannel::pending_version() const {
  // @@protoc_insertion_point(field_get:google.actions.sdk.v2.ReleaseChannel.pending_version)
  return pending_version_.GetNoArena();
}
inline void ReleaseChannel::set_pending_version(const ::std::string& value) {
  
  pending_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.actions.sdk.v2.ReleaseChannel.pending_version)
}
#if LANG_CXX11
inline void ReleaseChannel::set_pending_version(::std::string&& value) {
  
  pending_version_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.actions.sdk.v2.ReleaseChannel.pending_version)
}
#endif
inline void ReleaseChannel::set_pending_version(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  pending_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.actions.sdk.v2.ReleaseChannel.pending_version)
}
inline void ReleaseChannel::set_pending_version(const char* value, size_t size) {
  
  pending_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.actions.sdk.v2.ReleaseChannel.pending_version)
}
inline ::std::string* ReleaseChannel::mutable_pending_version() {
  
  // @@protoc_insertion_point(field_mutable:google.actions.sdk.v2.ReleaseChannel.pending_version)
  return pending_version_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ReleaseChannel::release_pending_version() {
  // @@protoc_insertion_point(field_release:google.actions.sdk.v2.ReleaseChannel.pending_version)
  
  return pending_version_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ReleaseChannel::set_allocated_pending_version(::std::string* pending_version) {
  if (pending_version != nullptr) {
    
  } else {
    
  }
  pending_version_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), pending_version);
  // @@protoc_insertion_point(field_set_allocated:google.actions.sdk.v2.ReleaseChannel.pending_version)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v2
}  // namespace sdk
}  // namespace actions
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto
