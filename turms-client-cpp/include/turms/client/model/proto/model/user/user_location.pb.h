// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model/user/user_location.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_model_2fuser_2fuser_5flocation_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_model_2fuser_2fuser_5flocation_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_model_2fuser_2fuser_5flocation_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_model_2fuser_2fuser_5flocation_2eproto {
  static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class UserLocation;
struct UserLocationDefaultTypeInternal;
extern UserLocationDefaultTypeInternal _UserLocation_default_instance_;
class UserLocation_DetailsEntry_DoNotUse;
struct UserLocation_DetailsEntry_DoNotUseDefaultTypeInternal;
extern UserLocation_DetailsEntry_DoNotUseDefaultTypeInternal _UserLocation_DetailsEntry_DoNotUse_default_instance_;
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

class UserLocation_DetailsEntry_DoNotUse final : public ::google::protobuf::internal::MapEntryLite<UserLocation_DetailsEntry_DoNotUse, 
    std::string, std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING> {
public:
  typedef ::google::protobuf::internal::MapEntryLite<UserLocation_DetailsEntry_DoNotUse, 
    std::string, std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING> SuperType;
  UserLocation_DetailsEntry_DoNotUse();
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR UserLocation_DetailsEntry_DoNotUse(
      ::google::protobuf::internal::ConstantInitialized);
  explicit UserLocation_DetailsEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const UserLocation_DetailsEntry_DoNotUse& other);
  static const UserLocation_DetailsEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const UserLocation_DetailsEntry_DoNotUse*>(&_UserLocation_DetailsEntry_DoNotUse_default_instance_); }
  static bool ValidateKey(std::string* s) {
    return ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(s->data(), static_cast<int>(s->size()), ::google::protobuf::internal::WireFormatLite::PARSE, "turms.client.model.proto.UserLocation.DetailsEntry.key");
 }
  static bool ValidateValue(std::string* s) {
    return ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(s->data(), static_cast<int>(s->size()), ::google::protobuf::internal::WireFormatLite::PARSE, "turms.client.model.proto.UserLocation.DetailsEntry.value");
 }
  friend struct ::TableStruct_model_2fuser_2fuser_5flocation_2eproto;
};
// -------------------------------------------------------------------

