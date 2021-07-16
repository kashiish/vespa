// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/datastore/admin/v1/index.proto

#ifndef PROTOBUF_INCLUDED_google_2fdatastore_2fadmin_2fv1_2findex_2eproto
#define PROTOBUF_INCLUDED_google_2fdatastore_2fadmin_2fv1_2findex_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "google/api/field_behavior.pb.h"
#include "google/api/annotations.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fdatastore_2fadmin_2fv1_2findex_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fdatastore_2fadmin_2fv1_2findex_2eproto {
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
void AddDescriptors_google_2fdatastore_2fadmin_2fv1_2findex_2eproto();
namespace google {
namespace datastore {
namespace admin {
namespace v1 {
class Index;
class IndexDefaultTypeInternal;
extern IndexDefaultTypeInternal _Index_default_instance_;
class Index_IndexedProperty;
class Index_IndexedPropertyDefaultTypeInternal;
extern Index_IndexedPropertyDefaultTypeInternal _Index_IndexedProperty_default_instance_;
}  // namespace v1
}  // namespace admin
}  // namespace datastore
namespace protobuf {
template<> ::google::datastore::admin::v1::Index* Arena::CreateMaybeMessage<::google::datastore::admin::v1::Index>(Arena*);
template<> ::google::datastore::admin::v1::Index_IndexedProperty* Arena::CreateMaybeMessage<::google::datastore::admin::v1::Index_IndexedProperty>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace datastore {
namespace admin {
namespace v1 {

enum Index_AncestorMode {
  Index_AncestorMode_ANCESTOR_MODE_UNSPECIFIED = 0,
  Index_AncestorMode_NONE = 1,
  Index_AncestorMode_ALL_ANCESTORS = 2,
  Index_AncestorMode_Index_AncestorMode_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::min(),
  Index_AncestorMode_Index_AncestorMode_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::max()
};
bool Index_AncestorMode_IsValid(int value);
const Index_AncestorMode Index_AncestorMode_AncestorMode_MIN = Index_AncestorMode_ANCESTOR_MODE_UNSPECIFIED;
const Index_AncestorMode Index_AncestorMode_AncestorMode_MAX = Index_AncestorMode_ALL_ANCESTORS;
const int Index_AncestorMode_AncestorMode_ARRAYSIZE = Index_AncestorMode_AncestorMode_MAX + 1;

const ::google::protobuf::EnumDescriptor* Index_AncestorMode_descriptor();
inline const ::std::string& Index_AncestorMode_Name(Index_AncestorMode value) {
  return ::google::protobuf::internal::NameOfEnum(
    Index_AncestorMode_descriptor(), value);
}
inline bool Index_AncestorMode_Parse(
    const ::std::string& name, Index_AncestorMode* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Index_AncestorMode>(
    Index_AncestorMode_descriptor(), name, value);
}
enum Index_Direction {
  Index_Direction_DIRECTION_UNSPECIFIED = 0,
  Index_Direction_ASCENDING = 1,
  Index_Direction_DESCENDING = 2,
  Index_Direction_Index_Direction_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::min(),
  Index_Direction_Index_Direction_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::max()
};
bool Index_Direction_IsValid(int value);
const Index_Direction Index_Direction_Direction_MIN = Index_Direction_DIRECTION_UNSPECIFIED;
const Index_Direction Index_Direction_Direction_MAX = Index_Direction_DESCENDING;
const int Index_Direction_Direction_ARRAYSIZE = Index_Direction_Direction_MAX + 1;

const ::google::protobuf::EnumDescriptor* Index_Direction_descriptor();
inline const ::std::string& Index_Direction_Name(Index_Direction value) {
  return ::google::protobuf::internal::NameOfEnum(
    Index_Direction_descriptor(), value);
}
inline bool Index_Direction_Parse(
    const ::std::string& name, Index_Direction* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Index_Direction>(
    Index_Direction_descriptor(), name, value);
}
enum Index_State {
  Index_State_STATE_UNSPECIFIED = 0,
  Index_State_CREATING = 1,
  Index_State_READY = 2,
  Index_State_DELETING = 3,
  Index_State_ERROR = 4,
  Index_State_Index_State_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::min(),
  Index_State_Index_State_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::max()
};
bool Index_State_IsValid(int value);
const Index_State Index_State_State_MIN = Index_State_STATE_UNSPECIFIED;
const Index_State Index_State_State_MAX = Index_State_ERROR;
const int Index_State_State_ARRAYSIZE = Index_State_State_MAX + 1;

const ::google::protobuf::EnumDescriptor* Index_State_descriptor();
inline const ::std::string& Index_State_Name(Index_State value) {
  return ::google::protobuf::internal::NameOfEnum(
    Index_State_descriptor(), value);
}
inline bool Index_State_Parse(
    const ::std::string& name, Index_State* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Index_State>(
    Index_State_descriptor(), name, value);
}
// ===================================================================

class Index_IndexedProperty final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.datastore.admin.v1.Index.IndexedProperty) */ {
 public:
  Index_IndexedProperty();
  virtual ~Index_IndexedProperty();

  Index_IndexedProperty(const Index_IndexedProperty& from);

  inline Index_IndexedProperty& operator=(const Index_IndexedProperty& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Index_IndexedProperty(Index_IndexedProperty&& from) noexcept
    : Index_IndexedProperty() {
    *this = ::std::move(from);
  }

  inline Index_IndexedProperty& operator=(Index_IndexedProperty&& from) noexcept {
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
  static const Index_IndexedProperty& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Index_IndexedProperty* internal_default_instance() {
    return reinterpret_cast<const Index_IndexedProperty*>(
               &_Index_IndexedProperty_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Index_IndexedProperty* other);
  friend void swap(Index_IndexedProperty& a, Index_IndexedProperty& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Index_IndexedProperty* New() const final {
    return CreateMaybeMessage<Index_IndexedProperty>(nullptr);
  }

  Index_IndexedProperty* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Index_IndexedProperty>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Index_IndexedProperty& from);
  void MergeFrom(const Index_IndexedProperty& from);
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
  void InternalSwap(Index_IndexedProperty* other);
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

  // string name = 1 [(.google.api.field_behavior) = REQUIRED];
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

  // .google.datastore.admin.v1.Index.Direction direction = 2 [(.google.api.field_behavior) = REQUIRED];
  void clear_direction();
  static const int kDirectionFieldNumber = 2;
  ::google::datastore::admin::v1::Index_Direction direction() const;
  void set_direction(::google::datastore::admin::v1::Index_Direction value);

  // @@protoc_insertion_point(class_scope:google.datastore.admin.v1.Index.IndexedProperty)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  int direction_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fdatastore_2fadmin_2fv1_2findex_2eproto;
};
// -------------------------------------------------------------------

class Index final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.datastore.admin.v1.Index) */ {
 public:
  Index();
  virtual ~Index();

  Index(const Index& from);

  inline Index& operator=(const Index& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Index(Index&& from) noexcept
    : Index() {
    *this = ::std::move(from);
  }

  inline Index& operator=(Index&& from) noexcept {
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
  static const Index& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Index* internal_default_instance() {
    return reinterpret_cast<const Index*>(
               &_Index_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Index* other);
  friend void swap(Index& a, Index& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Index* New() const final {
    return CreateMaybeMessage<Index>(nullptr);
  }

  Index* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Index>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Index& from);
  void MergeFrom(const Index& from);
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
  void InternalSwap(Index* other);
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

  typedef Index_IndexedProperty IndexedProperty;

  typedef Index_AncestorMode AncestorMode;
  static const AncestorMode ANCESTOR_MODE_UNSPECIFIED =
    Index_AncestorMode_ANCESTOR_MODE_UNSPECIFIED;
  static const AncestorMode NONE =
    Index_AncestorMode_NONE;
  static const AncestorMode ALL_ANCESTORS =
    Index_AncestorMode_ALL_ANCESTORS;
  static inline bool AncestorMode_IsValid(int value) {
    return Index_AncestorMode_IsValid(value);
  }
  static const AncestorMode AncestorMode_MIN =
    Index_AncestorMode_AncestorMode_MIN;
  static const AncestorMode AncestorMode_MAX =
    Index_AncestorMode_AncestorMode_MAX;
  static const int AncestorMode_ARRAYSIZE =
    Index_AncestorMode_AncestorMode_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  AncestorMode_descriptor() {
    return Index_AncestorMode_descriptor();
  }
  static inline const ::std::string& AncestorMode_Name(AncestorMode value) {
    return Index_AncestorMode_Name(value);
  }
  static inline bool AncestorMode_Parse(const ::std::string& name,
      AncestorMode* value) {
    return Index_AncestorMode_Parse(name, value);
  }

  typedef Index_Direction Direction;
  static const Direction DIRECTION_UNSPECIFIED =
    Index_Direction_DIRECTION_UNSPECIFIED;
  static const Direction ASCENDING =
    Index_Direction_ASCENDING;
  static const Direction DESCENDING =
    Index_Direction_DESCENDING;
  static inline bool Direction_IsValid(int value) {
    return Index_Direction_IsValid(value);
  }
  static const Direction Direction_MIN =
    Index_Direction_Direction_MIN;
  static const Direction Direction_MAX =
    Index_Direction_Direction_MAX;
  static const int Direction_ARRAYSIZE =
    Index_Direction_Direction_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Direction_descriptor() {
    return Index_Direction_descriptor();
  }
  static inline const ::std::string& Direction_Name(Direction value) {
    return Index_Direction_Name(value);
  }
  static inline bool Direction_Parse(const ::std::string& name,
      Direction* value) {
    return Index_Direction_Parse(name, value);
  }

  typedef Index_State State;
  static const State STATE_UNSPECIFIED =
    Index_State_STATE_UNSPECIFIED;
  static const State CREATING =
    Index_State_CREATING;
  static const State READY =
    Index_State_READY;
  static const State DELETING =
    Index_State_DELETING;
  static const State ERROR =
    Index_State_ERROR;
  static inline bool State_IsValid(int value) {
    return Index_State_IsValid(value);
  }
  static const State State_MIN =
    Index_State_State_MIN;
  static const State State_MAX =
    Index_State_State_MAX;
  static const int State_ARRAYSIZE =
    Index_State_State_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  State_descriptor() {
    return Index_State_descriptor();
  }
  static inline const ::std::string& State_Name(State value) {
    return Index_State_Name(value);
  }
  static inline bool State_Parse(const ::std::string& name,
      State* value) {
    return Index_State_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // repeated .google.datastore.admin.v1.Index.IndexedProperty properties = 6 [(.google.api.field_behavior) = REQUIRED];
  int properties_size() const;
  void clear_properties();
  static const int kPropertiesFieldNumber = 6;
  ::google::datastore::admin::v1::Index_IndexedProperty* mutable_properties(int index);
  ::google::protobuf::RepeatedPtrField< ::google::datastore::admin::v1::Index_IndexedProperty >*
      mutable_properties();
  const ::google::datastore::admin::v1::Index_IndexedProperty& properties(int index) const;
  ::google::datastore::admin::v1::Index_IndexedProperty* add_properties();
  const ::google::protobuf::RepeatedPtrField< ::google::datastore::admin::v1::Index_IndexedProperty >&
      properties() const;

  // string project_id = 1 [(.google.api.field_behavior) = OUTPUT_ONLY];
  void clear_project_id();
  static const int kProjectIdFieldNumber = 1;
  const ::std::string& project_id() const;
  void set_project_id(const ::std::string& value);
  #if LANG_CXX11
  void set_project_id(::std::string&& value);
  #endif
  void set_project_id(const char* value);
  void set_project_id(const char* value, size_t size);
  ::std::string* mutable_project_id();
  ::std::string* release_project_id();
  void set_allocated_project_id(::std::string* project_id);

  // string index_id = 3 [(.google.api.field_behavior) = OUTPUT_ONLY];
  void clear_index_id();
  static const int kIndexIdFieldNumber = 3;
  const ::std::string& index_id() const;
  void set_index_id(const ::std::string& value);
  #if LANG_CXX11
  void set_index_id(::std::string&& value);
  #endif
  void set_index_id(const char* value);
  void set_index_id(const char* value, size_t size);
  ::std::string* mutable_index_id();
  ::std::string* release_index_id();
  void set_allocated_index_id(::std::string* index_id);

  // string kind = 4 [(.google.api.field_behavior) = REQUIRED];
  void clear_kind();
  static const int kKindFieldNumber = 4;
  const ::std::string& kind() const;
  void set_kind(const ::std::string& value);
  #if LANG_CXX11
  void set_kind(::std::string&& value);
  #endif
  void set_kind(const char* value);
  void set_kind(const char* value, size_t size);
  ::std::string* mutable_kind();
  ::std::string* release_kind();
  void set_allocated_kind(::std::string* kind);

  // .google.datastore.admin.v1.Index.AncestorMode ancestor = 5 [(.google.api.field_behavior) = REQUIRED];
  void clear_ancestor();
  static const int kAncestorFieldNumber = 5;
  ::google::datastore::admin::v1::Index_AncestorMode ancestor() const;
  void set_ancestor(::google::datastore::admin::v1::Index_AncestorMode value);

  // .google.datastore.admin.v1.Index.State state = 7 [(.google.api.field_behavior) = OUTPUT_ONLY];
  void clear_state();
  static const int kStateFieldNumber = 7;
  ::google::datastore::admin::v1::Index_State state() const;
  void set_state(::google::datastore::admin::v1::Index_State value);

  // @@protoc_insertion_point(class_scope:google.datastore.admin.v1.Index)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::google::datastore::admin::v1::Index_IndexedProperty > properties_;
  ::google::protobuf::internal::ArenaStringPtr project_id_;
  ::google::protobuf::internal::ArenaStringPtr index_id_;
  ::google::protobuf::internal::ArenaStringPtr kind_;
  int ancestor_;
  int state_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fdatastore_2fadmin_2fv1_2findex_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Index_IndexedProperty

// string name = 1 [(.google.api.field_behavior) = REQUIRED];
inline void Index_IndexedProperty::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Index_IndexedProperty::name() const {
  // @@protoc_insertion_point(field_get:google.datastore.admin.v1.Index.IndexedProperty.name)
  return name_.GetNoArena();
}
inline void Index_IndexedProperty::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.datastore.admin.v1.Index.IndexedProperty.name)
}
#if LANG_CXX11
inline void Index_IndexedProperty::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.datastore.admin.v1.Index.IndexedProperty.name)
}
#endif
inline void Index_IndexedProperty::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.datastore.admin.v1.Index.IndexedProperty.name)
}
inline void Index_IndexedProperty::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.datastore.admin.v1.Index.IndexedProperty.name)
}
inline ::std::string* Index_IndexedProperty::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:google.datastore.admin.v1.Index.IndexedProperty.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Index_IndexedProperty::release_name() {
  // @@protoc_insertion_point(field_release:google.datastore.admin.v1.Index.IndexedProperty.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Index_IndexedProperty::set_allocated_name(::std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.datastore.admin.v1.Index.IndexedProperty.name)
}

// .google.datastore.admin.v1.Index.Direction direction = 2 [(.google.api.field_behavior) = REQUIRED];
inline void Index_IndexedProperty::clear_direction() {
  direction_ = 0;
}
inline ::google::datastore::admin::v1::Index_Direction Index_IndexedProperty::direction() const {
  // @@protoc_insertion_point(field_get:google.datastore.admin.v1.Index.IndexedProperty.direction)
  return static_cast< ::google::datastore::admin::v1::Index_Direction >(direction_);
}
inline void Index_IndexedProperty::set_direction(::google::datastore::admin::v1::Index_Direction value) {
  
  direction_ = value;
  // @@protoc_insertion_point(field_set:google.datastore.admin.v1.Index.IndexedProperty.direction)
}

// -------------------------------------------------------------------

// Index

// string project_id = 1 [(.google.api.field_behavior) = OUTPUT_ONLY];
inline void Index::clear_project_id() {
  project_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Index::project_id() const {
  // @@protoc_insertion_point(field_get:google.datastore.admin.v1.Index.project_id)
  return project_id_.GetNoArena();
}
inline void Index::set_project_id(const ::std::string& value) {
  
  project_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.datastore.admin.v1.Index.project_id)
}
#if LANG_CXX11
inline void Index::set_project_id(::std::string&& value) {
  
  project_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.datastore.admin.v1.Index.project_id)
}
#endif
inline void Index::set_project_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  project_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.datastore.admin.v1.Index.project_id)
}
inline void Index::set_project_id(const char* value, size_t size) {
  
  project_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.datastore.admin.v1.Index.project_id)
}
inline ::std::string* Index::mutable_project_id() {
  
  // @@protoc_insertion_point(field_mutable:google.datastore.admin.v1.Index.project_id)
  return project_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Index::release_project_id() {
  // @@protoc_insertion_point(field_release:google.datastore.admin.v1.Index.project_id)
  
  return project_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Index::set_allocated_project_id(::std::string* project_id) {
  if (project_id != nullptr) {
    
  } else {
    
  }
  project_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), project_id);
  // @@protoc_insertion_point(field_set_allocated:google.datastore.admin.v1.Index.project_id)
}

