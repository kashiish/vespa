// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/actions/sdk/v2/interactionmodel/prompt/suggestion.proto

#include "google/actions/sdk/v2/interactionmodel/prompt/suggestion.pb.h"

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
namespace prompt {
class SuggestionDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Suggestion> _instance;
} _Suggestion_default_instance_;
}  // namespace prompt
}  // namespace interactionmodel
}  // namespace v2
}  // namespace sdk
}  // namespace actions
}  // namespace google
static void InitDefaultsSuggestion_google_2factions_2fsdk_2fv2_2finteractionmodel_2fprompt_2fsuggestion_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::actions::sdk::v2::interactionmodel::prompt::_Suggestion_default_instance_;
    new (ptr) ::google::actions::sdk::v2::interactionmodel::prompt::Suggestion();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::actions::sdk::v2::interactionmodel::prompt::Suggestion::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Suggestion_google_2factions_2fsdk_2fv2_2finteractionmodel_2fprompt_2fsuggestion_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsSuggestion_google_2factions_2fsdk_2fv2_2finteractionmodel_2fprompt_2fsuggestion_2eproto}, {}};

void InitDefaults_google_2factions_2fsdk_2fv2_2finteractionmodel_2fprompt_2fsuggestion_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_Suggestion_google_2factions_2fsdk_2fv2_2finteractionmodel_2fprompt_2fsuggestion_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_google_2factions_2fsdk_2fv2_2finteractionmodel_2fprompt_2fsuggestion_2eproto[1];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_google_2factions_2fsdk_2fv2_2finteractionmodel_2fprompt_2fsuggestion_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_google_2factions_2fsdk_2fv2_2finteractionmodel_2fprompt_2fsuggestion_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_google_2factions_2fsdk_2fv2_2finteractionmodel_2fprompt_2fsuggestion_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::actions::sdk::v2::interactionmodel::prompt::Suggestion, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::actions::sdk::v2::interactionmodel::prompt::Suggestion, title_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::actions::sdk::v2::interactionmodel::prompt::Suggestion)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::actions::sdk::v2::interactionmodel::prompt::_Suggestion_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_google_2factions_2fsdk_2fv2_2finteractionmodel_2fprompt_2fsuggestion_2eproto = {
  {}, AddDescriptors_google_2factions_2fsdk_2fv2_2finteractionmodel_2fprompt_2fsuggestion_2eproto, "google/actions/sdk/v2/interactionmodel/prompt/suggestion.proto", schemas,
  file_default_instances, TableStruct_google_2factions_2fsdk_2fv2_2finteractionmodel_2fprompt_2fsuggestion_2eproto::offsets,
  file_level_metadata_google_2factions_2fsdk_2fv2_2finteractionmodel_2fprompt_2fsuggestion_2eproto, 1, file_level_enum_descriptors_google_2factions_2fsdk_2fv2_2finteractionmodel_2fprompt_2fsuggestion_2eproto, file_level_service_descriptors_google_2factions_2fsdk_2fv2_2finteractionmodel_2fprompt_2fsuggestion_2eproto,
};

const char descriptor_table_protodef_google_2factions_2fsdk_2fv2_2finteractionmodel_2fprompt_2fsuggestion_2eproto[] =
  "\n>google/actions/sdk/v2/interactionmodel"
  "/prompt/suggestion.proto\022-google.actions"
  ".sdk.v2.interactionmodel.prompt\032\037google/"
  "api/field_behavior.proto\" \n\nSuggestion\022\022"
  "\n\005title\030\001 \001(\tB\003\340A\002B\233\001\n1com.google.action"
  "s.sdk.v2.interactionmodel.promptB\017Sugges"
  "tionProtoP\001ZSgoogle.golang.org/genproto/"
  "googleapis/actions/sdk/v2/interactionmod"
  "el/prompt;promptb\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_google_2factions_2fsdk_2fv2_2finteractionmodel_2fprompt_2fsuggestion_2eproto = {
  false, InitDefaults_google_2factions_2fsdk_2fv2_2finteractionmodel_2fprompt_2fsuggestion_2eproto, 
  descriptor_table_protodef_google_2factions_2fsdk_2fv2_2finteractionmodel_2fprompt_2fsuggestion_2eproto,
  "google/actions/sdk/v2/interactionmodel/prompt/suggestion.proto", &assign_descriptors_table_google_2factions_2fsdk_2fv2_2finteractionmodel_2fprompt_2fsuggestion_2eproto, 344,
};

