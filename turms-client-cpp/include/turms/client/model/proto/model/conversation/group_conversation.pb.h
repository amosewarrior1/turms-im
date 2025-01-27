// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model/conversation/group_conversation.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_model_2fconversation_2fgroup_5fconversation_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_model_2fconversation_2fgroup_5fconversation_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4024000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4024000 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/message_lite.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/map.h"  // IWYU pragma: export
#include "google/protobuf/map_entry_lite.h"
#include "google/protobuf/map_field_lite.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_model_2fconversation_2fgroup_5fconversation_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_model_2fconversation_2fgroup_5fconversation_2eproto {
  static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class GroupConversation;
struct GroupConversationDefaultTypeInternal;
extern GroupConversationDefaultTypeInternal _GroupConversation_default_instance_;
class GroupConversation_MemberIdToReadDateEntry_DoNotUse;
struct GroupConversation_MemberIdToReadDateEntry_DoNotUseDefaultTypeInternal;
extern GroupConversation_MemberIdToReadDateEntry_DoNotUseDefaultTypeInternal _GroupConversation_MemberIdToReadDateEntry_DoNotUse_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace turms {
namespace client {
namespace model {
namespace proto {

// ===================================================================


// -------------------------------------------------------------------

class GroupConversation_MemberIdToReadDateEntry_DoNotUse final : public ::google::protobuf::internal::MapEntryLite<GroupConversation_MemberIdToReadDateEntry_DoNotUse, 
    ::int64_t, ::int64_t,
    ::google::protobuf::internal::WireFormatLite::TYPE_INT64,
    ::google::protobuf::internal::WireFormatLite::TYPE_INT64> {
public:
  typedef ::google::protobuf::internal::MapEntryLite<GroupConversation_MemberIdToReadDateEntry_DoNotUse, 
    ::int64_t, ::int64_t,
    ::google::protobuf::internal::WireFormatLite::TYPE_INT64,
    ::google::protobuf::internal::WireFormatLite::TYPE_INT64> SuperType;
  GroupConversation_MemberIdToReadDateEntry_DoNotUse();
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR GroupConversation_MemberIdToReadDateEntry_DoNotUse(
      ::google::protobuf::internal::ConstantInitialized);
  explicit GroupConversation_MemberIdToReadDateEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const GroupConversation_MemberIdToReadDateEntry_DoNotUse& other);
  static const GroupConversation_MemberIdToReadDateEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const GroupConversation_MemberIdToReadDateEntry_DoNotUse*>(&_GroupConversation_MemberIdToReadDateEntry_DoNotUse_default_instance_); }
  static bool ValidateKey(void*) { return true; }
  static bool ValidateValue(void*) { return true; }
  friend struct ::TableStruct_model_2fconversation_2fgroup_5fconversation_2eproto;
};
// -------------------------------------------------------------------

class GroupConversation final :
    public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:turms.client.model.proto.GroupConversation) */ {
 public:
  inline GroupConversation() : GroupConversation(nullptr) {}
  ~GroupConversation() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR GroupConversation(::google::protobuf::internal::ConstantInitialized);

  GroupConversation(const GroupConversation& from);
  GroupConversation(GroupConversation&& from) noexcept
    : GroupConversation() {
    *this = ::std::move(from);
  }

  inline GroupConversation& operator=(const GroupConversation& from) {
    CopyFrom(from);
    return *this;
  }
  inline GroupConversation& operator=(GroupConversation&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString);
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<std::string>();
  }

  static const GroupConversation& default_instance() {
    return *internal_default_instance();
  }
  static inline const GroupConversation* internal_default_instance() {
    return reinterpret_cast<const GroupConversation*>(
               &_GroupConversation_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(GroupConversation& a, GroupConversation& b) {
    a.Swap(&b);
  }
  inline void Swap(GroupConversation* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GroupConversation* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GroupConversation* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GroupConversation>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)  final;
  void CopyFrom(const GroupConversation& from);
  void MergeFrom(const GroupConversation& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(GroupConversation* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "turms.client.model.proto.GroupConversation";
  }
  protected:
  explicit GroupConversation(::google::protobuf::Arena* arena);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  enum : int {
    kMemberIdToReadDateFieldNumber = 2,
    kGroupIdFieldNumber = 1,
  };
  // map<int64, int64> member_id_to_read_date = 2;
  int member_id_to_read_date_size() const;
  private:
  int _internal_member_id_to_read_date_size() const;

  public:
  void clear_member_id_to_read_date() ;
  const ::google::protobuf::Map<::int64_t, ::int64_t>& member_id_to_read_date() const;
  ::google::protobuf::Map<::int64_t, ::int64_t>* mutable_member_id_to_read_date();

  private:
  const ::google::protobuf::Map<::int64_t, ::int64_t>& _internal_member_id_to_read_date() const;
  ::google::protobuf::Map<::int64_t, ::int64_t>* _internal_mutable_member_id_to_read_date();

  public:
  // int64 group_id = 1;
  void clear_group_id() ;
  ::int64_t group_id() const;
  void set_group_id(::int64_t value);

  private:
  ::int64_t _internal_group_id() const;
  void _internal_set_group_id(::int64_t value);

  public:
  // @@protoc_insertion_point(class_scope:turms.client.model.proto.GroupConversation)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<0, 2, 1, 0, 2> _table_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::google::protobuf::internal::MapFieldLite<GroupConversation_MemberIdToReadDateEntry_DoNotUse, ::int64_t, ::int64_t,
                      ::google::protobuf::internal::WireFormatLite::TYPE_INT64,
                      ::google::protobuf::internal::WireFormatLite::TYPE_INT64>
        member_id_to_read_date_;
    ::int64_t group_id_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_model_2fconversation_2fgroup_5fconversation_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// GroupConversation

// int64 group_id = 1;
inline void GroupConversation::clear_group_id() {
  _impl_.group_id_ = ::int64_t{0};
}
inline ::int64_t GroupConversation::group_id() const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.GroupConversation.group_id)
  return _internal_group_id();
}
inline void GroupConversation::set_group_id(::int64_t value) {
  _internal_set_group_id(value);
  // @@protoc_insertion_point(field_set:turms.client.model.proto.GroupConversation.group_id)
}
inline ::int64_t GroupConversation::_internal_group_id() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.group_id_;
}
inline void GroupConversation::_internal_set_group_id(::int64_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.group_id_ = value;
}

// map<int64, int64> member_id_to_read_date = 2;
inline int GroupConversation::_internal_member_id_to_read_date_size() const {
  return _internal_member_id_to_read_date().size();
}
inline int GroupConversation::member_id_to_read_date_size() const {
  return _internal_member_id_to_read_date_size();
}
inline void GroupConversation::clear_member_id_to_read_date() {
  _impl_.member_id_to_read_date_.Clear();
}
inline const ::google::protobuf::Map<::int64_t, ::int64_t>& GroupConversation::_internal_member_id_to_read_date() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.member_id_to_read_date_.GetMap();
}
inline const ::google::protobuf::Map<::int64_t, ::int64_t>& GroupConversation::member_id_to_read_date() const {
  // @@protoc_insertion_point(field_map:turms.client.model.proto.GroupConversation.member_id_to_read_date)
  return _internal_member_id_to_read_date();
}
inline ::google::protobuf::Map<::int64_t, ::int64_t>* GroupConversation::_internal_mutable_member_id_to_read_date() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  return _impl_.member_id_to_read_date_.MutableMap();
}
inline ::google::protobuf::Map<::int64_t, ::int64_t>* GroupConversation::mutable_member_id_to_read_date() {
  // @@protoc_insertion_point(field_mutable_map:turms.client.model.proto.GroupConversation.member_id_to_read_date)
  return _internal_mutable_member_id_to_read_date();
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_model_2fconversation_2fgroup_5fconversation_2eproto_2epb_2eh