// string index_id = 3 [(.google.api.field_behavior) = OUTPUT_ONLY];
inline void Index::clear_index_id() {
  index_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Index::index_id() const {
  // @@protoc_insertion_point(field_get:google.datastore.admin.v1.Index.index_id)
  return index_id_.GetNoArena();
}
inline void Index::set_index_id(const ::std::string& value) {
  
  index_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.datastore.admin.v1.Index.index_id)
}
#if LANG_CXX11
inline void Index::set_index_id(::std::string&& value) {
  
  index_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.datastore.admin.v1.Index.index_id)
}
#endif
inline void Index::set_index_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  index_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.datastore.admin.v1.Index.index_id)
}
inline void Index::set_index_id(const char* value, size_t size) {
  
  index_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.datastore.admin.v1.Index.index_id)
}
inline ::std::string* Index::mutable_index_id() {
  
  // @@protoc_insertion_point(field_mutable:google.datastore.admin.v1.Index.index_id)
  return index_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Index::release_index_id() {
  // @@protoc_insertion_point(field_release:google.datastore.admin.v1.Index.index_id)
  
  return index_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Index::set_allocated_index_id(::std::string* index_id) {
  if (index_id != nullptr) {
    
  } else {
    
  }
  index_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), index_id);
  // @@protoc_insertion_point(field_set_allocated:google.datastore.admin.v1.Index.index_id)
}

