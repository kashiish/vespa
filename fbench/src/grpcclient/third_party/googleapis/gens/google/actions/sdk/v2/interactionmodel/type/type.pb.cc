// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/actions/sdk/v2/interactionmodel/type/type.proto

#include "google/actions/sdk/v2/interactionmodel/type/type.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

extern PROTOBUF_INTERNAL_EXPORT_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ffree_5ftext_5ftype_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_FreeTextType_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ffree_5ftext_5ftype_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fregular_5fexpression_5ftype_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_RegularExpressionType_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fregular_5fexpression_5ftype_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fsynonym_5ftype_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_SynonymType_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fsynonym_5ftype_2eproto;
namespace google {
namespace actions {
namespace sdk {
namespace v2 {
namespace interactionmodel {
namespace type {
class TypeDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Type> _instance;
  const ::google::actions::sdk::v2::interactionmodel::type::SynonymType* synonym_;
  const ::google::actions::sdk::v2::interactionmodel::type::RegularExpressionType* regular_expression_;
  const ::google::actions::sdk::v2::interactionmodel::type::FreeTextType* free_text_;
} _Type_default_instance_;
}  // namespace type
}  // namespace interactionmodel
}  // namespace v2
}  // namespace sdk
}  // namespace actions
}  // namespace google
static void InitDefaultsType_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::actions::sdk::v2::interactionmodel::type::_Type_default_instance_;
    new (ptr) ::google::actions::sdk::v2::interactionmodel::type::Type();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::actions::sdk::v2::interactionmodel::type::Type::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<3> scc_info_Type_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 3, InitDefaultsType_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto}, {
      &scc_info_SynonymType_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fsynonym_5ftype_2eproto.base,
      &scc_info_RegularExpressionType_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fregular_5fexpression_5ftype_2eproto.base,
      &scc_info_FreeTextType_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ffree_5ftext_5ftype_2eproto.base,}};

void InitDefaults_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_Type_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto[1];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::actions::sdk::v2::interactionmodel::type::Type, _internal_metadata_),
  ~0u,  // no _extensions_
  PROTOBUF_FIELD_OFFSET(::google::actions::sdk::v2::interactionmodel::type::Type, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  offsetof(::google::actions::sdk::v2::interactionmodel::type::TypeDefaultTypeInternal, synonym_),
  offsetof(::google::actions::sdk::v2::interactionmodel::type::TypeDefaultTypeInternal, regular_expression_),
  offsetof(::google::actions::sdk::v2::interactionmodel::type::TypeDefaultTypeInternal, free_text_),
  PROTOBUF_FIELD_OFFSET(::google::actions::sdk::v2::interactionmodel::type::Type, exclusions_),
  PROTOBUF_FIELD_OFFSET(::google::actions::sdk::v2::interactionmodel::type::Type, sub_type_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::actions::sdk::v2::interactionmodel::type::Type)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::actions::sdk::v2::interactionmodel::type::_Type_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto = {
  {}, AddDescriptors_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto, "google/actions/sdk/v2/interactionmodel/type/type.proto", schemas,
  file_default_instances, TableStruct_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto::offsets,
  file_level_metadata_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto, 1, file_level_enum_descriptors_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto, file_level_service_descriptors_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto,
};

const char descriptor_table_protodef_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto[] =
  "\n6google/actions/sdk/v2/interactionmodel"
  "/type/type.proto\022+google.actions.sdk.v2."
  "interactionmodel.type\032@google/actions/sd"
  "k/v2/interactionmodel/type/free_text_typ"
  "e.proto\032Igoogle/actions/sdk/v2/interacti"
  "onmodel/type/regular_expression_type.pro"
  "to\032>google/actions/sdk/v2/interactionmod"
  "el/type/synonym_type.proto\"\245\002\n\004Type\022K\n\007s"
  "ynonym\030\001 \001(\01328.google.actions.sdk.v2.int"
  "eractionmodel.type.SynonymTypeH\000\022`\n\022regu"
  "lar_expression\030\002 \001(\0132B.google.actions.sd"
  "k.v2.interactionmodel.type.RegularExpres"
  "sionTypeH\000\022N\n\tfree_text\030\003 \001(\01329.google.a"
  "ctions.sdk.v2.interactionmodel.type.Free"
  "TextTypeH\000\022\022\n\nexclusions\030\004 \003(\tB\n\n\010sub_ty"
  "peB\212\001\n/com.google.actions.sdk.v2.interac"
  "tionmodel.typeB\tTypeProtoP\001ZJgoogle.gola"
  "ng.org/genproto/googleapis/actions/sdk/v"
  "2/interactionmodel/typeb\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto = {
  false, InitDefaults_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto, 
  descriptor_table_protodef_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto,
  "google/actions/sdk/v2/interactionmodel/type/type.proto", &assign_descriptors_table_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto, 751,
};

void AddDescriptors_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[3] =
  {
    ::AddDescriptors_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ffree_5ftext_5ftype_2eproto,
    ::AddDescriptors_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fregular_5fexpression_5ftype_2eproto,
    ::AddDescriptors_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fsynonym_5ftype_2eproto,
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto, deps, 3);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto = []() { AddDescriptors_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto(); return true; }();
namespace google {
namespace actions {
namespace sdk {
namespace v2 {
namespace interactionmodel {
namespace type {

// ===================================================================

void Type::InitAsDefaultInstance() {
  ::google::actions::sdk::v2::interactionmodel::type::_Type_default_instance_.synonym_ = const_cast< ::google::actions::sdk::v2::interactionmodel::type::SynonymType*>(
      ::google::actions::sdk::v2::interactionmodel::type::SynonymType::internal_default_instance());
  ::google::actions::sdk::v2::interactionmodel::type::_Type_default_instance_.regular_expression_ = const_cast< ::google::actions::sdk::v2::interactionmodel::type::RegularExpressionType*>(
      ::google::actions::sdk::v2::interactionmodel::type::RegularExpressionType::internal_default_instance());
  ::google::actions::sdk::v2::interactionmodel::type::_Type_default_instance_.free_text_ = const_cast< ::google::actions::sdk::v2::interactionmodel::type::FreeTextType*>(
      ::google::actions::sdk::v2::interactionmodel::type::FreeTextType::internal_default_instance());
}
class Type::HasBitSetters {
 public:
  static const ::google::actions::sdk::v2::interactionmodel::type::SynonymType& synonym(const Type* msg);
  static const ::google::actions::sdk::v2::interactionmodel::type::RegularExpressionType& regular_expression(const Type* msg);
  static const ::google::actions::sdk::v2::interactionmodel::type::FreeTextType& free_text(const Type* msg);
};

const ::google::actions::sdk::v2::interactionmodel::type::SynonymType&
Type::HasBitSetters::synonym(const Type* msg) {
  return *msg->sub_type_.synonym_;
}
const ::google::actions::sdk::v2::interactionmodel::type::RegularExpressionType&
Type::HasBitSetters::regular_expression(const Type* msg) {
  return *msg->sub_type_.regular_expression_;
}
const ::google::actions::sdk::v2::interactionmodel::type::FreeTextType&
Type::HasBitSetters::free_text(const Type* msg) {
  return *msg->sub_type_.free_text_;
}
void Type::set_allocated_synonym(::google::actions::sdk::v2::interactionmodel::type::SynonymType* synonym) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_sub_type();
  if (synonym) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      synonym = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, synonym, submessage_arena);
    }
    set_has_synonym();
    sub_type_.synonym_ = synonym;
  }
  // @@protoc_insertion_point(field_set_allocated:google.actions.sdk.v2.interactionmodel.type.Type.synonym)
}
void Type::clear_synonym() {
  if (has_synonym()) {
    delete sub_type_.synonym_;
    clear_has_sub_type();
  }
}
void Type::set_allocated_regular_expression(::google::actions::sdk::v2::interactionmodel::type::RegularExpressionType* regular_expression) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_sub_type();
  if (regular_expression) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      regular_expression = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, regular_expression, submessage_arena);
    }
    set_has_regular_expression();
    sub_type_.regular_expression_ = regular_expression;
  }
  // @@protoc_insertion_point(field_set_allocated:google.actions.sdk.v2.interactionmodel.type.Type.regular_expression)
}
void Type::clear_regular_expression() {
  if (has_regular_expression()) {
    delete sub_type_.regular_expression_;
    clear_has_sub_type();
  }
}
void Type::set_allocated_free_text(::google::actions::sdk::v2::interactionmodel::type::FreeTextType* free_text) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_sub_type();
  if (free_text) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      free_text = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, free_text, submessage_arena);
    }
    set_has_free_text();
    sub_type_.free_text_ = free_text;
  }
  // @@protoc_insertion_point(field_set_allocated:google.actions.sdk.v2.interactionmodel.type.Type.free_text)
}
void Type::clear_free_text() {
  if (has_free_text()) {
    delete sub_type_.free_text_;
    clear_has_sub_type();
  }
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Type::kSynonymFieldNumber;
const int Type::kRegularExpressionFieldNumber;
const int Type::kFreeTextFieldNumber;
const int Type::kExclusionsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Type::Type()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.actions.sdk.v2.interactionmodel.type.Type)
}
Type::Type(const Type& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr),
      exclusions_(from.exclusions_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  clear_has_sub_type();
  switch (from.sub_type_case()) {
    case kSynonym: {
      mutable_synonym()->::google::actions::sdk::v2::interactionmodel::type::SynonymType::MergeFrom(from.synonym());
      break;
    }
    case kRegularExpression: {
      mutable_regular_expression()->::google::actions::sdk::v2::interactionmodel::type::RegularExpressionType::MergeFrom(from.regular_expression());
      break;
    }
    case kFreeText: {
      mutable_free_text()->::google::actions::sdk::v2::interactionmodel::type::FreeTextType::MergeFrom(from.free_text());
      break;
    }
    case SUB_TYPE_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:google.actions.sdk.v2.interactionmodel.type.Type)
}

