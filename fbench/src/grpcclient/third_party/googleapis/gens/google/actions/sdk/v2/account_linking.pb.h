// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/actions/sdk/v2/account_linking.proto

#ifndef PROTOBUF_INCLUDED_google_2factions_2fsdk_2fv2_2faccount_5flinking_2eproto
#define PROTOBUF_INCLUDED_google_2factions_2fsdk_2fv2_2faccount_5flinking_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2factions_2fsdk_2fv2_2faccount_5flinking_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2factions_2fsdk_2fv2_2faccount_5flinking_2eproto {
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
void AddDescriptors_google_2factions_2fsdk_2fv2_2faccount_5flinking_2eproto();
namespace google {
namespace actions {
namespace sdk {
namespace v2 {
class AccountLinking;
class AccountLinkingDefaultTypeInternal;
extern AccountLinkingDefaultTypeInternal _AccountLinking_default_instance_;
}  // namespace v2
}  // namespace sdk
}  // namespace actions
namespace protobuf {
template<> ::google::actions::sdk::v2::AccountLinking* Arena::CreateMaybeMessage<::google::actions::sdk::v2::AccountLinking>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace actions {
namespace sdk {
namespace v2 {

enum AccountLinking_LinkingType {
  AccountLinking_LinkingType_LINKING_TYPE_UNSPECIFIED = 0,
  AccountLinking_LinkingType_GOOGLE_SIGN_IN = 1,
  AccountLinking_LinkingType_OAUTH_AND_GOOGLE_SIGN_IN = 2,
  AccountLinking_LinkingType_OAUTH = 3,
  AccountLinking_LinkingType_AccountLinking_LinkingType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::min(),
  AccountLinking_LinkingType_AccountLinking_LinkingType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::max()
};
bool AccountLinking_LinkingType_IsValid(int value);
const AccountLinking_LinkingType AccountLinking_LinkingType_LinkingType_MIN = AccountLinking_LinkingType_LINKING_TYPE_UNSPECIFIED;
const AccountLinking_LinkingType AccountLinking_LinkingType_LinkingType_MAX = AccountLinking_LinkingType_OAUTH;
const int AccountLinking_LinkingType_LinkingType_ARRAYSIZE = AccountLinking_LinkingType_LinkingType_MAX + 1;

const ::google::protobuf::EnumDescriptor* AccountLinking_LinkingType_descriptor();
inline const ::std::string& AccountLinking_LinkingType_Name(AccountLinking_LinkingType value) {
  return ::google::protobuf::internal::NameOfEnum(
    AccountLinking_LinkingType_descriptor(), value);
}
inline bool AccountLinking_LinkingType_Parse(
    const ::std::string& name, AccountLinking_LinkingType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<AccountLinking_LinkingType>(
    AccountLinking_LinkingType_descriptor(), name, value);
}
enum AccountLinking_AuthGrantType {
  AccountLinking_AuthGrantType_AUTH_GRANT_TYPE_UNSPECIFIED = 0,
  AccountLinking_AuthGrantType_AUTH_CODE = 1,
  AccountLinking_AuthGrantType_IMPLICIT = 2,
  AccountLinking_AuthGrantType_AccountLinking_AuthGrantType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::min(),
  AccountLinking_AuthGrantType_AccountLinking_AuthGrantType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::max()
};
bool AccountLinking_AuthGrantType_IsValid(int value);
const AccountLinking_AuthGrantType AccountLinking_AuthGrantType_AuthGrantType_MIN = AccountLinking_AuthGrantType_AUTH_GRANT_TYPE_UNSPECIFIED;
const AccountLinking_AuthGrantType AccountLinking_AuthGrantType_AuthGrantType_MAX = AccountLinking_AuthGrantType_IMPLICIT;
const int AccountLinking_AuthGrantType_AuthGrantType_ARRAYSIZE = AccountLinking_AuthGrantType_AuthGrantType_MAX + 1;

const ::google::protobuf::EnumDescriptor* AccountLinking_AuthGrantType_descriptor();
inline const ::std::string& AccountLinking_AuthGrantType_Name(AccountLinking_AuthGrantType value) {
  return ::google::protobuf::internal::NameOfEnum(
    AccountLinking_AuthGrantType_descriptor(), value);
}
inline bool AccountLinking_AuthGrantType_Parse(
    const ::std::string& name, AccountLinking_AuthGrantType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<AccountLinking_AuthGrantType>(
    AccountLinking_AuthGrantType_descriptor(), name, value);
}
// ===================================================================

class AccountLinking final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.actions.sdk.v2.AccountLinking) */ {
 public:
  AccountLinking();
  virtual ~AccountLinking();

  AccountLinking(const AccountLinking& from);

  inline AccountLinking& operator=(const AccountLinking& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AccountLinking(AccountLinking&& from) noexcept
    : AccountLinking() {
    *this = ::std::move(from);
  }

  inline AccountLinking& operator=(AccountLinking&& from) noexcept {
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
  static const AccountLinking& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AccountLinking* internal_default_instance() {
    return reinterpret_cast<const AccountLinking*>(
               &_AccountLinking_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(AccountLinking* other);
  friend void swap(AccountLinking& a, AccountLinking& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AccountLinking* New() const final {
    return CreateMaybeMessage<AccountLinking>(nullptr);
  }

  AccountLinking* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<AccountLinking>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const AccountLinking& from);
  void MergeFrom(const AccountLinking& from);
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
  void InternalSwap(AccountLinking* other);
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

  typedef AccountLinking_LinkingType LinkingType;
  static const LinkingType LINKING_TYPE_UNSPECIFIED =
    AccountLinking_LinkingType_LINKING_TYPE_UNSPECIFIED;
  static const LinkingType GOOGLE_SIGN_IN =
    AccountLinking_LinkingType_GOOGLE_SIGN_IN;
  static const LinkingType OAUTH_AND_GOOGLE_SIGN_IN =
    AccountLinking_LinkingType_OAUTH_AND_GOOGLE_SIGN_IN;
  static const LinkingType OAUTH =
    AccountLinking_LinkingType_OAUTH;
  static inline bool LinkingType_IsValid(int value) {
    return AccountLinking_LinkingType_IsValid(value);
  }
  static const LinkingType LinkingType_MIN =
    AccountLinking_LinkingType_LinkingType_MIN;
  static const LinkingType LinkingType_MAX =
    AccountLinking_LinkingType_LinkingType_MAX;
  static const int LinkingType_ARRAYSIZE =
    AccountLinking_LinkingType_LinkingType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  LinkingType_descriptor() {
    return AccountLinking_LinkingType_descriptor();
  }
  static inline const ::std::string& LinkingType_Name(LinkingType value) {
    return AccountLinking_LinkingType_Name(value);
  }
  static inline bool LinkingType_Parse(const ::std::string& name,
      LinkingType* value) {
    return AccountLinking_LinkingType_Parse(name, value);
  }

  typedef AccountLinking_AuthGrantType AuthGrantType;
  static const AuthGrantType AUTH_GRANT_TYPE_UNSPECIFIED =
    AccountLinking_AuthGrantType_AUTH_GRANT_TYPE_UNSPECIFIED;
  static const AuthGrantType AUTH_CODE =
    AccountLinking_AuthGrantType_AUTH_CODE;
  static const AuthGrantType IMPLICIT =
    AccountLinking_AuthGrantType_IMPLICIT;
  static inline bool AuthGrantType_IsValid(int value) {
    return AccountLinking_AuthGrantType_IsValid(value);
  }
  static const AuthGrantType AuthGrantType_MIN =
    AccountLinking_AuthGrantType_AuthGrantType_MIN;
  static const AuthGrantType AuthGrantType_MAX =
    AccountLinking_AuthGrantType_AuthGrantType_MAX;
  static const int AuthGrantType_ARRAYSIZE =
    AccountLinking_AuthGrantType_AuthGrantType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  AuthGrantType_descriptor() {
    return AccountLinking_AuthGrantType_descriptor();
  }
  static inline const ::std::string& AuthGrantType_Name(AuthGrantType value) {
    return AccountLinking_AuthGrantType_Name(value);
  }
  static inline bool AuthGrantType_Parse(const ::std::string& name,
      AuthGrantType* value) {
    return AccountLinking_AuthGrantType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // repeated string scopes = 7 [(.google.api.field_behavior) = OPTIONAL];
  int scopes_size() const;
  void clear_scopes();
  static const int kScopesFieldNumber = 7;
  const ::std::string& scopes(int index) const;
  ::std::string* mutable_scopes(int index);
  void set_scopes(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_scopes(int index, ::std::string&& value);
  #endif
  void set_scopes(int index, const char* value);
  void set_scopes(int index, const char* value, size_t size);
  ::std::string* add_scopes();
  void add_scopes(const ::std::string& value);
  #if LANG_CXX11
  void add_scopes(::std::string&& value);
  #endif
  void add_scopes(const char* value);
  void add_scopes(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField<::std::string>& scopes() const;
  ::google::protobuf::RepeatedPtrField<::std::string>* mutable_scopes();

  // string app_client_id = 4 [(.google.api.field_behavior) = OPTIONAL];
  void clear_app_client_id();
  static const int kAppClientIdFieldNumber = 4;
  const ::std::string& app_client_id() const;
  void set_app_client_id(const ::std::string& value);
  #if LANG_CXX11
  void set_app_client_id(::std::string&& value);
  #endif
  void set_app_client_id(const char* value);
  void set_app_client_id(const char* value, size_t size);
  ::std::string* mutable_app_client_id();
  ::std::string* release_app_client_id();
  void set_allocated_app_client_id(::std::string* app_client_id);

  // string authorization_url = 5 [(.google.api.field_behavior) = OPTIONAL];
  void clear_authorization_url();
  static const int kAuthorizationUrlFieldNumber = 5;
  const ::std::string& authorization_url() const;
  void set_authorization_url(const ::std::string& value);
  #if LANG_CXX11
  void set_authorization_url(::std::string&& value);
  #endif
  void set_authorization_url(const char* value);
  void set_authorization_url(const char* value, size_t size);
  ::std::string* mutable_authorization_url();
  ::std::string* release_authorization_url();
  void set_allocated_authorization_url(::std::string* authorization_url);

  // string token_url = 6 [(.google.api.field_behavior) = OPTIONAL];
  void clear_token_url();
  static const int kTokenUrlFieldNumber = 6;
  const ::std::string& token_url() const;
  void set_token_url(const ::std::string& value);
  #if LANG_CXX11
  void set_token_url(::std::string&& value);
  #endif
  void set_token_url(const char* value);
  void set_token_url(const char* value, size_t size);
  ::std::string* mutable_token_url();
  ::std::string* release_token_url();
  void set_allocated_token_url(::std::string* token_url);

  // string learn_more_url = 8 [(.google.api.field_behavior) = OPTIONAL];
  void clear_learn_more_url();
  static const int kLearnMoreUrlFieldNumber = 8;
  const ::std::string& learn_more_url() const;
  void set_learn_more_url(const ::std::string& value);
  #if LANG_CXX11
  void set_learn_more_url(::std::string&& value);
  #endif
  void set_learn_more_url(const char* value);
  void set_learn_more_url(const char* value, size_t size);
  ::std::string* mutable_learn_more_url();
  ::std::string* release_learn_more_url();
  void set_allocated_learn_more_url(::std::string* learn_more_url);

  // .google.actions.sdk.v2.AccountLinking.LinkingType linking_type = 2 [(.google.api.field_behavior) = REQUIRED];
  void clear_linking_type();
  static const int kLinkingTypeFieldNumber = 2;
  ::google::actions::sdk::v2::AccountLinking_LinkingType linking_type() const;
  void set_linking_type(::google::actions::sdk::v2::AccountLinking_LinkingType value);

  // .google.actions.sdk.v2.AccountLinking.AuthGrantType auth_grant_type = 3 [(.google.api.field_behavior) = OPTIONAL];
  void clear_auth_grant_type();
  static const int kAuthGrantTypeFieldNumber = 3;
  ::google::actions::sdk::v2::AccountLinking_AuthGrantType auth_grant_type() const;
  void set_auth_grant_type(::google::actions::sdk::v2::AccountLinking_AuthGrantType value);

  // bool enable_account_creation = 1 [(.google.api.field_behavior) = REQUIRED];
  void clear_enable_account_creation();
  static const int kEnableAccountCreationFieldNumber = 1;
  bool enable_account_creation() const;
  void set_enable_account_creation(bool value);

  // bool use_basic_auth_header = 9 [(.google.api.field_behavior) = OPTIONAL];
  void clear_use_basic_auth_header();
  static const int kUseBasicAuthHeaderFieldNumber = 9;
  bool use_basic_auth_header() const;
  void set_use_basic_auth_header(bool value);

  // @@protoc_insertion_point(class_scope:google.actions.sdk.v2.AccountLinking)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField<::std::string> scopes_;
  ::google::protobuf::internal::ArenaStringPtr app_client_id_;
  ::google::protobuf::internal::ArenaStringPtr authorization_url_;
  ::google::protobuf::internal::ArenaStringPtr token_url_;
  ::google::protobuf::internal::ArenaStringPtr learn_more_url_;
  int linking_type_;
  int auth_grant_type_;
  bool enable_account_creation_;
  bool use_basic_auth_header_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2factions_2fsdk_2fv2_2faccount_5flinking_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AccountLinking

// bool enable_account_creation = 1 [(.google.api.field_behavior) = REQUIRED];
inline void AccountLinking::clear_enable_account_creation() {
  enable_account_creation_ = false;
}
inline bool AccountLinking::enable_account_creation() const {
  // @@protoc_insertion_point(field_get:google.actions.sdk.v2.AccountLinking.enable_account_creation)
  return enable_account_creation_;
}
inline void AccountLinking::set_enable_account_creation(bool value) {
  
  enable_account_creation_ = value;
  // @@protoc_insertion_point(field_set:google.actions.sdk.v2.AccountLinking.enable_account_creation)
}

// .google.actions.sdk.v2.AccountLinking.LinkingType linking_type = 2 [(.google.api.field_behavior) = REQUIRED];
inline void AccountLinking::clear_linking_type() {
  linking_type_ = 0;
}
inline ::google::actions::sdk::v2::AccountLinking_LinkingType AccountLinking::linking_type() const {
  // @@protoc_insertion_point(field_get:google.actions.sdk.v2.AccountLinking.linking_type)
  return static_cast< ::google::actions::sdk::v2::AccountLinking_LinkingType >(linking_type_);
}
inline void AccountLinking::set_linking_type(::google::actions::sdk::v2::AccountLinking_LinkingType value) {
  
  linking_type_ = value;
  // @@protoc_insertion_point(field_set:google.actions.sdk.v2.AccountLinking.linking_type)
}

// .google.actions.sdk.v2.AccountLinking.AuthGrantType auth_grant_type = 3 [(.google.api.field_behavior) = OPTIONAL];
inline void AccountLinking::clear_auth_grant_type() {
  auth_grant_type_ = 0;
}
inline ::google::actions::sdk::v2::AccountLinking_AuthGrantType AccountLinking::auth_grant_type() const {
  // @@protoc_insertion_point(field_get:google.actions.sdk.v2.AccountLinking.auth_grant_type)
  return static_cast< ::google::actions::sdk::v2::AccountLinking_AuthGrantType >(auth_grant_type_);
}
inline void AccountLinking::set_auth_grant_type(::google::actions::sdk::v2::AccountLinking_AuthGrantType value) {
  
  auth_grant_type_ = value;
  // @@protoc_insertion_point(field_set:google.actions.sdk.v2.AccountLinking.auth_grant_type)
}

// string app_client_id = 4 [(.google.api.field_behavior) = OPTIONAL];
inline void AccountLinking::clear_app_client_id() {
  app_client_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& AccountLinking::app_client_id() const {
  // @@protoc_insertion_point(field_get:google.actions.sdk.v2.AccountLinking.app_client_id)
  return app_client_id_.GetNoArena();
}
inline void AccountLinking::set_app_client_id(const ::std::string& value) {
  
  app_client_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.actions.sdk.v2.AccountLinking.app_client_id)
}
#if LANG_CXX11
inline void AccountLinking::set_app_client_id(::std::string&& value) {
  
  app_client_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.actions.sdk.v2.AccountLinking.app_client_id)
}
#endif
inline void AccountLinking::set_app_client_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  app_client_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.actions.sdk.v2.AccountLinking.app_client_id)
}
inline void AccountLinking::set_app_client_id(const char* value, size_t size) {
  
  app_client_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.actions.sdk.v2.AccountLinking.app_client_id)
}
inline ::std::string* AccountLinking::mutable_app_client_id() {
  
  // @@protoc_insertion_point(field_mutable:google.actions.sdk.v2.AccountLinking.app_client_id)
  return app_client_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AccountLinking::release_app_client_id() {
  // @@protoc_insertion_point(field_release:google.actions.sdk.v2.AccountLinking.app_client_id)
  
  return app_client_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AccountLinking::set_allocated_app_client_id(::std::string* app_client_id) {
  if (app_client_id != nullptr) {
    
  } else {
    
  }
  app_client_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), app_client_id);
  // @@protoc_insertion_point(field_set_allocated:google.actions.sdk.v2.AccountLinking.app_client_id)
}

// string authorization_url = 5 [(.google.api.field_behavior) = OPTIONAL];
inline void AccountLinking::clear_authorization_url() {
  authorization_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& AccountLinking::authorization_url() const {
  // @@protoc_insertion_point(field_get:google.actions.sdk.v2.AccountLinking.authorization_url)
  return authorization_url_.GetNoArena();
}
inline void AccountLinking::set_authorization_url(const ::std::string& value) {
  
  authorization_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.actions.sdk.v2.AccountLinking.authorization_url)
}
#if LANG_CXX11
inline void AccountLinking::set_authorization_url(::std::string&& value) {
  
  authorization_url_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.actions.sdk.v2.AccountLinking.authorization_url)
}
#endif
inline void AccountLinking::set_authorization_url(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  authorization_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.actions.sdk.v2.AccountLinking.authorization_url)
}
inline void AccountLinking::set_authorization_url(const char* value, size_t size) {
  
  authorization_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.actions.sdk.v2.AccountLinking.authorization_url)
}
inline ::std::string* AccountLinking::mutable_authorization_url() {
  
  // @@protoc_insertion_point(field_mutable:google.actions.sdk.v2.AccountLinking.authorization_url)
  return authorization_url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AccountLinking::release_authorization_url() {
  // @@protoc_insertion_point(field_release:google.actions.sdk.v2.AccountLinking.authorization_url)
  
  return authorization_url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AccountLinking::set_allocated_authorization_url(::std::string* authorization_url) {
  if (authorization_url != nullptr) {
    
  } else {
    
  }
  authorization_url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), authorization_url);
  // @@protoc_insertion_point(field_set_allocated:google.actions.sdk.v2.AccountLinking.authorization_url)
}

// string token_url = 6 [(.google.api.field_behavior) = OPTIONAL];
inline void AccountLinking::clear_token_url() {
  token_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& AccountLinking::token_url() const {
  // @@protoc_insertion_point(field_get:google.actions.sdk.v2.AccountLinking.token_url)
  return token_url_.GetNoArena();
}
inline void AccountLinking::set_token_url(const ::std::string& value) {
  
  token_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.actions.sdk.v2.AccountLinking.token_url)
}
#if LANG_CXX11
inline void AccountLinking::set_token_url(::std::string&& value) {
  
  token_url_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.actions.sdk.v2.AccountLinking.token_url)
}
#endif
inline void AccountLinking::set_token_url(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  token_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.actions.sdk.v2.AccountLinking.token_url)
}
inline void AccountLinking::set_token_url(const char* value, size_t size) {
  
  token_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.actions.sdk.v2.AccountLinking.token_url)
}
inline ::std::string* AccountLinking::mutable_token_url() {
  
  // @@protoc_insertion_point(field_mutable:google.actions.sdk.v2.AccountLinking.token_url)
  return token_url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AccountLinking::release_token_url() {
  // @@protoc_insertion_point(field_release:google.actions.sdk.v2.AccountLinking.token_url)
  
  return token_url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AccountLinking::set_allocated_token_url(::std::string* token_url) {
  if (token_url != nullptr) {
    
  } else {
    
  }
  token_url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), token_url);
  // @@protoc_insertion_point(field_set_allocated:google.actions.sdk.v2.AccountLinking.token_url)
}

// repeated string scopes = 7 [(.google.api.field_behavior) = OPTIONAL];
inline int AccountLinking::scopes_size() const {
  return scopes_.size();
}
inline void AccountLinking::clear_scopes() {
  scopes_.Clear();
}
inline const ::std::string& AccountLinking::scopes(int index) const {
  // @@protoc_insertion_point(field_get:google.actions.sdk.v2.AccountLinking.scopes)
  return scopes_.Get(index);
}
inline ::std::string* AccountLinking::mutable_scopes(int index) {
  // @@protoc_insertion_point(field_mutable:google.actions.sdk.v2.AccountLinking.scopes)
  return scopes_.Mutable(index);
}
inline void AccountLinking::set_scopes(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.actions.sdk.v2.AccountLinking.scopes)
  scopes_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void AccountLinking::set_scopes(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:google.actions.sdk.v2.AccountLinking.scopes)
  scopes_.Mutable(index)->assign(std::move(value));
}
#endif
inline void AccountLinking::set_scopes(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  scopes_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.actions.sdk.v2.AccountLinking.scopes)
}
inline void AccountLinking::set_scopes(int index, const char* value, size_t size) {
  scopes_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.actions.sdk.v2.AccountLinking.scopes)
}
inline ::std::string* AccountLinking::add_scopes() {
  // @@protoc_insertion_point(field_add_mutable:google.actions.sdk.v2.AccountLinking.scopes)
  return scopes_.Add();
}
inline void AccountLinking::add_scopes(const ::std::string& value) {
  scopes_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.actions.sdk.v2.AccountLinking.scopes)
}
#if LANG_CXX11
inline void AccountLinking::add_scopes(::std::string&& value) {
  scopes_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:google.actions.sdk.v2.AccountLinking.scopes)
}
#endif
inline void AccountLinking::add_scopes(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  scopes_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.actions.sdk.v2.AccountLinking.scopes)
}
inline void AccountLinking::add_scopes(const char* value, size_t size) {
  scopes_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.actions.sdk.v2.AccountLinking.scopes)
}
inline const ::google::protobuf::RepeatedPtrField<::std::string>&
AccountLinking::scopes() const {
  // @@protoc_insertion_point(field_list:google.actions.sdk.v2.AccountLinking.scopes)
  return scopes_;
}
inline ::google::protobuf::RepeatedPtrField<::std::string>*
AccountLinking::mutable_scopes() {
  // @@protoc_insertion_point(field_mutable_list:google.actions.sdk.v2.AccountLinking.scopes)
  return &scopes_;
}

