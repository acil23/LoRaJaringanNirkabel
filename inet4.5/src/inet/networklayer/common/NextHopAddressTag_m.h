//
// Generated file, do not edit! Created by opp_msgtool 6.1 from inet/networklayer/common/NextHopAddressTag.msg.
//

#ifndef __INET_NEXTHOPADDRESSTAG_M_H
#define __INET_NEXTHOPADDRESSTAG_M_H

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

class NextHopAddressReq;

}  // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/common/TagBase_m.h" // import inet.common.TagBase

#include "inet/networklayer/common/L3Address_m.h" // import inet.networklayer.common.L3Address


namespace inet {

/**
 * Class generated from <tt>inet/networklayer/common/NextHopAddressTag.msg:14</tt> by opp_msgtool.
 * <pre>
 * class NextHopAddressReq extends TagBase
 * {
 *     L3Address nextHopAddress;      // may be unspecified
 * }
 * </pre>
 */
class INET_API NextHopAddressReq : public ::inet::TagBase
{
  protected:
    L3Address nextHopAddress;

  private:
    void copy(const NextHopAddressReq& other);

  protected:
    bool operator==(const NextHopAddressReq&) = delete;

  public:
    NextHopAddressReq();
    NextHopAddressReq(const NextHopAddressReq& other);
    virtual ~NextHopAddressReq();
    NextHopAddressReq& operator=(const NextHopAddressReq& other);
    virtual NextHopAddressReq *dup() const override {return new NextHopAddressReq(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual const L3Address& getNextHopAddress() const;
    virtual L3Address& getNextHopAddressForUpdate() { return const_cast<L3Address&>(const_cast<NextHopAddressReq*>(this)->getNextHopAddress());}
    virtual void setNextHopAddress(const L3Address& nextHopAddress);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const NextHopAddressReq& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, NextHopAddressReq& obj) {obj.parsimUnpack(b);}


}  // namespace inet


namespace omnetpp {

template<> inline inet::NextHopAddressReq *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::NextHopAddressReq*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __INET_NEXTHOPADDRESSTAG_M_H

