//
// Generated file, do not edit! Created by opp_msgtool 6.1 from inet/linklayer/common/PcpTag.msg.
//

#ifndef __INET_PCPTAG_M_H
#define __INET_PCPTAG_M_H

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

class PcpTagBase;
class PcpReq;
class PcpInd;

}  // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/common/TagBase_m.h" // import inet.common.TagBase


namespace inet {

/**
 * Class generated from <tt>inet/linklayer/common/PcpTag.msg:16</tt> by opp_msgtool.
 * <pre>
 * //
 * // This is an abstract base class that should not be directly added as a tag.
 * //
 * class PcpTagBase extends TagBase
 * {
 *     int pcp = -1;
 * }
 * </pre>
 */
class INET_API PcpTagBase : public ::inet::TagBase
{
  protected:
    int pcp = -1;

  private:
    void copy(const PcpTagBase& other);

  protected:
    bool operator==(const PcpTagBase&) = delete;

  public:
    PcpTagBase();
    PcpTagBase(const PcpTagBase& other);
    virtual ~PcpTagBase();
    PcpTagBase& operator=(const PcpTagBase& other);
    virtual PcpTagBase *dup() const override {return new PcpTagBase(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual int getPcp() const;
    virtual void setPcp(int pcp);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const PcpTagBase& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, PcpTagBase& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/common/PcpTag.msg:25</tt> by opp_msgtool.
 * <pre>
 * //
 * // This request determines the PCP that should be used to send the packet.
 * // It may be present on a packet from the application to the mac protocol.
 * //
 * class PcpReq extends PcpTagBase
 * {
 * }
 * </pre>
 */
class INET_API PcpReq : public ::inet::PcpTagBase
{
  protected:

  private:
    void copy(const PcpReq& other);

  protected:
    bool operator==(const PcpReq&) = delete;

  public:
    PcpReq();
    PcpReq(const PcpReq& other);
    virtual ~PcpReq();
    PcpReq& operator=(const PcpReq& other);
    virtual PcpReq *dup() const override {return new PcpReq(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const PcpReq& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, PcpReq& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/common/PcpTag.msg:33</tt> by opp_msgtool.
 * <pre>
 * //
 * // This indication specifies the PCP that was used to receive the packet.
 * // It may be present on a packet from the mac protocol to the application.
 * //
 * class PcpInd extends PcpTagBase
 * {
 * }
 * </pre>
 */
class INET_API PcpInd : public ::inet::PcpTagBase
{
  protected:

  private:
    void copy(const PcpInd& other);

  protected:
    bool operator==(const PcpInd&) = delete;

  public:
    PcpInd();
    PcpInd(const PcpInd& other);
    virtual ~PcpInd();
    PcpInd& operator=(const PcpInd& other);
    virtual PcpInd *dup() const override {return new PcpInd(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const PcpInd& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, PcpInd& obj) {obj.parsimUnpack(b);}


}  // namespace inet


namespace omnetpp {

template<> inline inet::PcpTagBase *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::PcpTagBase*>(ptr.get<cObject>()); }
template<> inline inet::PcpReq *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::PcpReq*>(ptr.get<cObject>()); }
template<> inline inet::PcpInd *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::PcpInd*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __INET_PCPTAG_M_H