void Type::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_Type_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto.base);
  clear_has_sub_type();
}

Type::~Type() {
  // @@protoc_insertion_point(destructor:google.actions.sdk.v2.interactionmodel.type.Type)
  SharedDtor();
}

void Type::SharedDtor() {
  if (has_sub_type()) {
    clear_sub_type();
  }
}

void Type::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Type& Type::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_Type_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto.base);
  return *internal_default_instance();
}


void Type::clear_sub_type() {
// @@protoc_insertion_point(one_of_clear_start:google.actions.sdk.v2.interactionmodel.type.Type)
  switch (sub_type_case()) {
    case kSynonym: {
      delete sub_type_.synonym_;
      break;
    }
    case kRegularExpression: {
      delete sub_type_.regular_expression_;
      break;
    }
    case kFreeText: {
      delete sub_type_.free_text_;
      break;
    }
    case SUB_TYPE_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = SUB_TYPE_NOT_SET;
}


void Type::Clear() {
// @@protoc_insertion_point(message_clear_start:google.actions.sdk.v2.interactionmodel.type.Type)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  exclusions_.Clear();
  clear_sub_type();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Type::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<Type*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // .google.actions.sdk.v2.interactionmodel.type.SynonymType synonym = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        parser_till_end = ::google::actions::sdk::v2::interactionmodel::type::SynonymType::_InternalParse;
        object = msg->mutable_synonym();
        if (size > end - ptr) goto len_delim_till_end;
        ptr += size;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->ParseExactRange(
            {parser_till_end, object}, ptr - size, ptr));
        break;
      }
      // .google.actions.sdk.v2.interactionmodel.type.RegularExpressionType regular_expression = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 18) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        parser_till_end = ::google::actions::sdk::v2::interactionmodel::type::RegularExpressionType::_InternalParse;
        object = msg->mutable_regular_expression();
        if (size > end - ptr) goto len_delim_till_end;
        ptr += size;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->ParseExactRange(
            {parser_till_end, object}, ptr - size, ptr));
        break;
      }
      // .google.actions.sdk.v2.interactionmodel.type.FreeTextType free_text = 3;
      case 3: {
        if (static_cast<::google::protobuf::uint8>(tag) != 26) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        parser_till_end = ::google::actions::sdk::v2::interactionmodel::type::FreeTextType::_InternalParse;
        object = msg->mutable_free_text();
        if (size > end - ptr) goto len_delim_till_end;
        ptr += size;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->ParseExactRange(
            {parser_till_end, object}, ptr - size, ptr));
        break;
      }
      // repeated string exclusions = 4;
      case 4: {
        if (static_cast<::google::protobuf::uint8>(tag) != 34) goto handle_unusual;
        do {
          ptr = ::google::protobuf::io::ReadSize(ptr, &size);
          GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
          ctx->extra_parse_data().SetFieldName("google.actions.sdk.v2.interactionmodel.type.Type.exclusions");
          object = msg->add_exclusions();
          if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
            parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
            goto string_till_end;
          }
          GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
          ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
          ptr += size;
          if (ptr >= end) break;
        } while ((::google::protobuf::io::UnalignedLoad<::google::protobuf::uint64>(ptr) & 255) == 34 && (ptr += 1));
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool Type::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.actions.sdk.v2.interactionmodel.type.Type)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .google.actions.sdk.v2.interactionmodel.type.SynonymType synonym = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_synonym()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.actions.sdk.v2.interactionmodel.type.RegularExpressionType regular_expression = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (18 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_regular_expression()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.actions.sdk.v2.interactionmodel.type.FreeTextType free_text = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (26 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_free_text()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string exclusions = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (34 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_exclusions()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->exclusions(this->exclusions_size() - 1).data(),
            static_cast<int>(this->exclusions(this->exclusions_size() - 1).length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.actions.sdk.v2.interactionmodel.type.Type.exclusions"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.actions.sdk.v2.interactionmodel.type.Type)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.actions.sdk.v2.interactionmodel.type.Type)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Type::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.actions.sdk.v2.interactionmodel.type.Type)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.actions.sdk.v2.interactionmodel.type.SynonymType synonym = 1;
  if (has_synonym()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, HasBitSetters::synonym(this), output);
  }

  // .google.actions.sdk.v2.interactionmodel.type.RegularExpressionType regular_expression = 2;
  if (has_regular_expression()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, HasBitSetters::regular_expression(this), output);
  }

  // .google.actions.sdk.v2.interactionmodel.type.FreeTextType free_text = 3;
  if (has_free_text()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, HasBitSetters::free_text(this), output);
  }

  // repeated string exclusions = 4;
  for (int i = 0, n = this->exclusions_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->exclusions(i).data(), static_cast<int>(this->exclusions(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.actions.sdk.v2.interactionmodel.type.Type.exclusions");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->exclusions(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.actions.sdk.v2.interactionmodel.type.Type)
}

::google::protobuf::uint8* Type::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.actions.sdk.v2.interactionmodel.type.Type)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.actions.sdk.v2.interactionmodel.type.SynonymType synonym = 1;
  if (has_synonym()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, HasBitSetters::synonym(this), target);
  }

  // .google.actions.sdk.v2.interactionmodel.type.RegularExpressionType regular_expression = 2;
  if (has_regular_expression()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, HasBitSetters::regular_expression(this), target);
  }

  // .google.actions.sdk.v2.interactionmodel.type.FreeTextType free_text = 3;
  if (has_free_text()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, HasBitSetters::free_text(this), target);
  }

  // repeated string exclusions = 4;
  for (int i = 0, n = this->exclusions_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->exclusions(i).data(), static_cast<int>(this->exclusions(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.actions.sdk.v2.interactionmodel.type.Type.exclusions");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(4, this->exclusions(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.actions.sdk.v2.interactionmodel.type.Type)
  return target;
}

size_t Type::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.actions.sdk.v2.interactionmodel.type.Type)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string exclusions = 4;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->exclusions_size());
  for (int i = 0, n = this->exclusions_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->exclusions(i));
  }

  switch (sub_type_case()) {
    // .google.actions.sdk.v2.interactionmodel.type.SynonymType synonym = 1;
    case kSynonym: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *sub_type_.synonym_);
      break;
    }
    // .google.actions.sdk.v2.interactionmodel.type.RegularExpressionType regular_expression = 2;
    case kRegularExpression: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *sub_type_.regular_expression_);
      break;
    }
    // .google.actions.sdk.v2.interactionmodel.type.FreeTextType free_text = 3;
    case kFreeText: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *sub_type_.free_text_);
      break;
    }
    case SUB_TYPE_NOT_SET: {
      break;
    }
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Type::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.actions.sdk.v2.interactionmodel.type.Type)
  GOOGLE_DCHECK_NE(&from, this);
  const Type* source =
      ::google::protobuf::DynamicCastToGenerated<Type>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.actions.sdk.v2.interactionmodel.type.Type)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.actions.sdk.v2.interactionmodel.type.Type)
    MergeFrom(*source);
  }
}

