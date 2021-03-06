// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: OutBailment.proto

#include "OutBailment.pb.h"

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
class OutBailmentDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<OutBailment>
      _instance;
} _OutBailment_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace protobuf_OutBailment_2eproto {
void InitDefaultsOutBailmentImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::opentxs::proto::_OutBailment_default_instance_;
    new (ptr) ::opentxs::proto::OutBailment();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::opentxs::proto::OutBailment::InitAsDefaultInstance();
}

void InitDefaultsOutBailment() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsOutBailmentImpl);
}

}  // namespace protobuf_OutBailment_2eproto
namespace opentxs {
namespace proto {

// ===================================================================

void OutBailment::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int OutBailment::kVersionFieldNumber;
const int OutBailment::kUnitIDFieldNumber;
const int OutBailment::kServerIDFieldNumber;
const int OutBailment::kAmountFieldNumber;
const int OutBailment::kInstructionsFieldNumber;
const int OutBailment::kPaymentFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

OutBailment::OutBailment()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_OutBailment_2eproto::InitDefaultsOutBailment();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:opentxs.proto.OutBailment)
}
OutBailment::OutBailment(const OutBailment& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      payment_(from.payment_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  unitid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_unitid()) {
    unitid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.unitid_);
  }
  serverid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_serverid()) {
    serverid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.serverid_);
  }
  instructions_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_instructions()) {
    instructions_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.instructions_);
  }
  ::memcpy(&amount_, &from.amount_,
    static_cast<size_t>(reinterpret_cast<char*>(&version_) -
    reinterpret_cast<char*>(&amount_)) + sizeof(version_));
  // @@protoc_insertion_point(copy_constructor:opentxs.proto.OutBailment)
}

void OutBailment::SharedCtor() {
  _cached_size_ = 0;
  unitid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  serverid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  instructions_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&amount_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&version_) -
      reinterpret_cast<char*>(&amount_)) + sizeof(version_));
}

OutBailment::~OutBailment() {
  // @@protoc_insertion_point(destructor:opentxs.proto.OutBailment)
  SharedDtor();
}

void OutBailment::SharedDtor() {
  unitid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  serverid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  instructions_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void OutBailment::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const OutBailment& OutBailment::default_instance() {
  ::protobuf_OutBailment_2eproto::InitDefaultsOutBailment();
  return *internal_default_instance();
}

OutBailment* OutBailment::New(::google::protobuf::Arena* arena) const {
  OutBailment* n = new OutBailment;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void OutBailment::Clear() {
// @@protoc_insertion_point(message_clear_start:opentxs.proto.OutBailment)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  payment_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(!unitid_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*unitid_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(!serverid_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*serverid_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(!instructions_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*instructions_.UnsafeRawStringPointer())->clear();
    }
  }
  if (cached_has_bits & 24u) {
    ::memset(&amount_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&version_) -
        reinterpret_cast<char*>(&amount_)) + sizeof(version_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool OutBailment::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:opentxs.proto.OutBailment)
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

      // optional string unitID = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_unitid()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string serverID = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_serverid()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint64 amount = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          set_has_amount();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &amount_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string instructions = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_instructions()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string payment = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_payment()));
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
  // @@protoc_insertion_point(parse_success:opentxs.proto.OutBailment)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:opentxs.proto.OutBailment)
  return false;
#undef DO_
}

void OutBailment::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:opentxs.proto.OutBailment)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 version = 1;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->version(), output);
  }

  // optional string unitID = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->unitid(), output);
  }

  // optional string serverID = 3;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->serverid(), output);
  }

  // optional uint64 amount = 4;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(4, this->amount(), output);
  }

  // optional string instructions = 5;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->instructions(), output);
  }

  // repeated string payment = 6;
  for (int i = 0, n = this->payment_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      6, this->payment(i), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:opentxs.proto.OutBailment)
}

size_t OutBailment::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:opentxs.proto.OutBailment)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  // repeated string payment = 6;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->payment_size());
  for (int i = 0, n = this->payment_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->payment(i));
  }

  if (_has_bits_[0 / 32] & 31u) {
    // optional string unitID = 2;
    if (has_unitid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->unitid());
    }

    // optional string serverID = 3;
    if (has_serverid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->serverid());
    }

    // optional string instructions = 5;
    if (has_instructions()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->instructions());
    }

    // optional uint64 amount = 4;
    if (has_amount()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->amount());
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

void OutBailment::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const OutBailment*>(&from));
}

void OutBailment::MergeFrom(const OutBailment& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:opentxs.proto.OutBailment)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  payment_.MergeFrom(from.payment_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 31u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_unitid();
      unitid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.unitid_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_serverid();
      serverid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.serverid_);
    }
    if (cached_has_bits & 0x00000004u) {
      set_has_instructions();
      instructions_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.instructions_);
    }
    if (cached_has_bits & 0x00000008u) {
      amount_ = from.amount_;
    }
    if (cached_has_bits & 0x00000010u) {
      version_ = from.version_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void OutBailment::CopyFrom(const OutBailment& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:opentxs.proto.OutBailment)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OutBailment::IsInitialized() const {
  return true;
}

void OutBailment::Swap(OutBailment* other) {
  if (other == this) return;
  InternalSwap(other);
}
void OutBailment::InternalSwap(OutBailment* other) {
  using std::swap;
  payment_.InternalSwap(&other->payment_);
  unitid_.Swap(&other->unitid_);
  serverid_.Swap(&other->serverid_);
  instructions_.Swap(&other->instructions_);
  swap(amount_, other->amount_);
  swap(version_, other->version_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string OutBailment::GetTypeName() const {
  return "opentxs.proto.OutBailment";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)
