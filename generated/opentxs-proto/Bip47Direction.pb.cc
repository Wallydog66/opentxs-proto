// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Bip47Direction.proto

#include "Bip47Direction.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace opentxs {
namespace proto {
class Bip47DirectionDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Bip47Direction>
      _instance;
} _Bip47Direction_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace protobuf_Bip47Direction_2eproto {
void InitDefaultsBip47DirectionImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_Bip47Address_2eproto::InitDefaultsBip47Address();
  {
    void* ptr = &::opentxs::proto::_Bip47Direction_default_instance_;
    new (ptr) ::opentxs::proto::Bip47Direction();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::opentxs::proto::Bip47Direction::InitAsDefaultInstance();
}

void InitDefaultsBip47Direction() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsBip47DirectionImpl);
}

}  // namespace protobuf_Bip47Direction_2eproto
namespace opentxs {
namespace proto {

// ===================================================================

void Bip47Direction::InitAsDefaultInstance() {
}
void Bip47Direction::clear_address() {
  address_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Bip47Direction::kVersionFieldNumber;
const int Bip47Direction::kNotificationFieldNumber;
const int Bip47Direction::kAddressFieldNumber;
const int Bip47Direction::kIndexFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Bip47Direction::Bip47Direction()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_Bip47Direction_2eproto::InitDefaultsBip47Direction();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:opentxs.proto.Bip47Direction)
}
Bip47Direction::Bip47Direction(const Bip47Direction& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      notification_(from.notification_),
      address_(from.address_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&version_, &from.version_,
    static_cast<size_t>(reinterpret_cast<char*>(&index_) -
    reinterpret_cast<char*>(&version_)) + sizeof(index_));
  // @@protoc_insertion_point(copy_constructor:opentxs.proto.Bip47Direction)
}

void Bip47Direction::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&version_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&index_) -
      reinterpret_cast<char*>(&version_)) + sizeof(index_));
}

Bip47Direction::~Bip47Direction() {
  // @@protoc_insertion_point(destructor:opentxs.proto.Bip47Direction)
  SharedDtor();
}

void Bip47Direction::SharedDtor() {
}

void Bip47Direction::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const Bip47Direction& Bip47Direction::default_instance() {
  ::protobuf_Bip47Direction_2eproto::InitDefaultsBip47Direction();
  return *internal_default_instance();
}

Bip47Direction* Bip47Direction::New(::google::protobuf::Arena* arena) const {
  Bip47Direction* n = new Bip47Direction;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Bip47Direction::Clear() {
// @@protoc_insertion_point(message_clear_start:opentxs.proto.Bip47Direction)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  notification_.Clear();
  address_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    ::memset(&version_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&index_) -
        reinterpret_cast<char*>(&version_)) + sizeof(index_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Bip47Direction::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:opentxs.proto.Bip47Direction)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 version = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_version();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &version_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string notification = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_notification()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .opentxs.proto.Bip47Address address = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_address()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 index = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          set_has_index();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &index_)));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:opentxs.proto.Bip47Direction)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:opentxs.proto.Bip47Direction)
  return false;
#undef DO_
}

void Bip47Direction::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:opentxs.proto.Bip47Direction)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 version = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->version(), output);
  }

  // repeated string notification = 2;
  for (int i = 0, n = this->notification_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->notification(i), output);
  }

  // repeated .opentxs.proto.Bip47Address address = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->address_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, this->address(static_cast<int>(i)), output);
  }

  // optional uint32 index = 4;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->index(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:opentxs.proto.Bip47Direction)
}

size_t Bip47Direction::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:opentxs.proto.Bip47Direction)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  // repeated string notification = 2;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->notification_size());
  for (int i = 0, n = this->notification_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->notification(i));
  }

  // repeated .opentxs.proto.Bip47Address address = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->address_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->address(static_cast<int>(i)));
    }
  }

  if (_has_bits_[0 / 32] & 3u) {
    // optional uint32 version = 1;
    if (has_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->version());
    }

    // optional uint32 index = 4;
    if (has_index()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->index());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Bip47Direction::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Bip47Direction*>(&from));
}

void Bip47Direction::MergeFrom(const Bip47Direction& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:opentxs.proto.Bip47Direction)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  notification_.MergeFrom(from.notification_);
  address_.MergeFrom(from.address_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      version_ = from.version_;
    }
    if (cached_has_bits & 0x00000002u) {
      index_ = from.index_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Bip47Direction::CopyFrom(const Bip47Direction& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:opentxs.proto.Bip47Direction)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Bip47Direction::IsInitialized() const {
  return true;
}

void Bip47Direction::Swap(Bip47Direction* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Bip47Direction::InternalSwap(Bip47Direction* other) {
  using std::swap;
  notification_.InternalSwap(&other->notification_);
  address_.InternalSwap(&other->address_);
  swap(version_, other->version_);
  swap(index_, other->index_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string Bip47Direction::GetTypeName() const {
  return "opentxs.proto.Bip47Direction";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)