// string learn_more_url = 8 [(.google.api.field_behavior) = OPTIONAL];
inline void AccountLinking::clear_learn_more_url() {
  learn_more_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& AccountLinking::learn_more_url() const {
  // @@protoc_insertion_point(field_get:google.actions.sdk.v2.AccountLinking.learn_more_url)
  return learn_more_url_.GetNoArena();
}
inline void AccountLinking::set_learn_more_url(const ::std::string& value) {
  
  learn_more_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.actions.sdk.v2.AccountLinking.learn_more_url)
}
#if LANG_CXX11
inline void AccountLinking::set_learn_more_url(::std::string&& value) {
  
  learn_more_url_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.actions.sdk.v2.AccountLinking.learn_more_url)
}
#endif
inline void AccountLinking::set_learn_more_url(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  learn_more_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.actions.sdk.v2.AccountLinking.learn_more_url)
}
inline void AccountLinking::set_learn_more_url(const char* value, size_t size) {
  
  learn_more_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.actions.sdk.v2.AccountLinking.learn_more_url)
}
inline ::std::string* AccountLinking::mutable_learn_more_url() {
  
  // @@protoc_insertion_point(field_mutable:google.actions.sdk.v2.AccountLinking.learn_more_url)
  return learn_more_url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AccountLinking::release_learn_more_url() {
  // @@protoc_insertion_point(field_release:google.actions.sdk.v2.AccountLinking.learn_more_url)
  
  return learn_more_url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AccountLinking::set_allocated_learn_more_url(::std::string* learn_more_url) {
  if (learn_more_url != nullptr) {
    
  } else {
    
  }
  learn_more_url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), learn_more_url);
  // @@protoc_insertion_point(field_set_allocated:google.actions.sdk.v2.AccountLinking.learn_more_url)
}

