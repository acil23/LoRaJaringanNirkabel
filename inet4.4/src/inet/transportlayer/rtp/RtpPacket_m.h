//
// Generated file, do not edit! Created by opp_msgtool 6.1 from inet/transportlayer/rtp/RtpPacket.msg.
//

#ifndef __INET__RTP_RTPPACKET_M_H
#define __INET__RTP_RTPPACKET_M_H

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
namespace rtp {

class RtpHeader;

}  // namespace rtp
}  // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/common/packet/chunk/Chunk_m.h" // import inet.common.packet.chunk.Chunk


namespace inet {
namespace rtp {

// cplusplus {{
    const B RTPPACKET_FIX_HEADERLENGTH = B(12);
// }}

/**
 * Class generated from <tt>inet/transportlayer/rtp/RtpPacket.msg:25</tt> by opp_msgtool.
 * <pre>
 * //
 * // This class represents an RTP data packet. Real data can either
 * // be encapsulated, or simulated by adding length.
 * //
 * // The following RTP header fields exist but aren't used:
 * // padding, extension, csrcCount. The csrcList can't be used
 * // because csrcCount is always 0.
 * //
 * class RtpHeader extends FieldsChunk
 * {
 *     chunkLength = RTPPACKET_FIX_HEADERLENGTH;  // 12-byte fixed header
 * 
 *     // The rtp version of this ~RtpPacket.
 *     uint8_t version = 2;      // 2 bits
 * 
 *     // Set to 1 if padding is used in this ~RtpPacket, 0 otherwise.
 *     // This implementation doesn't use padding bytes, so it is always 0.
 *     bool paddingFlag = false;      // 1 bit
 * 
 *     // Set to 1, if this ~RtpPacket contains an rtp header extension, 0 otherwise.
 *     // This implementation doesn't support rtp header extensions, so it is always 0.
 *     bool extensionFlag = false;      // 1 bit
 * 
 *     // uint8_t cc;      // 4 bits, csrc count
 * 
 *     // The marker.
 *     bool marker = false;      // 1 bit
 * 
 *     // The type of payload carried in this ~RtpPacket.
 *     int8_t payloadType;      // 7 bits
 * 
 *     // The sequence number of this ~RtpPacket.
 *     uint16_t sequenceNumber;      // 16 bits
 * 
 *     // The rtp time stamp of this ~RtpPacket.
 *     uint32_t timeStamp;      // 32 bits
 * 
 *     // The ssrc identifier of the creator of this ~RtpPacket.
 *     uint32_t ssrc;      // 32 bits
 * 
 *     // no mixers, no contributing sources
 *     uint32_t csrc[];      // cc * 32 bits
 * }
 * </pre>
 */
class INET_API RtpHeader : public ::inet::FieldsChunk
{
  protected:
    uint8_t version = 2;
    bool paddingFlag = false;
    bool extensionFlag = false;
    bool marker = false;
    int8_t payloadType = 0;
    uint16_t sequenceNumber = 0;
    uint32_t timeStamp = 0;
    uint32_t ssrc = 0;
    uint32_t *csrc = nullptr;
    size_t csrc_arraysize = 0;

  private:
    void copy(const RtpHeader& other);

  protected:
    bool operator==(const RtpHeader&) = delete;

  public:
    RtpHeader();
    RtpHeader(const RtpHeader& other);
    virtual ~RtpHeader();
    RtpHeader& operator=(const RtpHeader& other);
    virtual RtpHeader *dup() const override {return new RtpHeader(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual uint8_t getVersion() const;
    virtual void setVersion(uint8_t version);

    virtual bool getPaddingFlag() const;
    virtual void setPaddingFlag(bool paddingFlag);

    virtual bool getExtensionFlag() const;
    virtual void setExtensionFlag(bool extensionFlag);

    virtual bool getMarker() const;
    virtual void setMarker(bool marker);

    virtual int8_t getPayloadType() const;
    virtual void setPayloadType(int8_t payloadType);

    virtual uint16_t getSequenceNumber() const;
    virtual void setSequenceNumber(uint16_t sequenceNumber);

    virtual uint32_t getTimeStamp() const;
    virtual void setTimeStamp(uint32_t timeStamp);

    virtual uint32_t getSsrc() const;
    virtual void setSsrc(uint32_t ssrc);

    virtual void setCsrcArraySize(size_t size);
    virtual size_t getCsrcArraySize() const;
    virtual uint32_t getCsrc(size_t k) const;
    virtual void setCsrc(size_t k, uint32_t csrc);
    virtual void insertCsrc(size_t k, uint32_t csrc);
    [[deprecated]] void insertCsrc(uint32_t csrc) {appendCsrc(csrc);}
    virtual void appendCsrc(uint32_t csrc);
    virtual void eraseCsrc(size_t k);


  public:
    /**
     * Writes a one line info about this RtpHeader into the given string.
     */
    virtual std::string str() const override;

    /**
     * Writes a longer description about this RtpHeader into the given stream.
     */
    virtual void dump() const;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const RtpHeader& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, RtpHeader& obj) {obj.parsimUnpack(b);}


}  // namespace rtp
}  // namespace inet


namespace omnetpp {

template<> inline inet::rtp::RtpHeader *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::rtp::RtpHeader*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __INET__RTP_RTPPACKET_M_H

