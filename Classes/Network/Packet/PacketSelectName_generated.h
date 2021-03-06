// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_PACKETSELECTNAME_PACKETS_H_
#define FLATBUFFERS_GENERATED_PACKETSELECTNAME_PACKETS_H_

#include "flatbuffers/flatbuffers.h"

namespace packets {

struct PacketSelectName;

struct PacketSelectName FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ID = 4,
    VT_CLIENT_NAME = 6
  };
  uint32_t id() const { return GetField<uint32_t>(VT_ID, 0); }
  const flatbuffers::String *client_name() const { return GetPointer<const flatbuffers::String *>(VT_CLIENT_NAME); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_ID) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_CLIENT_NAME) &&
           verifier.Verify(client_name()) &&
           verifier.EndTable();
  }
};

struct PacketSelectNameBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(uint32_t id) { fbb_.AddElement<uint32_t>(PacketSelectName::VT_ID, id, 0); }
  void add_client_name(flatbuffers::Offset<flatbuffers::String> client_name) { fbb_.AddOffset(PacketSelectName::VT_CLIENT_NAME, client_name); }
  PacketSelectNameBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  PacketSelectNameBuilder &operator=(const PacketSelectNameBuilder &);
  flatbuffers::Offset<PacketSelectName> Finish() {
    auto o = flatbuffers::Offset<PacketSelectName>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<PacketSelectName> CreatePacketSelectName(flatbuffers::FlatBufferBuilder &_fbb,
   uint32_t id = 0,
   flatbuffers::Offset<flatbuffers::String> client_name = 0) {
  PacketSelectNameBuilder builder_(_fbb);
  builder_.add_client_name(client_name);
  builder_.add_id(id);
  return builder_.Finish();
}

inline const packets::PacketSelectName *GetPacketSelectName(const void *buf) { return flatbuffers::GetRoot<packets::PacketSelectName>(buf); }

inline bool VerifyPacketSelectNameBuffer(flatbuffers::Verifier &verifier) { return verifier.VerifyBuffer<packets::PacketSelectName>(); }

inline void FinishPacketSelectNameBuffer(flatbuffers::FlatBufferBuilder &fbb, flatbuffers::Offset<packets::PacketSelectName> root) { fbb.Finish(root); }

}  // namespace packets

#endif  // FLATBUFFERS_GENERATED_PACKETSELECTNAME_PACKETS_H_
