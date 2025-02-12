// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/actions/sdk/v2/conversation/prompt/content/content.proto

#ifndef PROTOBUF_INCLUDED_google_2factions_2fsdk_2fv2_2fconversation_2fprompt_2fcontent_2fcontent_2eproto
#define PROTOBUF_INCLUDED_google_2factions_2fsdk_2fv2_2fconversation_2fprompt_2fcontent_2fcontent_2eproto

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
#include "google/actions/sdk/v2/conversation/prompt/content/canvas.pb.h"
#include "google/actions/sdk/v2/conversation/prompt/content/card.pb.h"
#include "google/actions/sdk/v2/conversation/prompt/content/collection.pb.h"
#include "google/actions/sdk/v2/conversation/prompt/content/image.pb.h"
#include "google/actions/sdk/v2/conversation/prompt/content/list.pb.h"
#include "google/actions/sdk/v2/conversation/prompt/content/media.pb.h"
#include "google/actions/sdk/v2/conversation/prompt/content/table.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2factions_2fsdk_2fv2_2fconversation_2fprompt_2fcontent_2fcontent_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2factions_2fsdk_2fv2_2fconversation_2fprompt_2fcontent_2fcontent_2eproto {
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
void AddDescriptors_google_2factions_2fsdk_2fv2_2fconversation_2fprompt_2fcontent_2fcontent_2eproto();
namespace google {
namespace actions {
namespace sdk {
namespace v2 {
namespace conversation {
class Content;
class ContentDefaultTypeInternal;
extern ContentDefaultTypeInternal _Content_default_instance_;
}  // namespace conversation
}  // namespace v2
}  // namespace sdk
}  // namespace actions
namespace protobuf {
template<> ::google::actions::sdk::v2::conversation::Content* Arena::CreateMaybeMessage<::google::actions::sdk::v2::conversation::Content>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace actions {
namespace sdk {
namespace v2 {
namespace conversation {

// ===================================================================

class Content final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.actions.sdk.v2.conversation.Content) */ {
 public:
  Content();
  virtual ~Content();

  Content(const Content& from);

  inline Content& operator=(const Content& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Content(Content&& from) noexcept
    : Content() {
    *this = ::std::move(from);
  }

  inline Content& operator=(Content&& from) noexcept {
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
  static const Content& default_instance();

  enum ContentCase {
    kCard = 1,
    kImage = 2,
    kTable = 3,
    kMedia = 4,
    kCanvas = 5,
    kCollection = 6,
    kList = 7,
    CONTENT_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Content* internal_default_instance() {
    return reinterpret_cast<const Content*>(
               &_Content_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Content* other);
  friend void swap(Content& a, Content& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Content* New() const final {
    return CreateMaybeMessage<Content>(nullptr);
  }

  Content* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Content>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Content& from);
  void MergeFrom(const Content& from);
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
  void InternalSwap(Content* other);
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

  // .google.actions.sdk.v2.conversation.Card card = 1;
  bool has_card() const;
  void clear_card();
  static const int kCardFieldNumber = 1;
  const ::google::actions::sdk::v2::conversation::Card& card() const;
  ::google::actions::sdk::v2::conversation::Card* release_card();
  ::google::actions::sdk::v2::conversation::Card* mutable_card();
  void set_allocated_card(::google::actions::sdk::v2::conversation::Card* card);

  // .google.actions.sdk.v2.conversation.Image image = 2;
  bool has_image() const;
  void clear_image();
  static const int kImageFieldNumber = 2;
  const ::google::actions::sdk::v2::conversation::Image& image() const;
  ::google::actions::sdk::v2::conversation::Image* release_image();
  ::google::actions::sdk::v2::conversation::Image* mutable_image();
  void set_allocated_image(::google::actions::sdk::v2::conversation::Image* image);

  // .google.actions.sdk.v2.conversation.Table table = 3;
  bool has_table() const;
  void clear_table();
  static const int kTableFieldNumber = 3;
  const ::google::actions::sdk::v2::conversation::Table& table() const;
  ::google::actions::sdk::v2::conversation::Table* release_table();
  ::google::actions::sdk::v2::conversation::Table* mutable_table();
  void set_allocated_table(::google::actions::sdk::v2::conversation::Table* table);

  // .google.actions.sdk.v2.conversation.Media media = 4;
  bool has_media() const;
  void clear_media();
  static const int kMediaFieldNumber = 4;
  const ::google::actions::sdk::v2::conversation::Media& media() const;
  ::google::actions::sdk::v2::conversation::Media* release_media();
  ::google::actions::sdk::v2::conversation::Media* mutable_media();
  void set_allocated_media(::google::actions::sdk::v2::conversation::Media* media);

  // .google.actions.sdk.v2.conversation.Canvas canvas = 5 [deprecated = true];
  PROTOBUF_DEPRECATED bool has_canvas() const;
  PROTOBUF_DEPRECATED void clear_canvas();
  PROTOBUF_DEPRECATED static const int kCanvasFieldNumber = 5;
  PROTOBUF_DEPRECATED const ::google::actions::sdk::v2::conversation::Canvas& canvas() const;
  PROTOBUF_DEPRECATED ::google::actions::sdk::v2::conversation::Canvas* release_canvas();
  PROTOBUF_DEPRECATED ::google::actions::sdk::v2::conversation::Canvas* mutable_canvas();
  PROTOBUF_DEPRECATED void set_allocated_canvas(::google::actions::sdk::v2::conversation::Canvas* canvas);

  // .google.actions.sdk.v2.conversation.Collection collection = 6;
  bool has_collection() const;
  void clear_collection();
  static const int kCollectionFieldNumber = 6;
  const ::google::actions::sdk::v2::conversation::Collection& collection() const;
  ::google::actions::sdk::v2::conversation::Collection* release_collection();
  ::google::actions::sdk::v2::conversation::Collection* mutable_collection();
  void set_allocated_collection(::google::actions::sdk::v2::conversation::Collection* collection);

  // .google.actions.sdk.v2.conversation.List list = 7;
  bool has_list() const;
  void clear_list();
  static const int kListFieldNumber = 7;
  const ::google::actions::sdk::v2::conversation::List& list() const;
  ::google::actions::sdk::v2::conversation::List* release_list();
  ::google::actions::sdk::v2::conversation::List* mutable_list();
  void set_allocated_list(::google::actions::sdk::v2::conversation::List* list);

  void clear_content();
  ContentCase content_case() const;
  // @@protoc_insertion_point(class_scope:google.actions.sdk.v2.conversation.Content)
 private:
  class HasBitSetters;
  void set_has_card();
  void set_has_image();
  void set_has_table();
  void set_has_media();
  void set_has_canvas();
  void set_has_collection();
  void set_has_list();

  inline bool has_content() const;
  inline void clear_has_content();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  union ContentUnion {
    ContentUnion() {}
    ::google::actions::sdk::v2::conversation::Card* card_;
    ::google::actions::sdk::v2::conversation::Image* image_;
    ::google::actions::sdk::v2::conversation::Table* table_;
    ::google::actions::sdk::v2::conversation::Media* media_;
    ::google::actions::sdk::v2::conversation::Canvas* canvas_;
    ::google::actions::sdk::v2::conversation::Collection* collection_;
    ::google::actions::sdk::v2::conversation::List* list_;
  } content_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::TableStruct_google_2factions_2fsdk_2fv2_2fconversation_2fprompt_2fcontent_2fcontent_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Content

// .google.actions.sdk.v2.conversation.Card card = 1;
inline bool Content::has_card() const {
  return content_case() == kCard;
}
inline void Content::set_has_card() {
  _oneof_case_[0] = kCard;
}
inline ::google::actions::sdk::v2::conversation::Card* Content::release_card() {
  // @@protoc_insertion_point(field_release:google.actions.sdk.v2.conversation.Content.card)
  if (has_card()) {
    clear_has_content();
      ::google::actions::sdk::v2::conversation::Card* temp = content_.card_;
    content_.card_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::google::actions::sdk::v2::conversation::Card& Content::card() const {
  // @@protoc_insertion_point(field_get:google.actions.sdk.v2.conversation.Content.card)
  return has_card()
      ? *content_.card_
      : *reinterpret_cast< ::google::actions::sdk::v2::conversation::Card*>(&::google::actions::sdk::v2::conversation::_Card_default_instance_);
}
inline ::google::actions::sdk::v2::conversation::Card* Content::mutable_card() {
  if (!has_card()) {
    clear_content();
    set_has_card();
    content_.card_ = CreateMaybeMessage< ::google::actions::sdk::v2::conversation::Card >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:google.actions.sdk.v2.conversation.Content.card)
  return content_.card_;
}

// .google.actions.sdk.v2.conversation.Image image = 2;
inline bool Content::has_image() const {
  return content_case() == kImage;
}
inline void Content::set_has_image() {
  _oneof_case_[0] = kImage;
}
inline ::google::actions::sdk::v2::conversation::Image* Content::release_image() {
  // @@protoc_insertion_point(field_release:google.actions.sdk.v2.conversation.Content.image)
  if (has_image()) {
    clear_has_content();
      ::google::actions::sdk::v2::conversation::Image* temp = content_.image_;
    content_.image_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::google::actions::sdk::v2::conversation::Image& Content::image() const {
  // @@protoc_insertion_point(field_get:google.actions.sdk.v2.conversation.Content.image)
  return has_image()
      ? *content_.image_
      : *reinterpret_cast< ::google::actions::sdk::v2::conversation::Image*>(&::google::actions::sdk::v2::conversation::_Image_default_instance_);
}
inline ::google::actions::sdk::v2::conversation::Image* Content::mutable_image() {
  if (!has_image()) {
    clear_content();
    set_has_image();
    content_.image_ = CreateMaybeMessage< ::google::actions::sdk::v2::conversation::Image >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:google.actions.sdk.v2.conversation.Content.image)
  return content_.image_;
}

// .google.actions.sdk.v2.conversation.Table table = 3;
inline bool Content::has_table() const {
  return content_case() == kTable;
}
inline void Content::set_has_table() {
  _oneof_case_[0] = kTable;
}
inline ::google::actions::sdk::v2::conversation::Table* Content::release_table() {
  // @@protoc_insertion_point(field_release:google.actions.sdk.v2.conversation.Content.table)
  if (has_table()) {
    clear_has_content();
      ::google::actions::sdk::v2::conversation::Table* temp = content_.table_;
    content_.table_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::google::actions::sdk::v2::conversation::Table& Content::table() const {
  // @@protoc_insertion_point(field_get:google.actions.sdk.v2.conversation.Content.table)
  return has_table()
      ? *content_.table_
      : *reinterpret_cast< ::google::actions::sdk::v2::conversation::Table*>(&::google::actions::sdk::v2::conversation::_Table_default_instance_);
}
inline ::google::actions::sdk::v2::conversation::Table* Content::mutable_table() {
  if (!has_table()) {
    clear_content();
    set_has_table();
    content_.table_ = CreateMaybeMessage< ::google::actions::sdk::v2::conversation::Table >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:google.actions.sdk.v2.conversation.Content.table)
  return content_.table_;
}

// .google.actions.sdk.v2.conversation.Media media = 4;
inline bool Content::has_media() const {
  return content_case() == kMedia;
}
inline void Content::set_has_media() {
  _oneof_case_[0] = kMedia;
}
inline ::google::actions::sdk::v2::conversation::Media* Content::release_media() {
  // @@protoc_insertion_point(field_release:google.actions.sdk.v2.conversation.Content.media)
  if (has_media()) {
    clear_has_content();
      ::google::actions::sdk::v2::conversation::Media* temp = content_.media_;
    content_.media_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::google::actions::sdk::v2::conversation::Media& Content::media() const {
  // @@protoc_insertion_point(field_get:google.actions.sdk.v2.conversation.Content.media)
  return has_media()
      ? *content_.media_
      : *reinterpret_cast< ::google::actions::sdk::v2::conversation::Media*>(&::google::actions::sdk::v2::conversation::_Media_default_instance_);
}
inline ::google::actions::sdk::v2::conversation::Media* Content::mutable_media() {
  if (!has_media()) {
    clear_content();
    set_has_media();
    content_.media_ = CreateMaybeMessage< ::google::actions::sdk::v2::conversation::Media >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:google.actions.sdk.v2.conversation.Content.media)
  return content_.media_;
}

// .google.actions.sdk.v2.conversation.Canvas canvas = 5 [deprecated = true];
inline bool Content::has_canvas() const {
  return content_case() == kCanvas;
}
inline void Content::set_has_canvas() {
  _oneof_case_[0] = kCanvas;
}
inline ::google::actions::sdk::v2::conversation::Canvas* Content::release_canvas() {
  // @@protoc_insertion_point(field_release:google.actions.sdk.v2.conversation.Content.canvas)
  if (has_canvas()) {
    clear_has_content();
      ::google::actions::sdk::v2::conversation::Canvas* temp = content_.canvas_;
    content_.canvas_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::google::actions::sdk::v2::conversation::Canvas& Content::canvas() const {
  // @@protoc_insertion_point(field_get:google.actions.sdk.v2.conversation.Content.canvas)
  return has_canvas()
      ? *content_.canvas_
      : *reinterpret_cast< ::google::actions::sdk::v2::conversation::Canvas*>(&::google::actions::sdk::v2::conversation::_Canvas_default_instance_);
}
inline ::google::actions::sdk::v2::conversation::Canvas* Content::mutable_canvas() {
  if (!has_canvas()) {
    clear_content();
    set_has_canvas();
    content_.canvas_ = CreateMaybeMessage< ::google::actions::sdk::v2::conversation::Canvas >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:google.actions.sdk.v2.conversation.Content.canvas)
  return content_.canvas_;
}

// .google.actions.sdk.v2.conversation.Collection collection = 6;
inline bool Content::has_collection() const {
  return content_case() == kCollection;
}
inline void Content::set_has_collection() {
  _oneof_case_[0] = kCollection;
}
inline ::google::actions::sdk::v2::conversation::Collection* Content::release_collection() {
  // @@protoc_insertion_point(field_release:google.actions.sdk.v2.conversation.Content.collection)
  if (has_collection()) {
    clear_has_content();
      ::google::actions::sdk::v2::conversation::Collection* temp = content_.collection_;
    content_.collection_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::google::actions::sdk::v2::conversation::Collection& Content::collection() const {
  // @@protoc_insertion_point(field_get:google.actions.sdk.v2.conversation.Content.collection)
  return has_collection()
      ? *content_.collection_
      : *reinterpret_cast< ::google::actions::sdk::v2::conversation::Collection*>(&::google::actions::sdk::v2::conversation::_Collection_default_instance_);
}
inline ::google::actions::sdk::v2::conversation::Collection* Content::mutable_collection() {
  if (!has_collection()) {
    clear_content();
    set_has_collection();
    content_.collection_ = CreateMaybeMessage< ::google::actions::sdk::v2::conversation::Collection >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:google.actions.sdk.v2.conversation.Content.collection)
  return content_.collection_;
}

// .google.actions.sdk.v2.conversation.List list = 7;
inline bool Content::has_list() const {
  return content_case() == kList;
}
inline void Content::set_has_list() {
  _oneof_case_[0] = kList;
}
inline ::google::actions::sdk::v2::conversation::List* Content::release_list() {
  // @@protoc_insertion_point(field_release:google.actions.sdk.v2.conversation.Content.list)
  if (has_list()) {
    clear_has_content();
      ::google::actions::sdk::v2::conversation::List* temp = content_.list_;
    content_.list_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::google::actions::sdk::v2::conversation::List& Content::list() const {
  // @@protoc_insertion_point(field_get:google.actions.sdk.v2.conversation.Content.list)
  return has_list()
      ? *content_.list_
      : *reinterpret_cast< ::google::actions::sdk::v2::conversation::List*>(&::google::actions::sdk::v2::conversation::_List_default_instance_);
}
inline ::google::actions::sdk::v2::conversation::List* Content::mutable_list() {
  if (!has_list()) {
    clear_content();
    set_has_list();
    content_.list_ = CreateMaybeMessage< ::google::actions::sdk::v2::conversation::List >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:google.actions.sdk.v2.conversation.Content.list)
  return content_.list_;
}

inline bool Content::has_content() const {
  return content_case() != CONTENT_NOT_SET;
}
inline void Content::clear_has_content() {
  _oneof_case_[0] = CONTENT_NOT_SET;
}
inline Content::ContentCase Content::content_case() const {
  return Content::ContentCase(_oneof_case_[0]);
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
#endif  // PROTOBUF_INCLUDED_google_2factions_2fsdk_2fv2_2fconversation_2fprompt_2fcontent_2fcontent_2eproto
