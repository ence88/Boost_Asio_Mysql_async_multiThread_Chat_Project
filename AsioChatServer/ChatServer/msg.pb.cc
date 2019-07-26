// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "msg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Msg {

namespace {

const ::google::protobuf::Descriptor* LoginReq_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LoginReq_reflection_ = NULL;
const ::google::protobuf::Descriptor* EnterRoomReq_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  EnterRoomReq_reflection_ = NULL;
const ::google::protobuf::Descriptor* ChatReq_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ChatReq_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* MessageId_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_msg_2eproto() {
  protobuf_AddDesc_msg_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "msg.proto");
  GOOGLE_CHECK(file != NULL);
  LoginReq_descriptor_ = file->message_type(0);
  static const int LoginReq_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginReq, id_),
  };
  LoginReq_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      LoginReq_descriptor_,
      LoginReq::default_instance_,
      LoginReq_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginReq, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginReq, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(LoginReq));
  EnterRoomReq_descriptor_ = file->message_type(1);
  static const int EnterRoomReq_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EnterRoomReq, roomid_),
  };
  EnterRoomReq_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      EnterRoomReq_descriptor_,
      EnterRoomReq::default_instance_,
      EnterRoomReq_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EnterRoomReq, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EnterRoomReq, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(EnterRoomReq));
  ChatReq_descriptor_ = file->message_type(2);
  static const int ChatReq_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChatReq, msg_),
  };
  ChatReq_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ChatReq_descriptor_,
      ChatReq::default_instance_,
      ChatReq_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChatReq, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChatReq, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ChatReq));
  MessageId_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_msg_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    LoginReq_descriptor_, &LoginReq::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    EnterRoomReq_descriptor_, &EnterRoomReq::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ChatReq_descriptor_, &ChatReq::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_msg_2eproto() {
  delete LoginReq::default_instance_;
  delete LoginReq_reflection_;
  delete EnterRoomReq::default_instance_;
  delete EnterRoomReq_reflection_;
  delete ChatReq::default_instance_;
  delete ChatReq_reflection_;
}

void protobuf_AddDesc_msg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\tmsg.proto\022\003Msg\"\026\n\010LoginReq\022\n\n\002id\030\001 \002(\t"
    "\"\036\n\014EnterRoomReq\022\016\n\006roomId\030\001 \001(\005\"\026\n\007Chat"
    "Req\022\013\n\003msg\030\001 \001(\t*/\n\tMessageId\022\t\n\005Login\020\001"
    "\022\r\n\tEnterRoom\020\002\022\010\n\004Chat\020\003", 145);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "msg.proto", &protobuf_RegisterTypes);
  LoginReq::default_instance_ = new LoginReq();
  EnterRoomReq::default_instance_ = new EnterRoomReq();
  ChatReq::default_instance_ = new ChatReq();
  LoginReq::default_instance_->InitAsDefaultInstance();
  EnterRoomReq::default_instance_->InitAsDefaultInstance();
  ChatReq::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_msg_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_msg_2eproto {
  StaticDescriptorInitializer_msg_2eproto() {
    protobuf_AddDesc_msg_2eproto();
  }
} static_descriptor_initializer_msg_2eproto_;

const ::google::protobuf::EnumDescriptor* MessageId_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MessageId_descriptor_;
}
bool MessageId_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int LoginReq::kIdFieldNumber;
#endif  // !_MSC_VER

LoginReq::LoginReq()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void LoginReq::InitAsDefaultInstance() {
}

LoginReq::LoginReq(const LoginReq& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void LoginReq::SharedCtor() {
  _cached_size_ = 0;
  id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LoginReq::~LoginReq() {
  SharedDtor();
}

void LoginReq::SharedDtor() {
  if (id_ != &::google::protobuf::internal::kEmptyString) {
    delete id_;
  }
  if (this != default_instance_) {
  }
}

void LoginReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LoginReq::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LoginReq_descriptor_;
}

const LoginReq& LoginReq::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_msg_2eproto();  return *default_instance_;
}

LoginReq* LoginReq::default_instance_ = NULL;

LoginReq* LoginReq::New() const {
  return new LoginReq;
}