// string kind = 4 [(.google.api.field_behavior) = REQUIRED];
inline void Index::clear_kind() {
  kind_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Index::kind() const {
  // @@protoc_insertion_point(field_get:google.datastore.admin.v1.Index.kind)
  return kind_.GetNoArena();
}
inline void Index::set_kind(const ::std::string& value) {
  
  kind_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.datastore.admin.v1.Index.kind)
}
#if LANG_CXX11
inline void Index::set_kind(::std::string&& value) {
  
  kind_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.datastore.admin.v1.Index.kind)
}
#endif
inline void Index::set_kind(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  kind_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.datastore.admin.v1.Index.kind)
}
inline void Index::set_kind(const char* value, size_t size) {
  
  kind_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.datastore.admin.v1.Index.kind)
}
inline ::std::string* Index::mutable_kind() {
  
  // @@protoc_insertion_point(field_mutable:google.datastore.admin.v1.Index.kind)
  return kind_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Index::release_kind() {
  // @@protoc_insertion_point(field_release:google.datastore.admin.v1.Index.kind)
  
  return kind_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Index::set_allocated_kind(::std::string* kind) {
  if (kind != nullptr) {
    
  } else {
    
  }
  kind_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), kind);
  // @@protoc_insertion_point(field_set_allocated:google.datastore.admin.v1.Index.kind)
}

