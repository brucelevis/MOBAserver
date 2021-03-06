// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_PACKETRENDERCHARACTERSET_PACKETS_H_
#define FLATBUFFERS_GENERATED_PACKETRENDERCHARACTERSET_PACKETS_H_

#include "flatbuffers/flatbuffers.h"

#include "PACKETRenderCharacter_generated.h"

namespace packets {

struct PacketRenderCharacter;

}  // namespace packets

namespace packets {

struct PacketRenderCharacterSet;

struct PacketRenderCharacterSet FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_CHARACTERS = 4
  };
  const flatbuffers::Vector<flatbuffers::Offset<packets::PacketRenderCharacter>> *characters() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<packets::PacketRenderCharacter>> *>(VT_CHARACTERS); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_CHARACTERS) &&
           verifier.Verify(characters()) &&
           verifier.VerifyVectorOfTables(characters()) &&
           verifier.EndTable();
  }
};

struct PacketRenderCharacterSetBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_characters(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<packets::PacketRenderCharacter>>> characters) { fbb_.AddOffset(PacketRenderCharacterSet::VT_CHARACTERS, characters); }
  PacketRenderCharacterSetBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  PacketRenderCharacterSetBuilder &operator=(const PacketRenderCharacterSetBuilder &);
  flatbuffers::Offset<PacketRenderCharacterSet> Finish() {
    auto o = flatbuffers::Offset<PacketRenderCharacterSet>(fbb_.EndTable(start_, 1));
    return o;
  }
};

inline flatbuffers::Offset<PacketRenderCharacterSet> CreatePacketRenderCharacterSet(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<packets::PacketRenderCharacter>>> characters = 0) {
  PacketRenderCharacterSetBuilder builder_(_fbb);
  builder_.add_characters(characters);
  return builder_.Finish();
}

inline const packets::PacketRenderCharacterSet *GetPacketRenderCharacterSet(const void *buf) { return flatbuffers::GetRoot<packets::PacketRenderCharacterSet>(buf); }

inline bool VerifyPacketRenderCharacterSetBuffer(flatbuffers::Verifier &verifier) { return verifier.VerifyBuffer<packets::PacketRenderCharacterSet>(); }

inline void FinishPacketRenderCharacterSetBuffer(flatbuffers::FlatBufferBuilder &fbb, flatbuffers::Offset<packets::PacketRenderCharacterSet> root) { fbb.Finish(root); }

}  // namespace packets

#endif  // FLATBUFFERS_GENERATED_PACKETRENDERCHARACTERSET_PACKETS_H_