class UserLocation final :
    public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:turms.client.model.proto.UserLocation) */ {
 public:
  inline UserLocation() : UserLocation(nullptr) {}
  ~UserLocation() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR UserLocation(::google::protobuf::internal::ConstantInitialized);

  UserLocation(const UserLocation& from);
  UserLocation(UserLocation&& from) noexcept
    : UserLocation() {
    *this = ::std::move(from);
  }

  inline UserLocation& operator=(const UserLocation& from) {
    CopyFrom(from);
    return *this;
  }
  inline UserLocation& operator=(UserLocation&& from) noexcept {
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

  static const UserLocation& default_instance() {
    return *internal_default_instance();
  }
  static inline const UserLocation* internal_default_instance() {
    return reinterpret_cast<const UserLocation*>(
               &_UserLocation_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(UserLocation& a, UserLocation& b) {
    a.Swap(&b);
  }
  inline void Swap(UserLocation* other) {
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
  void UnsafeArenaSwap(UserLocation* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  UserLocation* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<UserLocation>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)  final;
  void CopyFrom(const UserLocation& from);
  void MergeFrom(const UserLocation& from);
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
  void InternalSwap(UserLocation* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "turms.client.model.proto.UserLocation";
  }
  protected:
  explicit UserLocation(::google::protobuf::Arena* arena);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  enum : int {
    kDetailsFieldNumber = 4,
    kLatitudeFieldNumber = 1,
    kLongitudeFieldNumber = 2,
    kTimestampFieldNumber = 3,
  };
  // map<string, string> details = 4;
  int details_size() const;
  private:
  int _internal_details_size() const;

  public:
  void clear_details() ;
  const ::google::protobuf::Map<std::string, std::string>& details() const;
  ::google::protobuf::Map<std::string, std::string>* mutable_details();

  private:
  const ::google::protobuf::Map<std::string, std::string>& _internal_details() const;
  ::google::protobuf::Map<std::string, std::string>* _internal_mutable_details();

  public:
  // float latitude = 1;
  void clear_latitude() ;
  float latitude() const;
  void set_latitude(float value);

  private:
  float _internal_latitude() const;
  void _internal_set_latitude(float value);

  public:
  // float longitude = 2;
  void clear_longitude() ;
  float longitude() const;
  void set_longitude(float value);

  private:
  float _internal_longitude() const;
  void _internal_set_longitude(float value);

  public:
  // optional int64 timestamp = 3;
  bool has_timestamp() const;
  void clear_timestamp() ;
  ::int64_t timestamp() const;
  void set_timestamp(::int64_t value);

  private:
  ::int64_t _internal_timestamp() const;
  void _internal_set_timestamp(::int64_t value);

  public:
  // @@protoc_insertion_point(class_scope:turms.client.model.proto.UserLocation)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<2, 4, 1, 53, 2> _table_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::google::protobuf::internal::MapFieldLite<UserLocation_DetailsEntry_DoNotUse, std::string, std::string,
                      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
                      ::google::protobuf::internal::WireFormatLite::TYPE_STRING>
        details_;
    float latitude_;
    float longitude_;
    ::int64_t timestamp_;
    PROTOBUF_TSAN_DECLARE_MEMBER;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_model_2fuser_2fuser_5flocation_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// UserLocation

// float latitude = 1;
inline void UserLocation::clear_latitude() {
  _impl_.latitude_ = 0;
}
inline float UserLocation::latitude() const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.UserLocation.latitude)
  return _internal_latitude();
}
inline void UserLocation::set_latitude(float value) {
  _internal_set_latitude(value);
  // @@protoc_insertion_point(field_set:turms.client.model.proto.UserLocation.latitude)
}
inline float UserLocation::_internal_latitude() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.latitude_;
}
inline void UserLocation::_internal_set_latitude(float value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.latitude_ = value;
}

// float longitude = 2;
inline void UserLocation::clear_longitude() {
  _impl_.longitude_ = 0;
}
inline float UserLocation::longitude() const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.UserLocation.longitude)
  return _internal_longitude();
}
inline void UserLocation::set_longitude(float value) {
  _internal_set_longitude(value);
  // @@protoc_insertion_point(field_set:turms.client.model.proto.UserLocation.longitude)
}
inline float UserLocation::_internal_longitude() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.longitude_;
}
inline void UserLocation::_internal_set_longitude(float value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.longitude_ = value;
}

// optional int64 timestamp = 3;
inline bool UserLocation::has_timestamp() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void UserLocation::clear_timestamp() {
  _impl_.timestamp_ = ::int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::int64_t UserLocation::timestamp() const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.UserLocation.timestamp)
  return _internal_timestamp();
}
inline void UserLocation::set_timestamp(::int64_t value) {
  _internal_set_timestamp(value);
  // @@protoc_insertion_point(field_set:turms.client.model.proto.UserLocation.timestamp)
}
inline ::int64_t UserLocation::_internal_timestamp() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.timestamp_;
}
inline void UserLocation::_internal_set_timestamp(::int64_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.timestamp_ = value;
}

// map<string, string> details = 4;
inline int UserLocation::_internal_details_size() const {
  return _internal_details().size();
}
inline int UserLocation::details_size() const {
  return _internal_details_size();
}
inline void UserLocation::clear_details() {
  _impl_.details_.Clear();
}
inline const ::google::protobuf::Map<std::string, std::string>& UserLocation::_internal_details() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.details_.GetMap();
}
inline const ::google::protobuf::Map<std::string, std::string>& UserLocation::details() const {
  // @@protoc_insertion_point(field_map:turms.client.model.proto.UserLocation.details)
  return _internal_details();
}
inline ::google::protobuf::Map<std::string, std::string>* UserLocation::_internal_mutable_details() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  return _impl_.details_.MutableMap();
}
inline ::google::protobuf::Map<std::string, std::string>* UserLocation::mutable_details() {
  // @@protoc_insertion_point(field_mutable_map:turms.client.model.proto.UserLocation.details)
  return _internal_mutable_details();
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

#endif  // GOOGLE_PROTOBUF_INCLUDED_model_2fuser_2fuser_5flocation_2eproto_2epb_2eh