// .google.datastore.admin.v1.Index.AncestorMode ancestor = 5 [(.google.api.field_behavior) = REQUIRED];
inline void Index::clear_ancestor() {
  ancestor_ = 0;
}
inline ::google::datastore::admin::v1::Index_AncestorMode Index::ancestor() const {
  // @@protoc_insertion_point(field_get:google.datastore.admin.v1.Index.ancestor)
  return static_cast< ::google::datastore::admin::v1::Index_AncestorMode >(ancestor_);
}
inline void Index::set_ancestor(::google::datastore::admin::v1::Index_AncestorMode value) {
  
  ancestor_ = value;
  // @@protoc_insertion_point(field_set:google.datastore.admin.v1.Index.ancestor)
}

// repeated .google.datastore.admin.v1.Index.IndexedProperty properties = 6 [(.google.api.field_behavior) = REQUIRED];
inline int Index::properties_size() const {
  return properties_.size();
}
inline void Index::clear_properties() {
  properties_.Clear();
}
inline ::google::datastore::admin::v1::Index_IndexedProperty* Index::mutable_properties(int index) {
  // @@protoc_insertion_point(field_mutable:google.datastore.admin.v1.Index.properties)
  return properties_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::google::datastore::admin::v1::Index_IndexedProperty >*
Index::mutable_properties() {
  // @@protoc_insertion_point(field_mutable_list:google.datastore.admin.v1.Index.properties)
  return &properties_;
}
inline const ::google::datastore::admin::v1::Index_IndexedProperty& Index::properties(int index) const {
  // @@protoc_insertion_point(field_get:google.datastore.admin.v1.Index.properties)
  return properties_.Get(index);
}
inline ::google::datastore::admin::v1::Index_IndexedProperty* Index::add_properties() {
  // @@protoc_insertion_point(field_add:google.datastore.admin.v1.Index.properties)
  return properties_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::google::datastore::admin::v1::Index_IndexedProperty >&
Index::properties() const {
  // @@protoc_insertion_point(field_list:google.datastore.admin.v1.Index.properties)
  return properties_;
}

// .google.datastore.admin.v1.Index.State state = 7 [(.google.api.field_behavior) = OUTPUT_ONLY];
inline void Index::clear_state() {
  state_ = 0;
}
inline ::google::datastore::admin::v1::Index_State Index::state() const {
  // @@protoc_insertion_point(field_get:google.datastore.admin.v1.Index.state)
  return static_cast< ::google::datastore::admin::v1::Index_State >(state_);
}
inline void Index::set_state(::google::datastore::admin::v1::Index_State value) {
  
  state_ = value;
  // @@protoc_insertion_point(field_set:google.datastore.admin.v1.Index.state)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace admin
}  // namespace datastore
}  // namespace google

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::google::datastore::admin::v1::Index_AncestorMode> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::datastore::admin::v1::Index_AncestorMode>() {
  return ::google::datastore::admin::v1::Index_AncestorMode_descriptor();
}
template <> struct is_proto_enum< ::google::datastore::admin::v1::Index_Direction> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::datastore::admin::v1::Index_Direction>() {
  return ::google::datastore::admin::v1::Index_Direction_descriptor();
}
template <> struct is_proto_enum< ::google::datastore::admin::v1::Index_State> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::datastore::admin::v1::Index_State>() {
  return ::google::datastore::admin::v1::Index_State_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_google_2fdatastore_2fadmin_2fv1_2findex_2eproto
