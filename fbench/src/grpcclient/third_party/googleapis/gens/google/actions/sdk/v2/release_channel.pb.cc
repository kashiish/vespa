// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/actions/sdk/v2/release_channel.proto

#include "google/actions/sdk/v2/release_channel.pb.h"

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
class ReleaseChannelDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ReleaseChannel> _instance;
} _ReleaseChannel_default_instance_;
}  // namespace v2
}  // namespace sdk
}  // namespace actions
}  // namespace google
static void InitDefaultsReleaseChannel_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::actions::sdk::v2::_ReleaseChannel_default_instance_;
    new (ptr) ::google::actions::sdk::v2::ReleaseChannel();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::actions::sdk::v2::ReleaseChannel::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ReleaseChannel_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsReleaseChannel_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto}, {}};

void InitDefaults_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_ReleaseChannel_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto[1];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::actions::sdk::v2::ReleaseChannel, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::actions::sdk::v2::ReleaseChannel, name_),
  PROTOBUF_FIELD_OFFSET(::google::actions::sdk::v2::ReleaseChannel, current_version_),
  PROTOBUF_FIELD_OFFSET(::google::actions::sdk::v2::ReleaseChannel, pending_version_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::actions::sdk::v2::ReleaseChannel)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::actions::sdk::v2::_ReleaseChannel_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto = {
  {}, AddDescriptors_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto, "google/actions/sdk/v2/release_channel.proto", schemas,
  file_default_instances, TableStruct_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto::offsets,
  file_level_metadata_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto, 1, file_level_enum_descriptors_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto, file_level_service_descriptors_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto,
};

const char descriptor_table_protodef_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto[] =
  "\n+google/actions/sdk/v2/release_channel."
  "proto\022\025google.actions.sdk.v2\032\031google/api"
  "/resource.proto\"\262\001\n\016ReleaseChannel\022\014\n\004na"
  "me\030\001 \001(\t\022\027\n\017current_version\030\002 \001(\t\022\027\n\017pen"
  "ding_version\030\003 \001(\t:`\352A]\n%actions.googlea"
  "pis.com/ReleaseChannel\0224projects/{projec"
  "t}/releaseChannels/{release_channel}Bl\n\031"
  "com.google.actions.sdk.v2B\023ReleaseChanne"
  "lProtoP\001Z8google.golang.org/genproto/goo"
  "gleapis/actions/sdk/v2;sdkb\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto = {
  false, InitDefaults_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto, 
  descriptor_table_protodef_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto,
  "google/actions/sdk/v2/release_channel.proto", &assign_descriptors_table_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto, 394,
};

void AddDescriptors_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
    ::AddDescriptors_google_2fapi_2fresource_2eproto,
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto, deps, 1);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto = []() { AddDescriptors_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto(); return true; }();
namespace google {
namespace actions {
namespace sdk {
namespace v2 {

// ===================================================================

void ReleaseChannel::InitAsDefaultInstance() {
}
class ReleaseChannel::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ReleaseChannel::kNameFieldNumber;
const int ReleaseChannel::kCurrentVersionFieldNumber;
const int ReleaseChannel::kPendingVersionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ReleaseChannel::ReleaseChannel()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.actions.sdk.v2.ReleaseChannel)
}
ReleaseChannel::ReleaseChannel(const ReleaseChannel& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  current_version_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.current_version().size() > 0) {
    current_version_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.current_version_);
  }
  pending_version_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.pending_version().size() > 0) {
    pending_version_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.pending_version_);
  }
  // @@protoc_insertion_point(copy_constructor:google.actions.sdk.v2.ReleaseChannel)
}

void ReleaseChannel::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_ReleaseChannel_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto.base);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  current_version_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  pending_version_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

ReleaseChannel::~ReleaseChannel() {
  // @@protoc_insertion_point(destructor:google.actions.sdk.v2.ReleaseChannel)
  SharedDtor();
}

void ReleaseChannel::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  current_version_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  pending_version_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ReleaseChannel::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ReleaseChannel& ReleaseChannel::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_ReleaseChannel_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto.base);
  return *internal_default_instance();
}


