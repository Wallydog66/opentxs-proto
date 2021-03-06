// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: StorageThread.proto

#include "StorageThread.pb.h"

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
class StorageThreadDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<StorageThread>
      _instance;
} _StorageThread_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace protobuf_StorageThread_2eproto {
void InitDefaultsStorageThreadImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_StorageThreadItem_2eproto::InitDefaultsStorageThreadItem();
  {
    void* ptr = &::opentxs::proto::_StorageThread_default_instance_;
    new (ptr) ::opentxs::proto::StorageThread();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::opentxs::proto::StorageThread::InitAsDefaultInstance();
}

void InitDefaultsStorageThread() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsStorageThreadImpl);
}

}  // namespace protobuf_StorageThread_2eproto
namespace opentxs {
namespace proto {

// ===================================================================

void StorageThread::InitAsDefaultInstance() {
}
void StorageThread::clear_item() {
  item_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int StorageThread::kVersionFieldNumber;
const int StorageThread::kIdFieldNumber;
const int StorageThread::kParticipantFieldNumber;
const int StorageThread::kItemFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

StorageThread::StorageThread()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_StorageThread_2eproto::InitDefaultsStorageThread();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:opentxs.proto.StorageThread)
}
StorageThread::StorageThread(const StorageThread& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      participant_(from.participant_),
      item_(from.item_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_id()) {
    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  version_ = from.version_;
  // @@protoc_insertion_point(copy_constructor:opentxs.proto.StorageThread)
}

void StorageThread::SharedCtor() {
  _cached_size_ = 0;
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_ = 0u;
}

StorageThread::~StorageThread() {
  // @@protoc_insertion_point(destructor:opentxs.proto.StorageThread)
  SharedDtor();
}

void StorageThread::SharedDtor() {
  id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void StorageThread::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const StorageThread& StorageThread::default_instance() {
  ::protobuf_StorageThread_2eproto::InitDefaultsStorageThread();
  return *internal_default_instance();
}

StorageThread* StorageThread::New(::google::protobuf::Arena* arena) const {
  StorageThread* n = new StorageThread;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void StorageThread::Clear() {
// @@protoc_insertion_point(message_clear_start:opentxs.proto.StorageThread)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  participant_.Clear();
  item_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(!id_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*id_.UnsafeRawStringPointer())->clear();
  }
  version_ = 0u;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool StorageThread::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:opentxs.proto.StorageThread)
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

      // optional string id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_id()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string participant = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_participant()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .opentxs.proto.StorageThreadItem item = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_item()));
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
  // @@protoc_insertion_point(parse_success:opentxs.proto.StorageThread)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:opentxs.proto.StorageThread)
  return false;
#undef DO_
}

void StorageThread::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:opentxs.proto.StorageThread)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 version = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->version(), output);
  }

  // optional string id = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->id(), output);
  }

  // repeated string participant = 3;
  for (int i = 0, n = this->participant_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->participant(i), output);
  }

  // repeated .opentxs.proto.StorageThreadItem item = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->item_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      4, this->item(static_cast<int>(i)), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:opentxs.proto.StorageThread)
}

size_t StorageThread::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:opentxs.proto.StorageThread)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  // repeated string participant = 3;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->participant_size());
  for (int i = 0, n = this->participant_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->participant(i));
  }

  // repeated .opentxs.proto.StorageThreadItem item = 4;
  {
    unsigned int count = static_cast<unsigned int>(this->item_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->item(static_cast<int>(i)));
    }
  }

  if (_has_bits_[0 / 32] & 3u) {
    // optional string id = 2;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->id());
    }

    // optional uint32 version = 1;
    if (has_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->version());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void StorageThread::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const StorageThread*>(&from));
}

void StorageThread::MergeFrom(const StorageThread& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:opentxs.proto.StorageThread)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  participant_.MergeFrom(from.participant_);
  item_.MergeFrom(from.item_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_id();
      id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
    }
    if (cached_has_bits & 0x00000002u) {
      version_ = from.version_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void StorageThread::CopyFrom(const StorageThread& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:opentxs.proto.StorageThread)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StorageThread::IsInitialized() const {
  return true;
}

void StorageThread::Swap(StorageThread* other) {
  if (other == this) return;
  InternalSwap(other);
}
void StorageThread::InternalSwap(StorageThread* other) {
  using std::swap;
  participant_.InternalSwap(&other->participant_);
  item_.InternalSwap(&other->item_);
  id_.Swap(&other->id_);
  swap(version_, other->version_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string StorageThread::GetTypeName() const {
  return "opentxs.proto.StorageThread";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)
