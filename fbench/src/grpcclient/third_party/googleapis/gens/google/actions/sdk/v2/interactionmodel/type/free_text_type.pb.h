// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/actions/sdk/v2/interactionmodel/type/free_text_type.proto

#ifndef PROTOBUF_INCLUDED_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ffree_5ftext_5ftype_2eproto
#define PROTOBUF_INCLUDED_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ffree_5ftext_5ftype_2eproto

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
#include "google/actions/sdk/v2/interactionmodel/type/entity_display.pb.h"
#include "google/api/field_behavior.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ffree_5ftext_5ftype_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ffree_5ftext_5ftype_2eproto {
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
void AddDescriptors_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ffree_5ftext_5ftype_2eproto();
namespace google {
namespace actions {
namespace sdk {
namespace v2 {
namespace interactionmodel {
namespace type {
class FreeTextType;
class FreeTextTypeDefaultTypeInternal;
extern FreeTextTypeDefaultTypeInternal _FreeTextType_default_instance_;
}  // namespace type
}  // namespace interactionmodel
}  // namespace v2
}  // namespace sdk
}  // namespace actions
namespace protobuf {
template<> ::google::actions::sdk::v2::interactionmodel::type::FreeTextType* Arena::CreateMaybeMessage<::google::actions::sdk::v2::interactionmodel::type::FreeTextType>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace actions {
namespace sdk {
namespace v2 {
namespace interactionmodel {
namespace type {

// ===================================================================

class FreeTextType final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.actions.sdk.v2.interactionmodel.type.FreeTextType) */ {
 public:
  FreeTextType();
  virtual ~FreeTextType();

  FreeTextType(const FreeTextType& from);

  inline FreeTextType& operator=(const FreeTextType& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  FreeTextType(FreeTextType&& from) noexcept
    : FreeTextType() {
    *this = ::std::move(from);
  }

  inline FreeTextType& operator=(FreeTextType&& from) noexcept {
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
  static const FreeTextType& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const FreeTextType* internal_default_instance() {
    return reinterpret_cast<const FreeTextType*>(
               &_FreeTextType_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(FreeTextType* other);
  friend void swap(FreeTextType& a, FreeTextType& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline FreeTextType* New() const final {
    return CreateMaybeMessage<FreeTextType>(nullptr);
  }

  FreeTextType* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<FreeTextType>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const FreeTextType& from);
  void MergeFrom(const FreeTextType& from);
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
  void InternalSwap(FreeTextType* other);
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

  // .google.actions.sdk.v2.interactionmodel.type.EntityDisplay display = 2 [(.google.api.field_behavior) = OPTIONAL];
  bool has_display() const;
  void clear_display();
  static const int kDisplayFieldNumber = 2;
  const ::google::actions::sdk::v2::interactionmodel::type::EntityDisplay& display() const;
  ::google::actions::sdk::v2::interactionmodel::type::EntityDisplay* release_display();
  ::google::actions::sdk::v2::interactionmodel::type::EntityDisplay* mutable_display();
  void set_allocated_display(::google::actions::sdk::v2::interactionmodel::type::EntityDisplay* display);

  // @@protoc_insertion_point(class_scope:google.actions.sdk.v2.interactionmodel.type.FreeTextType)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::actions::sdk::v2::interactionmodel::type::EntityDisplay* display_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ffree_5ftext_5ftype_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FreeTextType

// .google.actions.sdk.v2.interactionmodel.type.EntityDisplay display = 2 [(.google.api.field_behavior) = OPTIONAL];
inline bool FreeTextType::has_display() const {
  return this != internal_default_instance() && display_ != nullptr;
}
inline const ::google::actions::sdk::v2::interactionmodel::type::EntityDisplay& FreeTextType::display() const {
  const ::google::actions::sdk::v2::interactionmodel::type::EntityDisplay* p = display_;
  // @@protoc_insertion_point(field_get:google.actions.sdk.v2.interactionmodel.type.FreeTextType.display)
  return p != nullptr ? *p : *reinterpret_cast<const ::google::actions::sdk::v2::interactionmodel::type::EntityDisplay*>(
      &::google::actions::sdk::v2::interactionmodel::type::_EntityDisplay_default_instance_);
}
inline ::google::actions::sdk::v2::interactionmodel::type::EntityDisplay* FreeTextType::release_display() {
  // @@protoc_insertion_point(field_release:google.actions.sdk.v2.interactionmodel.type.FreeTextType.display)
  
  ::google::actions::sdk::v2::interactionmodel::type::EntityDisplay* temp = display_;
  display_ = nullptr;
  return temp;
}
inline ::google::actions::sdk::v2::interactionmodel::type::EntityDisplay* FreeTextType::mutable_display() {
  
  if (display_ == nullptr) {
    auto* p = CreateMaybeMessage<::google::actions::sdk::v2::interactionmodel::type::EntityDisplay>(GetArenaNoVirtual());
    display_ = p;
  }
  // @@protoc_insertion_point(field_mutable:google.actions.sdk.v2.interactionmodel.type.FreeTextType.display)
  return display_;
}
inline void FreeTextType::set_allocated_display(::google::actions::sdk::v2::interactionmodel::type::EntityDisplay* display) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(display_);
  }
  if (display) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      display = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, display, submessage_arena);
    }
    
  } else {
    
  }
  display_ = display;
  // @@protoc_insertion_point(field_set_allocated:google.actions.sdk.v2.interactionmodel.type.FreeTextType.display)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace type
}  // namespace interactionmodel
}  // namespace v2
}  // namespace sdk
}  // namespace actions
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ffree_5ftext_5ftype_2eproto
