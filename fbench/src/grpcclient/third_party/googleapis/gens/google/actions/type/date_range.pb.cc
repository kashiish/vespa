// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/actions/type/date_range.proto

#include "google/actions/type/date_range.pb.h"

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

extern PROTOBUF_INTERNAL_EXPORT_google_2ftype_2fdate_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Date_google_2ftype_2fdate_2eproto;
namespace google {
namespace actions {
namespace type {
class DateRangeDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<DateRange> _instance;
} _DateRange_default_instance_;
}  // namespace type
}  // namespace actions
}  // namespace google
static void InitDefaultsDateRange_google_2factions_2ftype_2fdate_5frange_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::actions::type::_DateRange_default_instance_;
    new (ptr) ::google::actions::type::DateRange();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::actions::type::DateRange::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_DateRange_google_2factions_2ftype_2fdate_5frange_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsDateRange_google_2factions_2ftype_2fdate_5frange_2eproto}, {
      &scc_info_Date_google_2ftype_2fdate_2eproto.base,}};

void InitDefaults_google_2factions_2ftype_2fdate_5frange_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_DateRange_google_2factions_2ftype_2fdate_5frange_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_google_2factions_2ftype_2fdate_5frange_2eproto[1];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_google_2factions_2ftype_2fdate_5frange_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_google_2factions_2ftype_2fdate_5frange_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_google_2factions_2ftype_2fdate_5frange_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::actions::type::DateRange, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::actions::type::DateRange, start_),
  PROTOBUF_FIELD_OFFSET(::google::actions::type::DateRange, end_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::actions::type::DateRange)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::actions::type::_DateRange_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_google_2factions_2ftype_2fdate_5frange_2eproto = {
  {}, AddDescriptors_google_2factions_2ftype_2fdate_5frange_2eproto, "google/actions/type/date_range.proto", schemas,
  file_default_instances, TableStruct_google_2factions_2ftype_2fdate_5frange_2eproto::offsets,
  file_level_metadata_google_2factions_2ftype_2fdate_5frange_2eproto, 1, file_level_enum_descriptors_google_2factions_2ftype_2fdate_5frange_2eproto, file_level_service_descriptors_google_2factions_2ftype_2fdate_5frange_2eproto,
};

const char descriptor_table_protodef_google_2factions_2ftype_2fdate_5frange_2eproto[] =
  "\n$google/actions/type/date_range.proto\022\023"
  "google.actions.type\032\026google/type/date.pr"
  "oto\"M\n\tDateRange\022 \n\005start\030\001 \001(\0132\021.google"
  ".type.Date\022\036\n\003end\030\002 \001(\0132\021.google.type.Da"
  "teBu\n\027com.google.actions.typeB\016DateRange"
  "ProtoP\001Z@google.golang.org/genproto/goog"
  "leapis/type/date_range;date_range\242\002\005AOGT"
  "Pb\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_google_2factions_2ftype_2fdate_5frange_2eproto = {
  false, InitDefaults_google_2factions_2ftype_2fdate_5frange_2eproto, 
  descriptor_table_protodef_google_2factions_2ftype_2fdate_5frange_2eproto,
  "google/actions/type/date_range.proto", &assign_descriptors_table_google_2factions_2ftype_2fdate_5frange_2eproto, 289,
};

void AddDescriptors_google_2factions_2ftype_2fdate_5frange_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
    ::AddDescriptors_google_2ftype_2fdate_2eproto,
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_google_2factions_2ftype_2fdate_5frange_2eproto, deps, 1);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2factions_2ftype_2fdate_5frange_2eproto = []() { AddDescriptors_google_2factions_2ftype_2fdate_5frange_2eproto(); return true; }();
namespace google {
namespace actions {
namespace type {

// ===================================================================

void DateRange::InitAsDefaultInstance() {
  ::google::actions::type::_DateRange_default_instance_._instance.get_mutable()->start_ = const_cast< ::google::type::Date*>(
      ::google::type::Date::internal_default_instance());
  ::google::actions::type::_DateRange_default_instance_._instance.get_mutable()->end_ = const_cast< ::google::type::Date*>(
      ::google::type::Date::internal_default_instance());
}
class DateRange::HasBitSetters {
 public:
  static const ::google::type::Date& start(const DateRange* msg);
  static const ::google::type::Date& end(const DateRange* msg);
};

const ::google::type::Date&
DateRange::HasBitSetters::start(const DateRange* msg) {
  return *msg->start_;
}
const ::google::type::Date&
DateRange::HasBitSetters::end(const DateRange* msg) {
  return *msg->end_;
}
void DateRange::clear_start() {
  if (GetArenaNoVirtual() == nullptr && start_ != nullptr) {
    delete start_;
  }
  start_ = nullptr;
}
void DateRange::clear_end() {
  if (GetArenaNoVirtual() == nullptr && end_ != nullptr) {
    delete end_;
  }
  end_ = nullptr;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int DateRange::kStartFieldNumber;
const int DateRange::kEndFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

DateRange::DateRange()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.actions.type.DateRange)
}
DateRange::DateRange(const DateRange& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_start()) {
    start_ = new ::google::type::Date(*from.start_);
  } else {
    start_ = nullptr;
  }
  if (from.has_end()) {
    end_ = new ::google::type::Date(*from.end_);
  } else {
    end_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:google.actions.type.DateRange)
}

void DateRange::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_DateRange_google_2factions_2ftype_2fdate_5frange_2eproto.base);
  ::memset(&start_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&end_) -
      reinterpret_cast<char*>(&start_)) + sizeof(end_));
}