void AddDescriptors_google_2factions_2fsdk_2fv2_2finteractionmodel_2fprompt_2fsuggestion_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
    ::AddDescriptors_google_2fapi_2ffield_5fbehavior_2eproto,
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_google_2factions_2fsdk_2fv2_2finteractionmodel_2fprompt_2fsuggestion_2eproto, deps, 1);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2factions_2fsdk_2fv2_2finteractionmodel_2fprompt_2fsuggestion_2eproto = []() { AddDescriptors_google_2factions_2fsdk_2fv2_2finteractionmodel_2fprompt_2fsuggestion_2eproto(); return true; }();
namespace google {
namespace actions {
namespace sdk {
namespace v2 {
namespace interactionmodel {
namespace prompt {

// ===================================================================

void Suggestion::InitAsDefaultInstance() {
}
class Suggestion::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Suggestion::kTitleFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Suggestion::Suggestion()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.actions.sdk.v2.interactionmodel.prompt.Suggestion)
}
Suggestion::Suggestion(const Suggestion& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  title_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.title().size() > 0) {
    title_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.title_);
  }
  // @@protoc_insertion_point(copy_constructor:google.actions.sdk.v2.interactionmodel.prompt.Suggestion)
}

void Suggestion::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_Suggestion_google_2factions_2fsdk_2fv2_2finteractionmodel_2fprompt_2fsuggestion_2eproto.base);
  title_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Suggestion::~Suggestion() {
  // @@protoc_insertion_point(destructor:google.actions.sdk.v2.interactionmodel.prompt.Suggestion)
  SharedDtor();
}

void Suggestion::SharedDtor() {
  title_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Suggestion::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Suggestion& Suggestion::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_Suggestion_google_2factions_2fsdk_2fv2_2finteractionmodel_2fprompt_2fsuggestion_2eproto.base);
  return *internal_default_instance();
}


void Suggestion::Clear() {
// @@protoc_insertion_point(message_clear_start:google.actions.sdk.v2.interactionmodel.prompt.Suggestion)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  title_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Suggestion::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<Suggestion*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // string title = 1 [(.google.api.field_behavior) = REQUIRED];
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("google.actions.sdk.v2.interactionmodel.prompt.Suggestion.title");
        object = msg->mutable_title();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
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
bool Suggestion::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.actions.sdk.v2.interactionmodel.prompt.Suggestion)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string title = 1 [(.google.api.field_behavior) = REQUIRED];
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_title()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->title().data(), static_cast<int>(this->title().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.actions.sdk.v2.interactionmodel.prompt.Suggestion.title"));
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
  // @@protoc_insertion_point(parse_success:google.actions.sdk.v2.interactionmodel.prompt.Suggestion)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.actions.sdk.v2.interactionmodel.prompt.Suggestion)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Suggestion::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.actions.sdk.v2.interactionmodel.prompt.Suggestion)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string title = 1 [(.google.api.field_behavior) = REQUIRED];
  if (this->title().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->title().data(), static_cast<int>(this->title().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.actions.sdk.v2.interactionmodel.prompt.Suggestion.title");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->title(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.actions.sdk.v2.interactionmodel.prompt.Suggestion)
}

::google::protobuf::uint8* Suggestion::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.actions.sdk.v2.interactionmodel.prompt.Suggestion)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string title = 1 [(.google.api.field_behavior) = REQUIRED];
  if (this->title().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->title().data(), static_cast<int>(this->title().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.actions.sdk.v2.interactionmodel.prompt.Suggestion.title");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->title(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.actions.sdk.v2.interactionmodel.prompt.Suggestion)
  return target;
}

size_t Suggestion::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.actions.sdk.v2.interactionmodel.prompt.Suggestion)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string title = 1 [(.google.api.field_behavior) = REQUIRED];
  if (this->title().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->title());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Suggestion::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.actions.sdk.v2.interactionmodel.prompt.Suggestion)
  GOOGLE_DCHECK_NE(&from, this);
  const Suggestion* source =
      ::google::protobuf::DynamicCastToGenerated<Suggestion>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.actions.sdk.v2.interactionmodel.prompt.Suggestion)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.actions.sdk.v2.interactionmodel.prompt.Suggestion)
    MergeFrom(*source);
  }
}

void Suggestion::MergeFrom(const Suggestion& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.actions.sdk.v2.interactionmodel.prompt.Suggestion)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.title().size() > 0) {

    title_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.title_);
  }
}

void Suggestion::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.actions.sdk.v2.interactionmodel.prompt.Suggestion)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Suggestion::CopyFrom(const Suggestion& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.actions.sdk.v2.interactionmodel.prompt.Suggestion)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Suggestion::IsInitialized() const {
  return true;
}

void Suggestion::Swap(Suggestion* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Suggestion::InternalSwap(Suggestion* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  title_.Swap(&other->title_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::google::protobuf::Metadata Suggestion::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_google_2factions_2fsdk_2fv2_2finteractionmodel_2fprompt_2fsuggestion_2eproto);
  return ::file_level_metadata_google_2factions_2fsdk_2fv2_2finteractionmodel_2fprompt_2fsuggestion_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace prompt
}  // namespace interactionmodel
}  // namespace v2
}  // namespace sdk
}  // namespace actions
}  // namespace google
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::google::actions::sdk::v2::interactionmodel::prompt::Suggestion* Arena::CreateMaybeMessage< ::google::actions::sdk::v2::interactionmodel::prompt::Suggestion >(Arena* arena) {
  return Arena::CreateInternal< ::google::actions::sdk::v2::interactionmodel::prompt::Suggestion >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
