// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/apps/script/type/slides/slides_addon_manifest.proto

#ifndef PROTOBUF_INCLUDED_google_2fapps_2fscript_2ftype_2fslides_2fslides_5faddon_5fmanifest_2eproto
#define PROTOBUF_INCLUDED_google_2fapps_2fscript_2ftype_2fslides_2fslides_5faddon_5fmanifest_2eproto

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
#include "google/api/field_behavior.pb.h"
#include "google/apps/script/type/extension_point.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fapps_2fscript_2ftype_2fslides_2fslides_5faddon_5fmanifest_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fapps_2fscript_2ftype_2fslides_2fslides_5faddon_5fmanifest_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_google_2fapps_2fscript_2ftype_2fslides_2fslides_5faddon_5fmanifest_2eproto();
namespace google {
namespace apps {
namespace script {
namespace type {
namespace slides {
class SlidesAddOnManifest;
class SlidesAddOnManifestDefaultTypeInternal;
extern SlidesAddOnManifestDefaultTypeInternal _SlidesAddOnManifest_default_instance_;
class SlidesExtensionPoint;
class SlidesExtensionPointDefaultTypeInternal;
extern SlidesExtensionPointDefaultTypeInternal _SlidesExtensionPoint_default_instance_;
}  // namespace slides
}  // namespace type
}  // namespace script
}  // namespace apps
namespace protobuf {
template<> ::google::apps::script::type::slides::SlidesAddOnManifest* Arena::CreateMaybeMessage<::google::apps::script::type::slides::SlidesAddOnManifest>(Arena*);
template<> ::google::apps::script::type::slides::SlidesExtensionPoint* Arena::CreateMaybeMessage<::google::apps::script::type::slides::SlidesExtensionPoint>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace apps {
namespace script {
namespace type {
namespace slides {

// ===================================================================

class SlidesAddOnManifest final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.apps.script.type.slides.SlidesAddOnManifest) */ {
 public:
  SlidesAddOnManifest();
  virtual ~SlidesAddOnManifest();

  SlidesAddOnManifest(const SlidesAddOnManifest& from);

  inline SlidesAddOnManifest& operator=(const SlidesAddOnManifest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SlidesAddOnManifest(SlidesAddOnManifest&& from) noexcept
    : SlidesAddOnManifest() {
    *this = ::std::move(from);
  }

  inline SlidesAddOnManifest& operator=(SlidesAddOnManifest&& from) noexcept {
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
  static const SlidesAddOnManifest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SlidesAddOnManifest* internal_default_instance() {
    return reinterpret_cast<const SlidesAddOnManifest*>(
               &_SlidesAddOnManifest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(SlidesAddOnManifest* other);
  friend void swap(SlidesAddOnManifest& a, SlidesAddOnManifest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SlidesAddOnManifest* New() const final {
    return CreateMaybeMessage<SlidesAddOnManifest>(nullptr);
  }

  SlidesAddOnManifest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SlidesAddOnManifest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SlidesAddOnManifest& from);
  void MergeFrom(const SlidesAddOnManifest& from);
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
  void InternalSwap(SlidesAddOnManifest* other);
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

  // .google.apps.script.type.HomepageExtensionPoint homepage_trigger = 1;
  bool has_homepage_trigger() const;
  void clear_homepage_trigger();
  static const int kHomepageTriggerFieldNumber = 1;
  const ::google::apps::script::type::HomepageExtensionPoint& homepage_trigger() const;
  ::google::apps::script::type::HomepageExtensionPoint* release_homepage_trigger();
  ::google::apps::script::type::HomepageExtensionPoint* mutable_homepage_trigger();
  void set_allocated_homepage_trigger(::google::apps::script::type::HomepageExtensionPoint* homepage_trigger);

  // .google.apps.script.type.slides.SlidesExtensionPoint on_file_scope_granted_trigger = 2;
  bool has_on_file_scope_granted_trigger() const;
  void clear_on_file_scope_granted_trigger();
  static const int kOnFileScopeGrantedTriggerFieldNumber = 2;
  const ::google::apps::script::type::slides::SlidesExtensionPoint& on_file_scope_granted_trigger() const;
  ::google::apps::script::type::slides::SlidesExtensionPoint* release_on_file_scope_granted_trigger();
  ::google::apps::script::type::slides::SlidesExtensionPoint* mutable_on_file_scope_granted_trigger();
  void set_allocated_on_file_scope_granted_trigger(::google::apps::script::type::slides::SlidesExtensionPoint* on_file_scope_granted_trigger);

  // @@protoc_insertion_point(class_scope:google.apps.script.type.slides.SlidesAddOnManifest)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::apps::script::type::HomepageExtensionPoint* homepage_trigger_;
  ::google::apps::script::type::slides::SlidesExtensionPoint* on_file_scope_granted_trigger_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fapps_2fscript_2ftype_2fslides_2fslides_5faddon_5fmanifest_2eproto;
};
// -------------------------------------------------------------------

class SlidesExtensionPoint final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.apps.script.type.slides.SlidesExtensionPoint) */ {
 public:
  SlidesExtensionPoint();
  virtual ~SlidesExtensionPoint();

  SlidesExtensionPoint(const SlidesExtensionPoint& from);

  inline SlidesExtensionPoint& operator=(const SlidesExtensionPoint& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SlidesExtensionPoint(SlidesExtensionPoint&& from) noexcept
    : SlidesExtensionPoint() {
    *this = ::std::move(from);
  }

  inline SlidesExtensionPoint& operator=(SlidesExtensionPoint&& from) noexcept {
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
  static const SlidesExtensionPoint& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SlidesExtensionPoint* internal_default_instance() {
    return reinterpret_cast<const SlidesExtensionPoint*>(
               &_SlidesExtensionPoint_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(SlidesExtensionPoint* other);
  friend void swap(SlidesExtensionPoint& a, SlidesExtensionPoint& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SlidesExtensionPoint* New() const final {
    return CreateMaybeMessage<SlidesExtensionPoint>(nullptr);
  }

  SlidesExtensionPoint* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SlidesExtensionPoint>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SlidesExtensionPoint& from);
  void MergeFrom(const SlidesExtensionPoint& from);
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
  void InternalSwap(SlidesExtensionPoint* other);
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

  // string run_function = 1 [(.google.api.field_behavior) = REQUIRED];
  void clear_run_function();
  static const int kRunFunctionFieldNumber = 1;
  const ::std::string& run_function() const;
  void set_run_function(const ::std::string& value);
  #if LANG_CXX11
  void set_run_function(::std::string&& value);
  #endif
  void set_run_function(const char* value);
  void set_run_function(const char* value, size_t size);
  ::std::string* mutable_run_function();
  ::std::string* release_run_function();
  void set_allocated_run_function(::std::string* run_function);

  // @@protoc_insertion_point(class_scope:google.apps.script.type.slides.SlidesExtensionPoint)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr run_function_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fapps_2fscript_2ftype_2fslides_2fslides_5faddon_5fmanifest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SlidesAddOnManifest

// .google.apps.script.type.HomepageExtensionPoint homepage_trigger = 1;
inline bool SlidesAddOnManifest::has_homepage_trigger() const {
  return this != internal_default_instance() && homepage_trigger_ != nullptr;
}
inline const ::google::apps::script::type::HomepageExtensionPoint& SlidesAddOnManifest::homepage_trigger() const {
  const ::google::apps::script::type::HomepageExtensionPoint* p = homepage_trigger_;
  // @@protoc_insertion_point(field_get:google.apps.script.type.slides.SlidesAddOnManifest.homepage_trigger)
  return p != nullptr ? *p : *reinterpret_cast<const ::google::apps::script::type::HomepageExtensionPoint*>(
      &::google::apps::script::type::_HomepageExtensionPoint_default_instance_);
}
inline ::google::apps::script::type::HomepageExtensionPoint* SlidesAddOnManifest::release_homepage_trigger() {
  // @@protoc_insertion_point(field_release:google.apps.script.type.slides.SlidesAddOnManifest.homepage_trigger)
  
  ::google::apps::script::type::HomepageExtensionPoint* temp = homepage_trigger_;
  homepage_trigger_ = nullptr;
  return temp;
}
inline ::google::apps::script::type::HomepageExtensionPoint* SlidesAddOnManifest::mutable_homepage_trigger() {
  
  if (homepage_trigger_ == nullptr) {
    auto* p = CreateMaybeMessage<::google::apps::script::type::HomepageExtensionPoint>(GetArenaNoVirtual());
    homepage_trigger_ = p;
  }
  // @@protoc_insertion_point(field_mutable:google.apps.script.type.slides.SlidesAddOnManifest.homepage_trigger)
  return homepage_trigger_;
}
inline void SlidesAddOnManifest::set_allocated_homepage_trigger(::google::apps::script::type::HomepageExtensionPoint* homepage_trigger) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(homepage_trigger_);
  }
  if (homepage_trigger) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      homepage_trigger = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, homepage_trigger, submessage_arena);
    }
    
  } else {
    
  }
  homepage_trigger_ = homepage_trigger;
  // @@protoc_insertion_point(field_set_allocated:google.apps.script.type.slides.SlidesAddOnManifest.homepage_trigger)
}

// .google.apps.script.type.slides.SlidesExtensionPoint on_file_scope_granted_trigger = 2;
inline bool SlidesAddOnManifest::has_on_file_scope_granted_trigger() const {
  return this != internal_default_instance() && on_file_scope_granted_trigger_ != nullptr;
}
inline void SlidesAddOnManifest::clear_on_file_scope_granted_trigger() {
  if (GetArenaNoVirtual() == nullptr && on_file_scope_granted_trigger_ != nullptr) {
    delete on_file_scope_granted_trigger_;
  }
  on_file_scope_granted_trigger_ = nullptr;
}
inline const ::google::apps::script::type::slides::SlidesExtensionPoint& SlidesAddOnManifest::on_file_scope_granted_trigger() const {
  const ::google::apps::script::type::slides::SlidesExtensionPoint* p = on_file_scope_granted_trigger_;
  // @@protoc_insertion_point(field_get:google.apps.script.type.slides.SlidesAddOnManifest.on_file_scope_granted_trigger)
  return p != nullptr ? *p : *reinterpret_cast<const ::google::apps::script::type::slides::SlidesExtensionPoint*>(
      &::google::apps::script::type::slides::_SlidesExtensionPoint_default_instance_);
}
inline ::google::apps::script::type::slides::SlidesExtensionPoint* SlidesAddOnManifest::release_on_file_scope_granted_trigger() {
  // @@protoc_insertion_point(field_release:google.apps.script.type.slides.SlidesAddOnManifest.on_file_scope_granted_trigger)
  
  ::google::apps::script::type::slides::SlidesExtensionPoint* temp = on_file_scope_granted_trigger_;
  on_file_scope_granted_trigger_ = nullptr;
  return temp;
}
inline ::google::apps::script::type::slides::SlidesExtensionPoint* SlidesAddOnManifest::mutable_on_file_scope_granted_trigger() {
  
  if (on_file_scope_granted_trigger_ == nullptr) {
    auto* p = CreateMaybeMessage<::google::apps::script::type::slides::SlidesExtensionPoint>(GetArenaNoVirtual());
    on_file_scope_granted_trigger_ = p;
  }
  // @@protoc_insertion_point(field_mutable:google.apps.script.type.slides.SlidesAddOnManifest.on_file_scope_granted_trigger)
  return on_file_scope_granted_trigger_;
}
inline void SlidesAddOnManifest::set_allocated_on_file_scope_granted_trigger(::google::apps::script::type::slides::SlidesExtensionPoint* on_file_scope_granted_trigger) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete on_file_scope_granted_trigger_;
  }
  if (on_file_scope_granted_trigger) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      on_file_scope_granted_trigger = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, on_file_scope_granted_trigger, submessage_arena);
    }
    
  } else {
    
  }
  on_file_scope_granted_trigger_ = on_file_scope_granted_trigger;
  // @@protoc_insertion_point(field_set_allocated:google.apps.script.type.slides.SlidesAddOnManifest.on_file_scope_granted_trigger)
}

// -------------------------------------------------------------------

// SlidesExtensionPoint

// string run_function = 1 [(.google.api.field_behavior) = REQUIRED];
inline void SlidesExtensionPoint::clear_run_function() {
  run_function_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SlidesExtensionPoint::run_function() const {
  // @@protoc_insertion_point(field_get:google.apps.script.type.slides.SlidesExtensionPoint.run_function)
  return run_function_.GetNoArena();
}
inline void SlidesExtensionPoint::set_run_function(const ::std::string& value) {
  
  run_function_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.apps.script.type.slides.SlidesExtensionPoint.run_function)
}
#if LANG_CXX11
inline void SlidesExtensionPoint::set_run_function(::std::string&& value) {
  
  run_function_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.apps.script.type.slides.SlidesExtensionPoint.run_function)
}
#endif
inline void SlidesExtensionPoint::set_run_function(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  run_function_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.apps.script.type.slides.SlidesExtensionPoint.run_function)
}
inline void SlidesExtensionPoint::set_run_function(const char* value, size_t size) {
  
  run_function_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.apps.script.type.slides.SlidesExtensionPoint.run_function)
}
inline ::std::string* SlidesExtensionPoint::mutable_run_function() {
  
  // @@protoc_insertion_point(field_mutable:google.apps.script.type.slides.SlidesExtensionPoint.run_function)
  return run_function_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SlidesExtensionPoint::release_run_function() {
  // @@protoc_insertion_point(field_release:google.apps.script.type.slides.SlidesExtensionPoint.run_function)
  
  return run_function_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SlidesExtensionPoint::set_allocated_run_function(::std::string* run_function) {
  if (run_function != nullptr) {
    
  } else {
    
  }
  run_function_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), run_function);
  // @@protoc_insertion_point(field_set_allocated:google.apps.script.type.slides.SlidesExtensionPoint.run_function)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace slides
}  // namespace type
}  // namespace script
}  // namespace apps
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_google_2fapps_2fscript_2ftype_2fslides_2fslides_5faddon_5fmanifest_2eproto