DateRange::~DateRange() {
  // @@protoc_insertion_point(destructor:google.actions.type.DateRange)
  SharedDtor();
}

void DateRange::SharedDtor() {
  if (this != internal_default_instance()) delete start_;
  if (this != internal_default_instance()) delete end_;
}

void DateRange::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const DateRange& DateRange::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_DateRange_google_2factions_2ftype_2fdate_5frange_2eproto.base);
  return *internal_default_instance();
}


void DateRange::Clear() {
// @@protoc_insertion_point(message_clear_start:google.actions.type.DateRange)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == nullptr && start_ != nullptr) {
    delete start_;
  }
  start_ = nullptr;
  if (GetArenaNoVirtual() == nullptr && end_ != nullptr) {
    delete end_;
  }
  end_ = nullptr;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* DateRange::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<DateRange*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // .google.type.Date start = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        parser_till_end = ::google::type::Date::_InternalParse;
        object = msg->mutable_start();
        if (size > end - ptr) goto len_delim_till_end;
        ptr += size;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->ParseExactRange(
            {parser_till_end, object}, ptr - size, ptr));
        break;
      }
      // .google.type.Date end = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 18) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        parser_till_end = ::google::type::Date::_InternalParse;
        object = msg->mutable_end();
        if (size > end - ptr) goto len_delim_till_end;
        ptr += size;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->ParseExactRange(
            {parser_till_end, object}, ptr - size, ptr));
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
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool DateRange::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.actions.type.DateRange)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .google.type.Date start = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_start()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.type.Date end = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (18 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_end()));
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
  // @@protoc_insertion_point(parse_success:google.actions.type.DateRange)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.actions.type.DateRange)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void DateRange::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.actions.type.DateRange)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.type.Date start = 1;
  if (this->has_start()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, HasBitSetters::start(this), output);
  }

  // .google.type.Date end = 2;
  if (this->has_end()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, HasBitSetters::end(this), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.actions.type.DateRange)
}

::google::protobuf::uint8* DateRange::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.actions.type.DateRange)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.type.Date start = 1;
  if (this->has_start()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, HasBitSetters::start(this), target);
  }

  // .google.type.Date end = 2;
  if (this->has_end()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, HasBitSetters::end(this), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.actions.type.DateRange)
  return target;
}

size_t DateRange::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.actions.type.DateRange)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .google.type.Date start = 1;
  if (this->has_start()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *start_);
  }

  // .google.type.Date end = 2;
  if (this->has_end()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *end_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void DateRange::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.actions.type.DateRange)
  GOOGLE_DCHECK_NE(&from, this);
  const DateRange* source =
      ::google::protobuf::DynamicCastToGenerated<DateRange>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.actions.type.DateRange)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.actions.type.DateRange)
    MergeFrom(*source);
  }
}

void DateRange::MergeFrom(const DateRange& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.actions.type.DateRange)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_start()) {
    mutable_start()->::google::type::Date::MergeFrom(from.start());
  }
  if (from.has_end()) {
    mutable_end()->::google::type::Date::MergeFrom(from.end());
  }
}

void DateRange::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.actions.type.DateRange)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DateRange::CopyFrom(const DateRange& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.actions.type.DateRange)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DateRange::IsInitialized() const {
  return true;
}

void DateRange::Swap(DateRange* other) {
  if (other == this) return;
  InternalSwap(other);
}
void DateRange::InternalSwap(DateRange* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(start_, other->start_);
  swap(end_, other->end_);
}

::google::protobuf::Metadata DateRange::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_google_2factions_2ftype_2fdate_5frange_2eproto);
  return ::file_level_metadata_google_2factions_2ftype_2fdate_5frange_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace type
}  // namespace actions
}  // namespace google
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::google::actions::type::DateRange* Arena::CreateMaybeMessage< ::google::actions::type::DateRange >(Arena* arena) {
  return Arena::CreateInternal< ::google::actions::type::DateRange >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
