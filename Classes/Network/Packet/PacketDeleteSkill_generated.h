// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_PACKETDELETESKILL_PACKETS_H_
#define FLATBUFFERS_GENERATED_PACKETDELETESKILL_PACKETS_H_

#include "flatbuffers/flatbuffers.h"

namespace packets {

struct PacketDeleteSkill;

struct PacketDeleteSkill FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ID = 4
  };
  uint32_t id() const { return GetField<uint32_t>(VT_ID, 0); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_ID) &&
           verifier.EndTable();
  }
};

struct PacketDeleteSkillBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(uint32_t id) { fbb_.AddElement<uint32_t>(PacketDeleteSkill::VT_ID, id, 0); }
  PacketDeleteSkillBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  PacketDeleteSkillBuilder &operator=(const PacketDeleteSkillBuilder &);
  flatbuffers::Offset<PacketDeleteSkill> Finish() {
    auto o = flatbuffers::Offset<PacketDeleteSkill>(fbb_.EndTable(start_, 1));
    return o;
  }
};

inline flatbuffers::Offset<PacketDeleteSkill> CreatePacketDeleteSkill(flatbuffers::FlatBufferBuilder &_fbb,
   uint32_t id = 0) {
  PacketDeleteSkillBuilder builder_(_fbb);
  builder_.add_id(id);
  return builder_.Finish();
}

inline const packets::PacketDeleteSkill *GetPacketDeleteSkill(const void *buf) { return flatbuffers::GetRoot<packets::PacketDeleteSkill>(buf); }

inline bool VerifyPacketDeleteSkillBuffer(flatbuffers::Verifier &verifier) { return verifier.VerifyBuffer<packets::PacketDeleteSkill>(); }

inline void FinishPacketDeleteSkillBuffer(flatbuffers::FlatBufferBuilder &fbb, flatbuffers::Offset<packets::PacketDeleteSkill> root) { fbb.Finish(root); }

}  // namespace packets

#endif  // FLATBUFFERS_GENERATED_PACKETDELETESKILL_PACKETS_H_