void Type::MergeFrom(const Type& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.actions.sdk.v2.interactionmodel.type.Type)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  exclusions_.MergeFrom(from.exclusions_);
  switch (from.sub_type_case()) {
    case kSynonym: {
      mutable_synonym()->::google::actions::sdk::v2::interactionmodel::type::SynonymType::MergeFrom(from.synonym());
      break;
    }
    case kRegularExpression: {
      mutable_regular_expression()->::google::actions::sdk::v2::interactionmodel::type::RegularExpressionType::MergeFrom(from.regular_expression());
      break;
    }
    case kFreeText: {
      mutable_free_text()->::google::actions::sdk::v2::interactionmodel::type::FreeTextType::MergeFrom(from.free_text());
      break;
    }
    case SUB_TYPE_NOT_SET: {
      break;
    }
  }
}

void Type::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.actions.sdk.v2.interactionmodel.type.Type)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Type::CopyFrom(const Type& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.actions.sdk.v2.interactionmodel.type.Type)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Type::IsInitialized() const {
  return true;
}

void Type::Swap(Type* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Type::InternalSwap(Type* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  exclusions_.InternalSwap(CastToBase(&other->exclusions_));
  swap(sub_type_, other->sub_type_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
}

::google::protobuf::Metadata Type::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto);
  return ::file_level_metadata_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2ftype_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace type
}  // namespace interactionmodel
}  // namespace v2
}  // namespace sdk
}  // namespace actions
}  // namespace google
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::google::actions::sdk::v2::interactionmodel::type::Type* Arena::CreateMaybeMessage< ::google::actions::sdk::v2::interactionmodel::type::Type >(Arena* arena) {
  return Arena::CreateInternal< ::google::actions::sdk::v2::interactionmodel::type::Type >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
