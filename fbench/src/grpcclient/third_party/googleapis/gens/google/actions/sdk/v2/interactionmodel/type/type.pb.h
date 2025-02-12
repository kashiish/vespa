// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/actions/sdk/v2/interactionmodel/type/type.proto

#ifndef PROTOBUF_INCLUDED_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto
#define PROTOBUF_INCLUDED_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto

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
#include "google/actions/sdk/v2/interactionmodel/type/free_text_type.pb.h"
#include "google/actions/sdk/v2/interactionmodel/type/regular_expression_type.pb.h"
#include "google/actions/sdk/v2/interactionmodel/type/synonym_type.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto {
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
void AddDescriptors_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto();
namespace google {
namespace actions {
namespace sdk {
namespace v2 {
namespace interactionmodel {
namespace type {
class Type;
class TypeDefaultTypeInternal;
extern TypeDefaultTypeInternal _Type_default_instance_;
}  // namespace type
}  // namespace interactionmodel
}  // namespace v2
}  // namespace sdk
}  // namespace actions
namespace protobuf {
template<> ::google::actions::sdk::v2::interactionmodel::type::Type* Arena::CreateMaybeMessage<::google::actions::sdk::v2::interactionmodel::type::Type>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace actions {
namespace sdk {
namespace v2 {
namespace interactionmodel {
namespace type {

// ===================================================================

class Type final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.actions.sdk.v2.interactionmodel.type.Type) */ {
 public:
  Type();
  virtual ~Type();

  Type(const Type& from);

  inline Type& operator=(const Type& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Type(Type&& from) noexcept
    : Type() {
    *this = ::std::move(from);
  }

  inline Type& operator=(Type&& from) noexcept {
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
  static const Type& default_instance();

  enum SubTypeCase {
    kSynonym = 1,
    kRegularExpression = 2,
    kFreeText = 3,
    SUB_TYPE_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Type* internal_default_instance() {
    return reinterpret_cast<const Type*>(
               &_Type_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Type* other);
  friend void swap(Type& a, Type& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Type* New() const final {
    return CreateMaybeMessage<Type>(nullptr);
  }

  Type* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Type>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Type& from);
  void MergeFrom(const Type& from);
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
  void InternalSwap(Type* other);
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

  // repeated string exclusions = 4;
  int exclusions_size() const;
  void clear_exclusions();
  static const int kExclusionsFieldNumber = 4;
  const ::std::string& exclusions(int index) const;
  ::std::string* mutable_exclusions(int index);
  void set_exclusions(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_exclusions(int index, ::std::string&& value);
  #endif
  void set_exclusions(int index, const char* value);
  void set_exclusions(int index, const char* value, size_t size);
  ::std::string* add_exclusions();
  void add_exclusions(const ::std::string& value);
  #if LANG_CXX11
  void add_exclusions(::std::string&& value);
  #endif
  void add_exclusions(const char* value);
  void add_exclusions(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField<::std::string>& exclusions() const;
  ::google::protobuf::RepeatedPtrField<::std::string>* mutable_exclusions();

  // .google.actions.sdk.v2.interactionmodel.type.SynonymType synonym = 1;
  bool has_synonym() const;
  void clear_synonym();
  static const int kSynonymFieldNumber = 1;
  const ::google::actions::sdk::v2::interactionmodel::type::SynonymType& synonym() const;
  ::google::actions::sdk::v2::interactionmodel::type::SynonymType* release_synonym();
  ::google::actions::sdk::v2::interactionmodel::type::SynonymType* mutable_synonym();
  void set_allocated_synonym(::google::actions::sdk::v2::interactionmodel::type::SynonymType* synonym);

  // .google.actions.sdk.v2.interactionmodel.type.RegularExpressionType regular_expression = 2;
  bool has_regular_expression() const;
  void clear_regular_expression();
  static const int kRegularExpressionFieldNumber = 2;
  const ::google::actions::sdk::v2::interactionmodel::type::RegularExpressionType& regular_expression() const;
  ::google::actions::sdk::v2::interactionmodel::type::RegularExpressionType* release_regular_expression();
  ::google::actions::sdk::v2::interactionmodel::type::RegularExpressionType* mutable_regular_expression();
  void set_allocated_regular_expression(::google::actions::sdk::v2::interactionmodel::type::RegularExpressionType* regular_expression);

  // .google.actions.sdk.v2.interactionmodel.type.FreeTextType free_text = 3;
  bool has_free_text() const;
  void clear_free_text();
  static const int kFreeTextFieldNumber = 3;
  const ::google::actions::sdk::v2::interactionmodel::type::FreeTextType& free_text() const;
  ::google::actions::sdk::v2::interactionmodel::type::FreeTextType* release_free_text();
  ::google::actions::sdk::v2::interactionmodel::type::FreeTextType* mutable_free_text();
  void set_allocated_free_text(::google::actions::sdk::v2::interactionmodel::type::FreeTextType* free_text);

  void clear_sub_type();
  SubTypeCase sub_type_case() const;
  // @@protoc_insertion_point(class_scope:google.actions.sdk.v2.interactionmodel.type.Type)
 private:
  class HasBitSetters;
  void set_has_synonym();
  void set_has_regular_expression();
  void set_has_free_text();

  inline bool has_sub_type() const;
  inline void clear_has_sub_type();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField<::std::string> exclusions_;
  union SubTypeUnion {
    SubTypeUnion() {}
    ::google::actions::sdk::v2::interactionmodel::type::SynonymType* synonym_;
    ::google::actions::sdk::v2::interactionmodel::type::RegularExpressionType* regular_expression_;
    ::google::actions::sdk::v2::interactionmodel::type::FreeTextType* free_text_;
  } sub_type_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::TableStruct_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Type

// .google.actions.sdk.v2.interactionmodel.type.SynonymType synonym = 1;
inline bool Type::has_synonym() const {
  return sub_type_case() == kSynonym;
}
inline void Type::set_has_synonym() {
  _oneof_case_[0] = kSynonym;
}
inline ::google::actions::sdk::v2::interactionmodel::type::SynonymType* Type::release_synonym() {
  // @@protoc_insertion_point(field_release:google.actions.sdk.v2.interactionmodel.type.Type.synonym)
  if (has_synonym()) {
    clear_has_sub_type();
      ::google::actions::sdk::v2::interactionmodel::type::SynonymType* temp = sub_type_.synonym_;
    sub_type_.synonym_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::google::actions::sdk::v2::interactionmodel::type::SynonymType& Type::synonym() const {
  // @@protoc_insertion_point(field_get:google.actions.sdk.v2.interactionmodel.type.Type.synonym)
  return has_synonym()
      ? *sub_type_.synonym_
      : *reinterpret_cast< ::google::actions::sdk::v2::interactionmodel::type::SynonymType*>(&::google::actions::sdk::v2::interactionmodel::type::_SynonymType_default_instance_);
}
inline ::google::actions::sdk::v2::interactionmodel::type::SynonymType* Type::mutable_synonym() {
  if (!has_synonym()) {
    clear_sub_type();
    set_has_synonym();
    sub_type_.synonym_ = CreateMaybeMessage< ::google::actions::sdk::v2::interactionmodel::type::SynonymType >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:google.actions.sdk.v2.interactionmodel.type.Type.synonym)
  return sub_type_.synonym_;
}

// .google.actions.sdk.v2.interactionmodel.type.RegularExpressionType regular_expression = 2;
inline bool Type::has_regular_expression() const {
  return sub_type_case() == kRegularExpression;
}
inline void Type::set_has_regular_expression() {
  _oneof_case_[0] = kRegularExpression;
}
inline ::google::actions::sdk::v2::interactionmodel::type::RegularExpressionType* Type::release_regular_expression() {
  // @@protoc_insertion_point(field_release:google.actions.sdk.v2.interactionmodel.type.Type.regular_expression)
  if (has_regular_expression()) {
    clear_has_sub_type();
      ::google::actions::sdk::v2::interactionmodel::type::RegularExpressionType* temp = sub_type_.regular_expression_;
    sub_type_.regular_expression_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::google::actions::sdk::v2::interactionmodel::type::RegularExpressionType& Type::regular_expression() const {
  // @@protoc_insertion_point(field_get:google.actions.sdk.v2.interactionmodel.type.Type.regular_expression)
  return has_regular_expression()
      ? *sub_type_.regular_expression_
      : *reinterpret_cast< ::google::actions::sdk::v2::interactionmodel::type::RegularExpressionType*>(&::google::actions::sdk::v2::interactionmodel::type::_RegularExpressionType_default_instance_);
}
inline ::google::actions::sdk::v2::interactionmodel::type::RegularExpressionType* Type::mutable_regular_expression() {
  if (!has_regular_expression()) {
    clear_sub_type();
    set_has_regular_expression();
    sub_type_.regular_expression_ = CreateMaybeMessage< ::google::actions::sdk::v2::interactionmodel::type::RegularExpressionType >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:google.actions.sdk.v2.interactionmodel.type.Type.regular_expression)
  return sub_type_.regular_expression_;
}

// .google.actions.sdk.v2.interactionmodel.type.FreeTextType free_text = 3;
inline bool Type::has_free_text() const {
  return sub_type_case() == kFreeText;
}
inline void Type::set_has_free_text() {
  _oneof_case_[0] = kFreeText;
}
inline ::google::actions::sdk::v2::interactionmodel::type::FreeTextType* Type::release_free_text() {
  // @@protoc_insertion_point(field_release:google.actions.sdk.v2.interactionmodel.type.Type.free_text)
  if (has_free_text()) {
    clear_has_sub_type();
      ::google::actions::sdk::v2::interactionmodel::type::FreeTextType* temp = sub_type_.free_text_;
    sub_type_.free_text_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::google::actions::sdk::v2::interactionmodel::type::FreeTextType& Type::free_text() const {
  // @@protoc_insertion_point(field_get:google.actions.sdk.v2.interactionmodel.type.Type.free_text)
  return has_free_text()
      ? *sub_type_.free_text_
      : *reinterpret_cast< ::google::actions::sdk::v2::interactionmodel::type::FreeTextType*>(&::google::actions::sdk::v2::interactionmodel::type::_FreeTextType_default_instance_);
}
inline ::google::actions::sdk::v2::interactionmodel::type::FreeTextType* Type::mutable_free_text() {
  if (!has_free_text()) {
    clear_sub_type();
    set_has_free_text();
    sub_type_.free_text_ = CreateMaybeMessage< ::google::actions::sdk::v2::interactionmodel::type::FreeTextType >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:google.actions.sdk.v2.interactionmodel.type.Type.free_text)
  return sub_type_.free_text_;
}

// repeated string exclusions = 4;
inline int Type::exclusions_size() const {
  return exclusions_.size();
}
inline void Type::clear_exclusions() {
  exclusions_.Clear();
}
inline const ::std::string& Type::exclusions(int index) const {
  // @@protoc_insertion_point(field_get:google.actions.sdk.v2.interactionmodel.type.Type.exclusions)
  return exclusions_.Get(index);
}
inline ::std::string* Type::mutable_exclusions(int index) {
  // @@protoc_insertion_point(field_mutable:google.actions.sdk.v2.interactionmodel.type.Type.exclusions)
  return exclusions_.Mutable(index);
}
inline void Type::set_exclusions(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.actions.sdk.v2.interactionmodel.type.Type.exclusions)
  exclusions_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void Type::set_exclusions(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:google.actions.sdk.v2.interactionmodel.type.Type.exclusions)
  exclusions_.Mutable(index)->assign(std::move(value));
}
#endif
inline void Type::set_exclusions(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  exclusions_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.actions.sdk.v2.interactionmodel.type.Type.exclusions)
}
inline void Type::set_exclusions(int index, const char* value, size_t size) {
  exclusions_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.actions.sdk.v2.interactionmodel.type.Type.exclusions)
}
inline ::std::string* Type::add_exclusions() {
  // @@protoc_insertion_point(field_add_mutable:google.actions.sdk.v2.interactionmodel.type.Type.exclusions)
  return exclusions_.Add();
}
inline void Type::add_exclusions(const ::std::string& value) {
  exclusions_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.actions.sdk.v2.interactionmodel.type.Type.exclusions)
}
#if LANG_CXX11
inline void Type::add_exclusions(::std::string&& value) {
  exclusions_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:google.actions.sdk.v2.interactionmodel.type.Type.exclusions)
}
#endif
inline void Type::add_exclusions(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  exclusions_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.actions.sdk.v2.interactionmodel.type.Type.exclusions)
}
inline void Type::add_exclusions(const char* value, size_t size) {
  exclusions_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.actions.sdk.v2.interactionmodel.type.Type.exclusions)
}
inline const ::google::protobuf::RepeatedPtrField<::std::string>&
Type::exclusions() const {
  // @@protoc_insertion_point(field_list:google.actions.sdk.v2.interactionmodel.type.Type.exclusions)
  return exclusions_;
}
inline ::google::protobuf::RepeatedPtrField<::std::string>*
Type::mutable_exclusions() {
  // @@protoc_insertion_point(field_mutable_list:google.actions.sdk.v2.interactionmodel.type.Type.exclusions)
  return &exclusions_;
}

inline bool Type::has_sub_type() const {
  return sub_type_case() != SUB_TYPE_NOT_SET;
}
inline void Type::clear_has_sub_type() {
  _oneof_case_[0] = SUB_TYPE_NOT_SET;
}
inline Type::SubTypeCase Type::sub_type_case() const {
  return Type::SubTypeCase(_oneof_case_[0]);
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
#endif  // PROTOBUF_INCLUDED_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto
