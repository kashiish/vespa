// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/apps/script/type/addon_widget_set.proto

#ifndef PROTOBUF_INCLUDED_google_2fapps_2fscript_2ftype_2faddon_5fwidget_5fset_2eproto
#define PROTOBUF_INCLUDED_google_2fapps_2fscript_2ftype_2faddon_5fwidget_5fset_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fapps_2fscript_2ftype_2faddon_5fwidget_5fset_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fapps_2fscript_2ftype_2faddon_5fwidget_5fset_2eproto {
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
void AddDescriptors_google_2fapps_2fscript_2ftype_2faddon_5fwidget_5fset_2eproto();
namespace google {
namespace apps {
namespace script {
namespace type {
class AddOnWidgetSet;
class AddOnWidgetSetDefaultTypeInternal;
extern AddOnWidgetSetDefaultTypeInternal _AddOnWidgetSet_default_instance_;
}  // namespace type
}  // namespace script
}  // namespace apps
namespace protobuf {
template<> ::google::apps::script::type::AddOnWidgetSet* Arena::CreateMaybeMessage<::google::apps::script::type::AddOnWidgetSet>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace apps {
namespace script {
namespace type {

enum AddOnWidgetSet_WidgetType {
  AddOnWidgetSet_WidgetType_WIDGET_TYPE_UNSPECIFIED = 0,
  AddOnWidgetSet_WidgetType_DATE_PICKER = 1,
  AddOnWidgetSet_WidgetType_STYLED_BUTTONS = 2,
  AddOnWidgetSet_WidgetType_PERSISTENT_FORMS = 3,
  AddOnWidgetSet_WidgetType_FIXED_FOOTER = 4,
  AddOnWidgetSet_WidgetType_UPDATE_SUBJECT_AND_RECIPIENTS = 5,
  AddOnWidgetSet_WidgetType_GRID_WIDGET = 6,
  AddOnWidgetSet_WidgetType_ADDON_COMPOSE_UI_ACTION = 7,
  AddOnWidgetSet_WidgetType_AddOnWidgetSet_WidgetType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::min(),
  AddOnWidgetSet_WidgetType_AddOnWidgetSet_WidgetType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::max()
};
bool AddOnWidgetSet_WidgetType_IsValid(int value);
const AddOnWidgetSet_WidgetType AddOnWidgetSet_WidgetType_WidgetType_MIN = AddOnWidgetSet_WidgetType_WIDGET_TYPE_UNSPECIFIED;
const AddOnWidgetSet_WidgetType AddOnWidgetSet_WidgetType_WidgetType_MAX = AddOnWidgetSet_WidgetType_ADDON_COMPOSE_UI_ACTION;
const int AddOnWidgetSet_WidgetType_WidgetType_ARRAYSIZE = AddOnWidgetSet_WidgetType_WidgetType_MAX + 1;

const ::google::protobuf::EnumDescriptor* AddOnWidgetSet_WidgetType_descriptor();
inline const ::std::string& AddOnWidgetSet_WidgetType_Name(AddOnWidgetSet_WidgetType value) {
  return ::google::protobuf::internal::NameOfEnum(
    AddOnWidgetSet_WidgetType_descriptor(), value);
}
inline bool AddOnWidgetSet_WidgetType_Parse(
    const ::std::string& name, AddOnWidgetSet_WidgetType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<AddOnWidgetSet_WidgetType>(
    AddOnWidgetSet_WidgetType_descriptor(), name, value);
}
// ===================================================================

class AddOnWidgetSet final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.apps.script.type.AddOnWidgetSet) */ {
 public:
  AddOnWidgetSet();
  virtual ~AddOnWidgetSet();

  AddOnWidgetSet(const AddOnWidgetSet& from);

  inline AddOnWidgetSet& operator=(const AddOnWidgetSet& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AddOnWidgetSet(AddOnWidgetSet&& from) noexcept
    : AddOnWidgetSet() {
    *this = ::std::move(from);
  }

  inline AddOnWidgetSet& operator=(AddOnWidgetSet&& from) noexcept {
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
  static const AddOnWidgetSet& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AddOnWidgetSet* internal_default_instance() {
    return reinterpret_cast<const AddOnWidgetSet*>(
               &_AddOnWidgetSet_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(AddOnWidgetSet* other);
  friend void swap(AddOnWidgetSet& a, AddOnWidgetSet& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AddOnWidgetSet* New() const final {
    return CreateMaybeMessage<AddOnWidgetSet>(nullptr);
  }

  AddOnWidgetSet* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<AddOnWidgetSet>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const AddOnWidgetSet& from);
  void MergeFrom(const AddOnWidgetSet& from);
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
  void InternalSwap(AddOnWidgetSet* other);
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

  typedef AddOnWidgetSet_WidgetType WidgetType;
  static const WidgetType WIDGET_TYPE_UNSPECIFIED =
    AddOnWidgetSet_WidgetType_WIDGET_TYPE_UNSPECIFIED;
  static const WidgetType DATE_PICKER =
    AddOnWidgetSet_WidgetType_DATE_PICKER;
  static const WidgetType STYLED_BUTTONS =
    AddOnWidgetSet_WidgetType_STYLED_BUTTONS;
  static const WidgetType PERSISTENT_FORMS =
    AddOnWidgetSet_WidgetType_PERSISTENT_FORMS;
  static const WidgetType FIXED_FOOTER =
    AddOnWidgetSet_WidgetType_FIXED_FOOTER;
  static const WidgetType UPDATE_SUBJECT_AND_RECIPIENTS =
    AddOnWidgetSet_WidgetType_UPDATE_SUBJECT_AND_RECIPIENTS;
  static const WidgetType GRID_WIDGET =
    AddOnWidgetSet_WidgetType_GRID_WIDGET;
  static const WidgetType ADDON_COMPOSE_UI_ACTION =
    AddOnWidgetSet_WidgetType_ADDON_COMPOSE_UI_ACTION;
  static inline bool WidgetType_IsValid(int value) {
    return AddOnWidgetSet_WidgetType_IsValid(value);
  }
  static const WidgetType WidgetType_MIN =
    AddOnWidgetSet_WidgetType_WidgetType_MIN;
  static const WidgetType WidgetType_MAX =
    AddOnWidgetSet_WidgetType_WidgetType_MAX;
  static const int WidgetType_ARRAYSIZE =
    AddOnWidgetSet_WidgetType_WidgetType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  WidgetType_descriptor() {
    return AddOnWidgetSet_WidgetType_descriptor();
  }
  static inline const ::std::string& WidgetType_Name(WidgetType value) {
    return AddOnWidgetSet_WidgetType_Name(value);
  }
  static inline bool WidgetType_Parse(const ::std::string& name,
      WidgetType* value) {
    return AddOnWidgetSet_WidgetType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // repeated .google.apps.script.type.AddOnWidgetSet.WidgetType used_widgets = 1;
  int used_widgets_size() const;
  void clear_used_widgets();
  static const int kUsedWidgetsFieldNumber = 1;
  ::google::apps::script::type::AddOnWidgetSet_WidgetType used_widgets(int index) const;
  void set_used_widgets(int index, ::google::apps::script::type::AddOnWidgetSet_WidgetType value);
  void add_used_widgets(::google::apps::script::type::AddOnWidgetSet_WidgetType value);
  const ::google::protobuf::RepeatedField<int>& used_widgets() const;
  ::google::protobuf::RepeatedField<int>* mutable_used_widgets();

  // @@protoc_insertion_point(class_scope:google.apps.script.type.AddOnWidgetSet)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField<int> used_widgets_;
  mutable std::atomic<int> _used_widgets_cached_byte_size_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fapps_2fscript_2ftype_2faddon_5fwidget_5fset_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AddOnWidgetSet

// repeated .google.apps.script.type.AddOnWidgetSet.WidgetType used_widgets = 1;
inline int AddOnWidgetSet::used_widgets_size() const {
  return used_widgets_.size();
}
inline void AddOnWidgetSet::clear_used_widgets() {
  used_widgets_.Clear();
}
inline ::google::apps::script::type::AddOnWidgetSet_WidgetType AddOnWidgetSet::used_widgets(int index) const {
  // @@protoc_insertion_point(field_get:google.apps.script.type.AddOnWidgetSet.used_widgets)
  return static_cast< ::google::apps::script::type::AddOnWidgetSet_WidgetType >(used_widgets_.Get(index));
}
inline void AddOnWidgetSet::set_used_widgets(int index, ::google::apps::script::type::AddOnWidgetSet_WidgetType value) {
  used_widgets_.Set(index, value);
  // @@protoc_insertion_point(field_set:google.apps.script.type.AddOnWidgetSet.used_widgets)
}
inline void AddOnWidgetSet::add_used_widgets(::google::apps::script::type::AddOnWidgetSet_WidgetType value) {
  used_widgets_.Add(value);
  // @@protoc_insertion_point(field_add:google.apps.script.type.AddOnWidgetSet.used_widgets)
}
inline const ::google::protobuf::RepeatedField<int>&
AddOnWidgetSet::used_widgets() const {
  // @@protoc_insertion_point(field_list:google.apps.script.type.AddOnWidgetSet.used_widgets)
  return used_widgets_;
}
inline ::google::protobuf::RepeatedField<int>*
AddOnWidgetSet::mutable_used_widgets() {
  // @@protoc_insertion_point(field_mutable_list:google.apps.script.type.AddOnWidgetSet.used_widgets)
  return &used_widgets_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace type
}  // namespace script
}  // namespace apps
}  // namespace google

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::google::apps::script::type::AddOnWidgetSet_WidgetType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::apps::script::type::AddOnWidgetSet_WidgetType>() {
  return ::google::apps::script::type::AddOnWidgetSet_WidgetType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_google_2fapps_2fscript_2ftype_2faddon_5fwidget_5fset_2eproto
