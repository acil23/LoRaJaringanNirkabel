//
// Generated file, do not edit! Created by opp_msgtool 6.1 from inet/protocolelement/fragmentation/header/FragmentNumberHeader.msg.
//

#ifndef __INET_FRAGMENTNUMBERHEADER_M_H
#define __INET_FRAGMENTNUMBERHEADER_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// opp_msgtool version check
#define MSGC_VERSION 0x0601
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgtool: 'make clean' should help.
#endif

// dll export symbol
#ifndef INET_API
#  if defined(INET_EXPORT)
#    define INET_API  OPP_DLLEXPORT
#  elif defined(INET_IMPORT)
#    define INET_API  OPP_DLLIMPORT
#  else
#    define INET_API
#  endif
#endif


namespace inet {

class FragmentNumberHeader;

}  // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/common/packet/chunk/Chunk_m.h" // import inet.common.packet.chunk.Chunk


namespace inet {

/**
 * Class generated from <tt>inet/protocolelement/fragmentation/header/FragmentNumberHeader.msg:13</tt> by opp_msgtool.
 * <pre>
 * class FragmentNumberHeader extends FieldsChunk
 * {
 *     chunkLength = B(1);
 *     int fragmentNumber;
 *     bool lastFragment;
 * }
 * </pre>
 */
class INET_API FragmentNumberHeader : public ::inet::FieldsChunk
{
  protected:
    int fragmentNumber = 0;
    bool lastFragment = false;

  private:
    void copy(const FragmentNumberHeader& other);

  protected:
    bool operator==(const FragmentNumberHeader&) = delete;

  public:
    FragmentNumberHeader();
    FragmentNumberHeader(const FragmentNumberHeader& other);
    virtual ~FragmentNumberHeader();
    FragmentNumberHeader& operator=(const FragmentNumberHeader& other);
    virtual FragmentNumberHeader *dup() const override {return new FragmentNumberHeader(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual int getFragmentNumber() const;
    virtual void setFragmentNumber(int fragmentNumber);

    virtual bool getLastFragment() const;
    virtual void setLastFragment(bool lastFragment);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const FragmentNumberHeader& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, FragmentNumberHeader& obj) {obj.parsimUnpack(b);}


}  // namespace inet


namespace omnetpp {

template<> inline inet::FragmentNumberHeader *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::FragmentNumberHeader*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __INET_FRAGMENTNUMBERHEADER_M_H

