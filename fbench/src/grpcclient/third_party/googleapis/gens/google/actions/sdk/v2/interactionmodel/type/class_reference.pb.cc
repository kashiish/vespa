// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/actions/sdk/v2/interactionmodel/type/class_reference.proto

#include "google/actions/sdk/v2/interactionmodel/type/class_reference.pb.h"

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

namespace google {
namespace actions {
namespace sdk {
namespace v2 {
namespace interactionmodel {
namespace type {
class ClassReferenceDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ClassReference> _instance;
} _ClassReference_default_instance_;
}  // namespace type
}  // namespace interactionmodel
}  // namespace v2
}  // namespace sdk
}  // namespace actions
}  // namespace google
static void InitDefaultsClassReference_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fclass_5freference_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::actions::sdk::v2::interactionmodel::type::_ClassReference_default_instance_;
    new (ptr) ::google::actions::sdk::v2::interactionmodel::type::ClassReference();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::actions::sdk::v2::interactionmodel::type::ClassReference::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ClassReference_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fclass_5freference_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsClassReference_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fclass_5freference_2eproto}, {}};

void InitDefaults_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fclass_5freference_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_ClassReference_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fclass_5freference_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fclass_5freference_2eproto[1];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fclass_5freference_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fclass_5freference_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fclass_5freference_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::actions::sdk::v2::interactionmodel::type::ClassReference, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::actions::sdk::v2::interactionmodel::type::ClassReference, name_),
  PROTOBUF_FIELD_OFFSET(::google::actions::sdk::v2::interactionmodel::type::ClassReference, list_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::actions::sdk::v2::interactionmodel::type::ClassReference)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::actions::sdk::v2::interactionmodel::type::_ClassReference_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fclass_5freference_2eproto = {
  {}, AddDescriptors_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fclass_5freference_2eproto, "google/actions/sdk/v2/interactionmodel/type/class_reference.proto", schemas,
  file_default_instances, TableStruct_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fclass_5freference_2eproto::offsets,
  file_level_metadata_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fclass_5freference_2eproto, 1, file_level_enum_descriptors_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fclass_5freference_2eproto, file_level_service_descriptors_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fclass_5freference_2eproto,
};

const char descriptor_table_protodef_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fclass_5freference_2eproto[] =
  "\nAgoogle/actions/sdk/v2/interactionmodel"
  "/type/class_reference.proto\022+google.acti"
  "ons.sdk.v2.interactionmodel.type\032\037google"
  "/api/field_behavior.proto\"6\n\016ClassRefere"
  "nce\022\021\n\004name\030\001 \001(\tB\003\340A\002\022\021\n\004list\030\002 \001(\010B\003\340A"
  "\001B\224\001\n/com.google.actions.sdk.v2.interact"
  "ionmodel.typeB\023ClassReferenceProtoP\001ZJgo"
  "ogle.golang.org/genproto/googleapis/acti"
  "ons/sdk/v2/interactionmodel/typeb\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fclass_5freference_2eproto = {
  false, InitDefaults_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fclass_5freference_2eproto, 
  descriptor_table_protodef_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fclass_5freference_2eproto,
  "google/actions/sdk/v2/interactionmodel/type/class_reference.proto", &assign_descriptors_table_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fclass_5freference_2eproto, 360,
};

void AddDescriptors_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fclass_5freference_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
    ::AddDescriptors_google_2fapi_2ffield_5fbehavior_2eproto,
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fclass_5freference_2eproto, deps, 1);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fclass_5freference_2eproto = []() { AddDescriptors_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fclass_5freference_2eproto(); return true; }();
namespace google {
namespace actions {
namespace sdk {
namespace v2 {
namespace interactionmodel {
namespace type {

// ===================================================================

void ClassReference::InitAsDefaultInstance() {
}
class ClassReference::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ClassReference::kNameFieldNumber;
const int ClassReference::kListFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ClassReference::ClassReference()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.actions.sdk.v2.interactionmodel.type.ClassReference)
}
ClassReference::ClassReference(const ClassReference& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  list_ = from.list_;
  // @@protoc_insertion_point(copy_constructor:google.actions.sdk.v2.interactionmodel.type.ClassReference)
}

void ClassReference::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_ClassReference_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fclass_5freference_2eproto.base);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  list_ = false;
}

ClassReference::~ClassReference() {
  // @@protoc_insertion_point(destructor:google.actions.sdk.v2.interactionmodel.type.ClassReference)
  SharedDtor();
}

void ClassReference::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ClassReference::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ClassReference& ClassReference::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_ClassReference_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fclass_5freference_2eproto.base);
  return *internal_default_instance();
}


