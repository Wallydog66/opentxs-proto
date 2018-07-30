// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ChildCredentialParameters.proto

#include "ChildCredentialParameters.pb.h"

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
class ChildCredentialParametersDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ChildCredentialParameters>
      _instance;
} _ChildCredentialParameters_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace protobuf_ChildCredentialParameters_2eproto {
void InitDefaultsChildCredentialParametersImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::opentxs::proto::_ChildCredentialParameters_default_instance_;
    new (ptr) ::opentxs::proto::ChildCredentialParameters();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::opentxs::proto::ChildCredentialParameters::InitAsDefaultInstance();
}

void InitDefaultsChildCredentialParameters() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsChildCredentialParametersImpl);
}

}  // namespace protobuf_ChildCredentialParameters_2eproto
namespace opentxs {
namespace proto {

// ===================================================================

void ChildCredentialParameters::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ChildCredentialParameters::kVersionFieldNumber;
const int ChildCredentialParameters::kMasterIDFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ChildCredentialParameters::ChildCredentialParameters()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_ChildCredentialParameters_2eproto::InitDefaultsChildCredentialParameters();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:opentxs.proto.ChildCredentialParameters)
}
ChildCredentialParameters::ChildCredentialParameters(const ChildCredentialParameters& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  masterid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_masterid()) {
    masterid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.masterid_);
  }
  version_ = from.version_;
  // @@protoc_insertion_point(copy_constructor:opentxs.proto.ChildCredentialParameters)
}

void ChildCredentialParameters::SharedCtor() {
  _cached_size_ = 0;
  masterid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_ = 0u;
}

ChildCredentialParameters::~ChildCredentialParameters() {
  // @@protoc_insertion_point(destructor:opentxs.proto.ChildCredentialParameters)
  SharedDtor();
}

void ChildCredentialParameters::SharedDtor() {
  masterid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ChildCredentialParameters::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ChildCredentialParameters& ChildCredentialParameters::default_instance() {
  ::protobuf_ChildCredentialParameters_2eproto::InitDefaultsChildCredentialParameters();
  return *internal_default_instance();
}

ChildCredentialParameters* ChildCredentialParameters::New(::google::protobuf::Arena* arena) const {
  ChildCredentialParameters* n = new ChildCredentialParameters;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ChildCredentialParameters::Clear() {
// @@protoc_insertion_point(message_clear_start:opentxs.proto.ChildCredentialParameters)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(!masterid_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*masterid_.UnsafeRawStringPointer())->clear();
  }
  version_ = 0u;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ChildCredentialParameters::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:opentxs.proto.ChildCredentialParameters)
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

      // optional string masterID = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_masterid()));
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
  // @@protoc_insertion_point(parse_success:opentxs.proto.ChildCredentialParameters)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:opentxs.proto.ChildCredentialParameters)
  return false;
#undef DO_
}

void ChildCredentialParameters::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:opentxs.proto.ChildCredentialParameters)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 version = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->version(), output);
  }

  // optional string masterID = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->masterid(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:opentxs.proto.ChildCredentialParameters)
}

size_t ChildCredentialParameters::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:opentxs.proto.ChildCredentialParameters)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  if (_has_bits_[0 / 32] & 3u) {
    // optional string masterID = 2;
    if (has_masterid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->masterid());
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

void ChildCredentialParameters::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ChildCredentialParameters*>(&from));
}

void ChildCredentialParameters::MergeFrom(const ChildCredentialParameters& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:opentxs.proto.ChildCredentialParameters)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_masterid();
      masterid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.masterid_);
    }
    if (cached_has_bits & 0x00000002u) {
      version_ = from.version_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void ChildCredentialParameters::CopyFrom(const ChildCredentialParameters& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:opentxs.proto.ChildCredentialParameters)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChildCredentialParameters::IsInitialized() const {
  return true;
}

void ChildCredentialParameters::Swap(ChildCredentialParameters* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ChildCredentialParameters::InternalSwap(ChildCredentialParameters* other) {
  using std::swap;
  masterid_.Swap(&other->masterid_);
  swap(version_, other->version_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string ChildCredentialParameters::GetTypeName() const {
  return "opentxs.proto.ChildCredentialParameters";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)