void LoginReq::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_id()) {
      if (id_ != &::google::protobuf::internal::kEmptyString) {
        id_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool LoginReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_id()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->id().data(), this->id().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void LoginReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->id().data(), this->id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->id(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* LoginReq::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->id().data(), this->id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->id(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int LoginReq::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->id());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LoginReq::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const LoginReq* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const LoginReq*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void LoginReq::MergeFrom(const LoginReq& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void LoginReq::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LoginReq::CopyFrom(const LoginReq& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoginReq::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  return true;
}

void LoginReq::Swap(LoginReq* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata LoginReq::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LoginReq_descriptor_;
  metadata.reflection = LoginReq_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int EnterRoomReq::kRoomIdFieldNumber;
#endif  // !_MSC_VER

EnterRoomReq::EnterRoomReq()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void EnterRoomReq::InitAsDefaultInstance() {
}

EnterRoomReq::EnterRoomReq(const EnterRoomReq& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void EnterRoomReq::SharedCtor() {
  _cached_size_ = 0;
  roomid_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

EnterRoomReq::~EnterRoomReq() {
  SharedDtor();
}

void EnterRoomReq::SharedDtor() {
  if (this != default_instance_) {
  }
}

void EnterRoomReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* EnterRoomReq::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EnterRoomReq_descriptor_;
}

const EnterRoomReq& EnterRoomReq::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_msg_2eproto();  return *default_instance_;
}

EnterRoomReq* EnterRoomReq::default_instance_ = NULL;

EnterRoomReq* EnterRoomReq::New() const {
  return new EnterRoomReq;
}

void EnterRoomReq::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    roomid_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool EnterRoomReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 roomId = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &roomid_)));
          set_has_roomid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void EnterRoomReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 roomId = 1;
  if (has_roomid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->roomid(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* EnterRoomReq::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 roomId = 1;
  if (has_roomid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->roomid(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int EnterRoomReq::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 roomId = 1;
    if (has_roomid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->roomid());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EnterRoomReq::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const EnterRoomReq* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const EnterRoomReq*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void EnterRoomReq::MergeFrom(const EnterRoomReq& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_roomid()) {
      set_roomid(from.roomid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void EnterRoomReq::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EnterRoomReq::CopyFrom(const EnterRoomReq& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EnterRoomReq::IsInitialized() const {
  
  return true;
}

void EnterRoomReq::Swap(EnterRoomReq* other) {
  if (other != this) {
    std::swap(roomid_, other->roomid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata EnterRoomReq::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = EnterRoomReq_descriptor_;
  metadata.reflection = EnterRoomReq_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int ChatReq::kMsgFieldNumber;
#endif  // !_MSC_VER

ChatReq::ChatReq()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ChatReq::InitAsDefaultInstance() {
}

ChatReq::ChatReq(const ChatReq& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ChatReq::SharedCtor() {
  _cached_size_ = 0;
  msg_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ChatReq::~ChatReq() {
  SharedDtor();
}

void ChatReq::SharedDtor() {
  if (msg_ != &::google::protobuf::internal::kEmptyString) {
    delete msg_;
  }
  if (this != default_instance_) {
  }
}

void ChatReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ChatReq::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ChatReq_descriptor_;
}

const ChatReq& ChatReq::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_msg_2eproto();  return *default_instance_;
}

ChatReq* ChatReq::default_instance_ = NULL;

ChatReq* ChatReq::New() const {
  return new ChatReq;
}

void ChatReq::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_msg()) {
      if (msg_ != &::google::protobuf::internal::kEmptyString) {
        msg_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ChatReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string msg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_msg()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->msg().data(), this->msg().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ChatReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string msg = 1;
  if (has_msg()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->msg().data(), this->msg().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->msg(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ChatReq::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string msg = 1;
  if (has_msg()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->msg().data(), this->msg().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->msg(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ChatReq::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string msg = 1;
    if (has_msg()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->msg());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ChatReq::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ChatReq* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ChatReq*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ChatReq::MergeFrom(const ChatReq& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msg()) {
      set_msg(from.msg());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ChatReq::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ChatReq::CopyFrom(const ChatReq& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChatReq::IsInitialized() const {
  
  return true;
}

void ChatReq::Swap(ChatReq* other) {
  if (other != this) {
    std::swap(msg_, other->msg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ChatReq::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ChatReq_descriptor_;
  metadata.reflection = ChatReq_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Msg

// @@protoc_insertion_point(global_scope)
