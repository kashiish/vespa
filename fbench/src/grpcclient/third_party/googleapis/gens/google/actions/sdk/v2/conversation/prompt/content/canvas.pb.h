// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/actions/sdk/v2/conversation/prompt/content/canvas.proto

#ifndef PROTOBUF_INCLUDED_google_2factions_2fsdk_2fv2_2fconversation_2fprompt_2fcontent_2fcanvas_2eproto
#define PROTOBUF_INCLUDED_google_2factions_2fsdk_2fv2_2fconversation_2fprompt_2fcontent_2fcanvas_2eproto

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
#include <google/protobuf/struct.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2factions_2fsdk_2fv2_2fconversation_2fprompt_2fcontent_2fcanvas_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2factions_2fsdk_2fv2_2fconversation_2fprompt_2fcontent_2fcanvas_2eproto {
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
void AddDescriptors_google_2factions_2fsdk_2fv2_2fconversation_2fprompt_2fcontent_2fcanvas_2eproto();
namespace google {
namespace actions {
namespace sdk {
namespace v2 {
namespace conversation {
class Canvas;
class CanvasDefaultTypeInternal;
extern CanvasDefaultTypeInternal _Canvas_default_instance_;
}  // namespace conversation
}  // namespace v2
}  // namespace sdk
}  // namespace actions
namespace protobuf {
template<> ::google::actions::sdk::v2::conversation::Canvas* Arena::CreateMaybeMessage<::google::actions::sdk::v2::conversation::Canvas>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace actions {
namespace sdk {
namespace v2 {
namespace conversation {

// ===================================================================

class Canvas final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.actions.sdk.v2.conversation.Canvas) */ {
 public:
  Canvas();
  virtual ~Canvas();

  Canvas(const Canvas& from);

  inline Canvas& operator=(const Canvas& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Canvas(Canvas&& from) noexcept
    : Canvas() {
    *this = ::std::move(from);
  }

  inline Canvas& operator=(Canvas&& from) noexcept {
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
  static const Canvas& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Canvas* internal_default_instance() {
    return reinterpret_cast<const Canvas*>(
               &_Canvas_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Canvas* other);
  friend void swap(Canvas& a, Canvas& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Canvas* New() const final {
    return CreateMaybeMessage<Canvas>(nullptr);
  }

  Canvas* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Canvas>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Canvas& from);
  void MergeFrom(const Canvas& from);
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
  void InternalSwap(Canvas* other);
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

  // repeated .google.protobuf.Value data = 4;
  int data_size() const;
  void clear_data();
  static const int kDataFieldNumber = 4;
  ::google::protobuf::Value* mutable_data(int index);
  ::google::protobuf::RepeatedPtrField< ::google::protobuf::Value >*
      mutable_data();
  const ::google::protobuf::Value& data(int index) const;
  ::google::protobuf::Value* add_data();
  const ::google::protobuf::RepeatedPtrField< ::google::protobuf::Value >&
      data() const;

  // string url = 1;
  void clear_url();
  static const int kUrlFieldNumber = 1;
  const ::std::string& url() const;
  void set_url(const ::std::string& value);
  #if LANG_CXX11
  void set_url(::std::string&& value);
  #endif
  void set_url(const char* value);
  void set_url(const char* value, size_t size);
  ::std::string* mutable_url();
  ::std::string* release_url();
  void set_allocated_url(::std::string* url);

  // bool suppress_mic = 3;
  void clear_suppress_mic();
  static const int kSuppressMicFieldNumber = 3;
  bool suppress_mic() const;
  void set_suppress_mic(bool value);

  // bool enable_full_screen = 8;
  void clear_enable_full_screen();
  static const int kEnableFullScreenFieldNumber = 8;
  bool enable_full_screen() const;
  void set_enable_full_screen(bool value);

  // @@protoc_insertion_point(class_scope:google.actions.sdk.v2.conversation.Canvas)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::google::protobuf::Value > data_;
  ::google::protobuf::internal::ArenaStringPtr url_;
  bool suppress_mic_;
  bool enable_full_screen_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2factions_2fsdk_2fv2_2fconversation_2fprompt_2fcontent_2fcanvas_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Canvas

// string url = 1;
inline void Canvas::clear_url() {
  url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Canvas::url() const {
  // @@protoc_insertion_point(field_get:google.actions.sdk.v2.conversation.Canvas.url)
  return url_.GetNoArena();
}
inline void Canvas::set_url(const ::std::string& value) {
  
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.actions.sdk.v2.conversation.Canvas.url)
}
#if LANG_CXX11
inline void Canvas::set_url(::std::string&& value) {
  
  url_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.actions.sdk.v2.conversation.Canvas.url)
}
#endif
inline void Canvas::set_url(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.actions.sdk.v2.conversation.Canvas.url)
}
inline void Canvas::set_url(const char* value, size_t size) {
  
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.actions.sdk.v2.conversation.Canvas.url)
}
inline ::std::string* Canvas::mutable_url() {
  
  // @@protoc_insertion_point(field_mutable:google.actions.sdk.v2.conversation.Canvas.url)
  return url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Canvas::release_url() {
  // @@protoc_insertion_point(field_release:google.actions.sdk.v2.conversation.Canvas.url)
  
  return url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Canvas::set_allocated_url(::std::string* url) {
  if (url != nullptr) {
    
  } else {
    
  }
  url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), url);
  // @@protoc_insertion_point(field_set_allocated:google.actions.sdk.v2.conversation.Canvas.url)
}

// repeated .google.protobuf.Value data = 4;
inline int Canvas::data_size() const {
  return data_.size();
}
inline ::google::protobuf::Value* Canvas::mutable_data(int index) {
  // @@protoc_insertion_point(field_mutable:google.actions.sdk.v2.conversation.Canvas.data)
  return data_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::google::protobuf::Value >*
Canvas::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:google.actions.sdk.v2.conversation.Canvas.data)
  return &data_;
}
inline const ::google::protobuf::Value& Canvas::data(int index) const {
  // @@protoc_insertion_point(field_get:google.actions.sdk.v2.conversation.Canvas.data)
  return data_.Get(index);
}
inline ::google::protobuf::Value* Canvas::add_data() {
  // @@protoc_insertion_point(field_add:google.actions.sdk.v2.conversation.Canvas.data)
  return data_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::google::protobuf::Value >&
Canvas::data() const {
  // @@protoc_insertion_point(field_list:google.actions.sdk.v2.conversation.Canvas.data)
  return data_;
}

// bool suppress_mic = 3;
inline void Canvas::clear_suppress_mic() {
  suppress_mic_ = false;
}
inline bool Canvas::suppress_mic() const {
  // @@protoc_insertion_point(field_get:google.actions.sdk.v2.conversation.Canvas.suppress_mic)
  return suppress_mic_;
}
inline void Canvas::set_suppress_mic(bool value) {
  
  suppress_mic_ = value;
  // @@protoc_insertion_point(field_set:google.actions.sdk.v2.conversation.Canvas.suppress_mic)
}

// bool enable_full_screen = 8;
inline void Canvas::clear_enable_full_screen() {
  enable_full_screen_ = false;
}
inline bool Canvas::enable_full_screen() const {
  // @@protoc_insertion_point(field_get:google.actions.sdk.v2.conversation.Canvas.enable_full_screen)
  return enable_full_screen_;
}
inline void Canvas::set_enable_full_screen(bool value) {
  
  enable_full_screen_ = value;
  // @@protoc_insertion_point(field_set:google.actions.sdk.v2.conversation.Canvas.enable_full_screen)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace conversation
}  // namespace v2
}  // namespace sdk
}  // namespace actions
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_google_2factions_2fsdk_2fv2_2fconversation_2fprompt_2fcontent_2fcanvas_2eproto