// bool use_basic_auth_header = 9 [(.google.api.field_behavior) = OPTIONAL];
inline void AccountLinking::clear_use_basic_auth_header() {
  use_basic_auth_header_ = false;
}
inline bool AccountLinking::use_basic_auth_header() const {
  // @@protoc_insertion_point(field_get:google.actions.sdk.v2.AccountLinking.use_basic_auth_header)
  return use_basic_auth_header_;
}
inline void AccountLinking::set_use_basic_auth_header(bool value) {
  
  use_basic_auth_header_ = value;
  // @@protoc_insertion_point(field_set:google.actions.sdk.v2.AccountLinking.use_basic_auth_header)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v2
}  // namespace sdk
}  // namespace actions
}  // namespace google

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::google::actions::sdk::v2::AccountLinking_LinkingType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::actions::sdk::v2::AccountLinking_LinkingType>() {
  return ::google::actions::sdk::v2::AccountLinking_LinkingType_descriptor();
}
template <> struct is_proto_enum< ::google::actions::sdk::v2::AccountLinking_AuthGrantType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::actions::sdk::v2::AccountLinking_AuthGrantType>() {
  return ::google::actions::sdk::v2::AccountLinking_AuthGrantType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_google_2factions_2fsdk_2fv2_2faccount_5flinking_2eproto