void ReleaseChannel::Clear() {
// @@protoc_insertion_point(message_clear_start:google.actions.sdk.v2.ReleaseChannel)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  current_version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  pending_version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* ReleaseChannel::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<ReleaseChannel*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // string name = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("google.actions.sdk.v2.ReleaseChannel.name");
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
      // string current_version = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 18) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("google.actions.sdk.v2.ReleaseChannel.current_version");
        object = msg->mutable_current_version();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      // string pending_version = 3;
      case 3: {
        if (static_cast<::google::protobuf::uint8>(tag) != 26) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("google.actions.sdk.v2.ReleaseChannel.pending_version");
        object = msg->mutable_pending_version();
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
bool ReleaseChannel::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.actions.sdk.v2.ReleaseChannel)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.actions.sdk.v2.ReleaseChannel.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string current_version = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (18 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_current_version()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->current_version().data(), static_cast<int>(this->current_version().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.actions.sdk.v2.ReleaseChannel.current_version"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string pending_version = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (26 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_pending_version()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->pending_version().data(), static_cast<int>(this->pending_version().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.actions.sdk.v2.ReleaseChannel.pending_version"));
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
  // @@protoc_insertion_point(parse_success:google.actions.sdk.v2.ReleaseChannel)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.actions.sdk.v2.ReleaseChannel)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void ReleaseChannel::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.actions.sdk.v2.ReleaseChannel)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.actions.sdk.v2.ReleaseChannel.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // string current_version = 2;
  if (this->current_version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->current_version().data(), static_cast<int>(this->current_version().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.actions.sdk.v2.ReleaseChannel.current_version");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->current_version(), output);
  }

  // string pending_version = 3;
  if (this->pending_version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->pending_version().data(), static_cast<int>(this->pending_version().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.actions.sdk.v2.ReleaseChannel.pending_version");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->pending_version(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.actions.sdk.v2.ReleaseChannel)
}

::google::protobuf::uint8* ReleaseChannel::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.actions.sdk.v2.ReleaseChannel)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.actions.sdk.v2.ReleaseChannel.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // string current_version = 2;
  if (this->current_version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->current_version().data(), static_cast<int>(this->current_version().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.actions.sdk.v2.ReleaseChannel.current_version");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->current_version(), target);
  }

  // string pending_version = 3;
  if (this->pending_version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->pending_version().data(), static_cast<int>(this->pending_version().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.actions.sdk.v2.ReleaseChannel.pending_version");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->pending_version(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.actions.sdk.v2.ReleaseChannel)
  return target;
}

size_t ReleaseChannel::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.actions.sdk.v2.ReleaseChannel)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // string current_version = 2;
  if (this->current_version().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->current_version());
  }

  // string pending_version = 3;
  if (this->pending_version().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->pending_version());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ReleaseChannel::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.actions.sdk.v2.ReleaseChannel)
  GOOGLE_DCHECK_NE(&from, this);
  const ReleaseChannel* source =
      ::google::protobuf::DynamicCastToGenerated<ReleaseChannel>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.actions.sdk.v2.ReleaseChannel)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.actions.sdk.v2.ReleaseChannel)
    MergeFrom(*source);
  }
}

void ReleaseChannel::MergeFrom(const ReleaseChannel& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.actions.sdk.v2.ReleaseChannel)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.current_version().size() > 0) {

    current_version_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.current_version_);
  }
  if (from.pending_version().size() > 0) {

    pending_version_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.pending_version_);
  }
}

void ReleaseChannel::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.actions.sdk.v2.ReleaseChannel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ReleaseChannel::CopyFrom(const ReleaseChannel& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.actions.sdk.v2.ReleaseChannel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ReleaseChannel::IsInitialized() const {
  return true;
}

void ReleaseChannel::Swap(ReleaseChannel* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ReleaseChannel::InternalSwap(ReleaseChannel* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  current_version_.Swap(&other->current_version_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  pending_version_.Swap(&other->pending_version_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::google::protobuf::Metadata ReleaseChannel::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto);
  return ::file_level_metadata_google_2factions_2fsdk_2fv2_2frelease_5fchannel_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v2
}  // namespace sdk
}  // namespace actions
}  // namespace google
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::google::actions::sdk::v2::ReleaseChannel* Arena::CreateMaybeMessage< ::google::actions::sdk::v2::ReleaseChannel >(Arena* arena) {
  return Arena::CreateInternal< ::google::actions::sdk::v2::ReleaseChannel >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