void ClassReference::Clear() {
// @@protoc_insertion_point(message_clear_start:google.actions.sdk.v2.interactionmodel.type.ClassReference)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  list_ = false;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* ClassReference::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<ClassReference*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // string name = 1 [(.google.api.field_behavior) = REQUIRED];
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("google.actions.sdk.v2.interactionmodel.type.ClassReference.name");
        object = msg->mutable_name();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      // bool list = 2 [(.google.api.field_behavior) = OPTIONAL];
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 16) goto handle_unusual;
        msg->set_list(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
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
bool ClassReference::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.actions.sdk.v2.interactionmodel.type.ClassReference)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1 [(.google.api.field_behavior) = REQUIRED];
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.actions.sdk.v2.interactionmodel.type.ClassReference.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool list = 2 [(.google.api.field_behavior) = OPTIONAL];
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (16 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &list_)));
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
  // @@protoc_insertion_point(parse_success:google.actions.sdk.v2.interactionmodel.type.ClassReference)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.actions.sdk.v2.interactionmodel.type.ClassReference)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void ClassReference::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.actions.sdk.v2.interactionmodel.type.ClassReference)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1 [(.google.api.field_behavior) = REQUIRED];
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.actions.sdk.v2.interactionmodel.type.ClassReference.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // bool list = 2 [(.google.api.field_behavior) = OPTIONAL];
  if (this->list() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->list(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.actions.sdk.v2.interactionmodel.type.ClassReference)
}

::google::protobuf::uint8* ClassReference::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.actions.sdk.v2.interactionmodel.type.ClassReference)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1 [(.google.api.field_behavior) = REQUIRED];
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.actions.sdk.v2.interactionmodel.type.ClassReference.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // bool list = 2 [(.google.api.field_behavior) = OPTIONAL];
  if (this->list() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->list(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.actions.sdk.v2.interactionmodel.type.ClassReference)
  return target;
}

size_t ClassReference::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.actions.sdk.v2.interactionmodel.type.ClassReference)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 1 [(.google.api.field_behavior) = REQUIRED];
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // bool list = 2 [(.google.api.field_behavior) = OPTIONAL];
  if (this->list() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ClassReference::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.actions.sdk.v2.interactionmodel.type.ClassReference)
  GOOGLE_DCHECK_NE(&from, this);
  const ClassReference* source =
      ::google::protobuf::DynamicCastToGenerated<ClassReference>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.actions.sdk.v2.interactionmodel.type.ClassReference)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.actions.sdk.v2.interactionmodel.type.ClassReference)
    MergeFrom(*source);
  }
}

void ClassReference::MergeFrom(const ClassReference& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.actions.sdk.v2.interactionmodel.type.ClassReference)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.list() != 0) {
    set_list(from.list());
  }
}

void ClassReference::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.actions.sdk.v2.interactionmodel.type.ClassReference)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ClassReference::CopyFrom(const ClassReference& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.actions.sdk.v2.interactionmodel.type.ClassReference)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClassReference::IsInitialized() const {
  return true;
}

void ClassReference::Swap(ClassReference* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ClassReference::InternalSwap(ClassReference* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(list_, other->list_);
}

::google::protobuf::Metadata ClassReference::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fclass_5freference_2eproto);
  return ::file_level_metadata_google_2factions_2fsdk_2fv2_2finteractionmodel_2ftype_2fclass_5freference_2eproto[kIndexInFileMessages];
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
template<> PROTOBUF_NOINLINE ::google::actions::sdk::v2::interactionmodel::type::ClassReference* Arena::CreateMaybeMessage< ::google::actions::sdk::v2::interactionmodel::type::ClassReference >(Arena* arena) {
  return Arena::CreateInternal< ::google::actions::sdk::v2::interactionmodel::type::ClassReference >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
