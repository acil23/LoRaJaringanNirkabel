//
// Generated file, do not edit! Created by opp_msgtool 6.1 from inet/linklayer/ieee8021as/GptpPacket.msg.
//

#ifndef __INET_GPTPPACKET_M_H
#define __INET_GPTPPACKET_M_H

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

struct PortIdentity;
class GptpReqAnswerEvent;
class GptpBase;
class GptpTlv;
class GptpFollowUpInformationTlv;
class GptpSync;
class GptpFollowUp;
class GptpPdelayReq;
class GptpPdelayResp;
class GptpPdelayRespFollowUp;
class GptpIngressTimeInd;

}  // namespace inet

#include "inet/clock/common/ClockEvent_m.h" // import inet.clock.common.ClockEvent

#include "inet/clock/contract/ClockTime_m.h" // import inet.clock.contract.ClockTime

#include "inet/common/TagBase_m.h" // import inet.common.TagBase

#include "inet/common/packet/chunk/Chunk_m.h" // import inet.common.packet.chunk.Chunk

#include "inet/common/packet/Packet_m.h" // import inet.common.packet.Packet

// cplusplus {{
#include "inet/common/Units.h"
#include "inet/clock/common/ClockEvent.h"

namespace inet {

using namespace inet::units::values;
const B GPTP_HEADER_SIZE = B(34);
const B GPTP_TLV_SIZE = B(4);
const B GPTP_FOLLOW_UP_INFORMATION_TLV_BODYSIZE = B(28);
const B GPTP_SYNC_1STEP_PACKET_SIZE = GPTP_HEADER_SIZE + B(10) + GPTP_TLV_SIZE + GPTP_FOLLOW_UP_INFORMATION_TLV_BODYSIZE;
const B GPTP_SYNC_2STEP_PACKET_SIZE = GPTP_HEADER_SIZE + B(10);
const B GPTP_FOLLOW_UP_PACKET_SIZE = GPTP_HEADER_SIZE + B(10) + GPTP_TLV_SIZE + GPTP_FOLLOW_UP_INFORMATION_TLV_BODYSIZE;
const B GPTP_PDELAY_REQ_PACKET_SIZE = GPTP_HEADER_SIZE + B(20);
const B GPTP_PDELAY_RESP_PACKET_SIZE = GPTP_HEADER_SIZE + B(20);
const B GPTP_PDELAY_RESP_FOLLOW_UP_PACKET_SIZE = GPTP_HEADER_SIZE + B(20);
}
// }}


namespace inet {

/**
 * Enum generated from <tt>inet/linklayer/ieee8021as/GptpPacket.msg:45</tt> by opp_msgtool.
 * <pre>
 * enum GptpNodeType
 * {
 *     MASTER_NODE = 11;
 *     BRIDGE_NODE = 12;
 *     SLAVE_NODE = 13;
 * }
 * </pre>
 */
enum GptpNodeType {
    MASTER_NODE = 11,
    BRIDGE_NODE = 12,
    SLAVE_NODE = 13
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const GptpNodeType& e) { b->pack(static_cast<int>(e)); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, GptpNodeType& e) { int n; b->unpack(n); e = static_cast<GptpNodeType>(n); }

/**
 * Enum generated from <tt>inet/linklayer/ieee8021as/GptpPacket.msg:52</tt> by opp_msgtool.
 * <pre>
 * enum GptpPortType
 * {
 *     MASTER_PORT = 2;
 *     SLAVE_PORT = 1;
 *     PASSIVE_PORT = 0;
 * }
 * </pre>
 */
enum GptpPortType {
    MASTER_PORT = 2,
    SLAVE_PORT = 1,
    PASSIVE_PORT = 0
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const GptpPortType& e) { b->pack(static_cast<int>(e)); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, GptpPortType& e) { int n; b->unpack(n); e = static_cast<GptpPortType>(n); }

/**
 * Enum generated from <tt>inet/linklayer/ieee8021as/GptpPacket.msg:59</tt> by opp_msgtool.
 * <pre>
 * enum GptpMessageType
 * {
 *     GPTPTYPE_SYNC = 0x0;
 *     GPTPTYPE_FOLLOW_UP = 0x8;
 *     GPTPTYPE_PDELAY_REQ = 0x2;
 *     GPTPTYPE_PDELAY_RESP = 0x3;
 *     GPTPTYPE_PDELAY_RESP_FOLLOW_UP = 0xA;
 * }
 * </pre>
 */
enum GptpMessageType {
    GPTPTYPE_SYNC = 0x0,
    GPTPTYPE_FOLLOW_UP = 0x8,
    GPTPTYPE_PDELAY_REQ = 0x2,
    GPTPTYPE_PDELAY_RESP = 0x3,
    GPTPTYPE_PDELAY_RESP_FOLLOW_UP = 0xA
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const GptpMessageType& e) { b->pack(static_cast<int>(e)); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, GptpMessageType& e) { int n; b->unpack(n); e = static_cast<GptpMessageType>(n); }

/**
 * Enum generated from <tt>inet/linklayer/ieee8021as/GptpPacket.msg:67</tt> by opp_msgtool.
 * <pre>
 * enum GptpSelfMsgKind
 * {
 *     GPTP_SELF_REQ_ANSWER_KIND = 101;
 *     GPTP_SELF_MSG_SYNC = 103;
 *     GPTP_REQUEST_TO_SEND_SYNC = 104;
 *     GPTP_SELF_MSG_PDELAY_REQ = 105;
 * }
 * </pre>
 */
enum GptpSelfMsgKind {
    GPTP_SELF_REQ_ANSWER_KIND = 101,
    GPTP_SELF_MSG_SYNC = 103,
    GPTP_REQUEST_TO_SEND_SYNC = 104,
    GPTP_SELF_MSG_PDELAY_REQ = 105
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const GptpSelfMsgKind& e) { b->pack(static_cast<int>(e)); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, GptpSelfMsgKind& e) { int n; b->unpack(n); e = static_cast<GptpSelfMsgKind>(n); }

/**
 * Enum generated from <tt>inet/linklayer/ieee8021as/GptpPacket.msg:76</tt> by opp_msgtool.
 * <pre>
 * // ieee802.1AS-2020 10.6.2.2.8: flags (Octet2)
 * // Table 10-9—Values of flag bits
 * enum GptpFlags
 * {
 *     alternateMasterFlag = 1; // Not used in this standard; transmitted as FALSE and ignored on reception
 *     twoStepFlag = 2; // For Sync messages:
 *                      //   a) For a one-step transmitting PTP Port (see 11.1.3 and 11.2.13.9), the value is FALSE.
 *                      //   b) For a two-step transmitting PTP Port, the value is TRUE.
 *                      // For Pdelay_Resp messages: The value is transmitted as TRUE and ignored on reception
 * 
 *     // TODO add more flags
 * }
 * </pre>
 */
enum GptpFlags {
    alternateMasterFlag = 1,
    twoStepFlag = 2
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const GptpFlags& e) { b->pack(static_cast<int>(e)); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, GptpFlags& e) { int n; b->unpack(n); e = static_cast<GptpFlags>(n); }

/**
 * Enum generated from <tt>inet/linklayer/ieee8021as/GptpPacket.msg:86</tt> by opp_msgtool.
 * <pre>
 * enum GptpTlvType
 * {
 *     GPTP_FOLLOW_UP_INFORMATION_TLV = 0x03;
 * }
 * 
 * //struct Timestamp
 * //{
 * //    UInteger48 seconds;
 * //    UInteger32 nanoseconds;
 * //};
 * 
 * //struct ExtendedTimestamp
 * //{
 * //    UInteger48 seconds;
 * //    UInteger48 fractionalNanoseconds;
 * //};
 * 
 * //typedef Octet8 ClockIdentity;
 * </pre>
 */
enum GptpTlvType {
    GPTP_FOLLOW_UP_INFORMATION_TLV = 0x03
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const GptpTlvType& e) { b->pack(static_cast<int>(e)); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, GptpTlvType& e) { int n; b->unpack(n); e = static_cast<GptpTlvType>(n); }

/**
 * Struct generated from inet/linklayer/ieee8021as/GptpPacket.msg:105 by opp_msgtool.
 */
struct INET_API PortIdentity
{
    PortIdentity();
    uint64_t clockIdentity = 0;
    uint16_t portNumber = 0;
};

// helpers for local use
void INET_API __doPacking(omnetpp::cCommBuffer *b, const PortIdentity& a);
void INET_API __doUnpacking(omnetpp::cCommBuffer *b, PortIdentity& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const PortIdentity& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, PortIdentity& obj) { __doUnpacking(b, obj); }

/**
 * Class generated from <tt>inet/linklayer/ieee8021as/GptpPacket.msg:119</tt> by opp_msgtool.
 * <pre>
 * message GptpReqAnswerEvent extends ClockEvent
 * {
 *     int portId;
 *     clocktime_t ingressTimestamp;
 *     PortIdentity sourcePortIdentity;
 *     uint16_t sequenceId;
 * }
 * </pre>
 */
class INET_API GptpReqAnswerEvent : public ::inet::ClockEvent
{
  protected:
    int portId = 0;
    clocktime_t ingressTimestamp = CLOCKTIME_ZERO;
    PortIdentity sourcePortIdentity;
    uint16_t sequenceId = 0;

  private:
    void copy(const GptpReqAnswerEvent& other);

  protected:
    bool operator==(const GptpReqAnswerEvent&) = delete;

  public:
    GptpReqAnswerEvent(const char *name=nullptr, short kind=0);
    GptpReqAnswerEvent(const GptpReqAnswerEvent& other);
    virtual ~GptpReqAnswerEvent();
    GptpReqAnswerEvent& operator=(const GptpReqAnswerEvent& other);
    virtual GptpReqAnswerEvent *dup() const override {return new GptpReqAnswerEvent(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual int getPortId() const;
    virtual void setPortId(int portId);

    virtual clocktime_t getIngressTimestamp() const;
    virtual void setIngressTimestamp(clocktime_t ingressTimestamp);

    virtual const PortIdentity& getSourcePortIdentity() const;
    virtual PortIdentity& getSourcePortIdentityForUpdate() { return const_cast<PortIdentity&>(const_cast<GptpReqAnswerEvent*>(this)->getSourcePortIdentity());}
    virtual void setSourcePortIdentity(const PortIdentity& sourcePortIdentity);

    virtual uint16_t getSequenceId() const;
    virtual void setSequenceId(uint16_t sequenceId);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const GptpReqAnswerEvent& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, GptpReqAnswerEvent& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee8021as/GptpPacket.msg:128</tt> by opp_msgtool.
 * <pre>
 * // ieee802.1AS-2020 10.6.2.1, 11.4.2
 * class GptpBase extends FieldsChunk
 * {
 *     uint8_t majorSdoId \@bit(4); // The value is specified in 8.1 for all transmitted PTP messages of a gPTP domain. The value is specified in
 *                                 // 11.2.17 for all transmitted PTP messages of the Common Mean Link Delay Service. Any PTP message
 *                                 // received for which the value is not one of the values specified in those subclauses shall be ignored.
 *     GptpMessageType messageType \@bit(4);
 *     uint8_t minorVersionPTP \@bit(4) = 1; // For transmitted messages, the value shall be 1 (see 7.5.4 and 13.3.2.5 of IEEE Std 1588-2019).
 *                                      // For received messages, the value is ignored.
 *     uint8_t versionPTP \@bit(4) = 2; // For transmitted messages, the value shall be 2 (see 7.5.4 and 13.3.2.4 of IEEE Std 1588-2019). For received
 *                                 // messages, if the value is not 2, the entire message shall be ignored.
 *     uint16_t messageLengthField \@bit(16); // The value is the total number of octets that form the PTP message.
 *     uint8_t domainNumber \@bit(8); // The domainNumber for Pdelay_Req, Pdelay_Resp, and Pdelay_Resp_Follow_Up messages shall be 0.
 *                                   // The domainNumber for all other PTP messages is as specified in 10.6.2.2.6.
 *     uint8_t minorSdoId \@bit(8); // The value is specified in 8.1 for all transmitted PTP messages of a gPTP domain. The value is specified in
 *                                 // 11.2.17 for all transmitted PTP messages of the Common Mean Link Delay Service. Any PTP message
 *                                 // received for which the value is not one of the values specified in those subclauses shall be ignored.
 *                                 // Currently unused in INET
 *     uint16_t flags \@bit(16); // 10.6.2.2.8 flags (Octet2)
 *                              // The value of the bits of the array are defined in Table 10-9. For message types where the bit is not defined in
 *                              // Table 10-9, the value of the bit is set to FALSE.
 *                              // Use ~GptpFlags enums.
 *     clocktime_t correctionField \@bit(64) = 0; // The correctionField is the value of the correction as specified in Table 11-6, measured in nanoseconds and
 *                                               // multiplied by 2^16. For example, 2.5 ns is represented as 0x0000000000028000.
 *     uint32_t messageTypeSpecific \@bit(32); // The value of the messageTypeSpecific field varies, based on the value of the messageType field, as described in Table 10-10.
 *     PortIdentity sourcePortIdentity \@bit(80); // The value is the PTP Port identity attribute (see 8.5.2) of the PTP Port that transmits the PTP message.
 *     uint16_t sequenceId \@bit(16); // The sequenceId field is assigned as specified in 10.5.7.
 *     uint8_t controlField \@bit(8) = 0; // The value is 0.
 *     uint8_t logMessageInterval \@bit(8); // For Sync and Follow_Up messages, the value is the value of currentLogSyncInterval (see 10.2.5.4 and
 *                                         // 10.7.2.3). For Pdelay_Req messages, the value is the value of currentLogPdelayReqInterval. For
 *                                         // Pdelay_Resp and Pdelay_Resp_Follow_Up messages, the value is transmitted as 0x7F and ignored on
 *                                         // reception.
 * }
 * </pre>
 */
class INET_API GptpBase : public ::inet::FieldsChunk
{
  protected:
    uint8_t majorSdoId = 0;
    GptpMessageType messageType = static_cast<inet::GptpMessageType>(-1);
    uint8_t minorVersionPTP = 1;
    uint8_t versionPTP = 2;
    uint16_t messageLengthField = 0;
    uint8_t domainNumber = 0;
    uint8_t minorSdoId = 0;
    uint16_t flags = 0;
    clocktime_t correctionField = 0;
    uint32_t messageTypeSpecific = 0;
    PortIdentity sourcePortIdentity;
    uint16_t sequenceId = 0;
    uint8_t controlField = 0;
    uint8_t logMessageInterval = 0;

  private:
    void copy(const GptpBase& other);

  protected:
    bool operator==(const GptpBase&) = delete;

  public:
    GptpBase();
    GptpBase(const GptpBase& other);
    virtual ~GptpBase();
    GptpBase& operator=(const GptpBase& other);
    virtual GptpBase *dup() const override {return new GptpBase(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual uint8_t getMajorSdoId() const;
    virtual void setMajorSdoId(uint8_t majorSdoId);

    virtual GptpMessageType getMessageType() const;
    virtual void setMessageType(GptpMessageType messageType);

    virtual uint8_t getMinorVersionPTP() const;
    virtual void setMinorVersionPTP(uint8_t minorVersionPTP);

    virtual uint8_t getVersionPTP() const;
    virtual void setVersionPTP(uint8_t versionPTP);

    virtual uint16_t getMessageLengthField() const;
    virtual void setMessageLengthField(uint16_t messageLengthField);

    virtual uint8_t getDomainNumber() const;
    virtual void setDomainNumber(uint8_t domainNumber);

    virtual uint8_t getMinorSdoId() const;
    virtual void setMinorSdoId(uint8_t minorSdoId);

    virtual uint16_t getFlags() const;
    virtual void setFlags(uint16_t flags);

    virtual clocktime_t getCorrectionField() const;
    virtual void setCorrectionField(clocktime_t correctionField);

    virtual uint32_t getMessageTypeSpecific() const;
    virtual void setMessageTypeSpecific(uint32_t messageTypeSpecific);

    virtual const PortIdentity& getSourcePortIdentity() const;
    virtual PortIdentity& getSourcePortIdentityForUpdate() { handleChange();return const_cast<PortIdentity&>(const_cast<GptpBase*>(this)->getSourcePortIdentity());}
    virtual void setSourcePortIdentity(const PortIdentity& sourcePortIdentity);

    virtual uint16_t getSequenceId() const;
    virtual void setSequenceId(uint16_t sequenceId);

    virtual uint8_t getControlField() const;
    virtual void setControlField(uint8_t controlField);

    virtual uint8_t getLogMessageInterval() const;
    virtual void setLogMessageInterval(uint8_t logMessageInterval);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const GptpBase& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, GptpBase& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee8021as/GptpPacket.msg:160</tt> by opp_msgtool.
 * <pre>
 * class GptpTlv
 * {
 *     \@packetData;
 *     GptpTlvType tlvType \@bit(16);
 *     uint16_t lengthField \@bit(16);
 * }
 * </pre>
 */
class INET_API GptpTlv
{
  protected:
    GptpTlvType tlvType = static_cast<inet::GptpTlvType>(-1);
    uint16_t lengthField = 0;

  private:
    void copy(const GptpTlv& other);

  protected:
    bool operator==(const GptpTlv&) = delete;

  public:
    GptpTlv();
    GptpTlv(const GptpTlv& other);
    virtual ~GptpTlv();
    GptpTlv& operator=(const GptpTlv& other);
    virtual void parsimPack(omnetpp::cCommBuffer *b) const;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b);

    virtual GptpTlvType getTlvType() const;
    virtual void setTlvType(GptpTlvType tlvType);

    virtual uint16_t getLengthField() const;
    virtual void setLengthField(uint16_t lengthField);
};

/**
 * Class generated from <tt>inet/linklayer/ieee8021as/GptpPacket.msg:174</tt> by opp_msgtool.
 * <pre>
 * // The fields of the Follow_Up information TLV shall be as specified in Table 11-11 and in 11.4.4.3.2 through
 * // 11.4.4.3.9. This TLV is a standard organization extension TLV for the Follow_Up message, as specified in
 * // 14.3 of IEEE Std 1588-2019.
 * // NOTE—The Follow_Up information TLV is different from the CUMULATIVE_RATE_RATIO TLV of IEEE Std 1588-
 * // 2019 (see 16.10 and Table 52 of IEEE Std 1588-2019). While both TLVs carry cumulative rate offset information, the
 * // Follow_Up information TLV also carries information on the Grandmaster Clock time base, most recent phase change,
 * // and most recent frequency change. The CUMULATIVE_RATE_RATIO TLV is not used by gPTP.
 * class GptpFollowUpInformationTlv extends GptpTlv
 * {
 *     tlvType = GPTP_FOLLOW_UP_INFORMATION_TLV;
 *     uint16_t lengthField \@bit(16) = B(GPTP_FOLLOW_UP_INFORMATION_TLV_BODYSIZE).get();
 *     uint32_t organizationId \@bit(24) = 0x0080C2;
 *     uint32_t organizationSubType \@bit(24) = 1;
 *     double rateRatio \@bit(32); // 11.4.4.3.6 The value of cumulativeScaledRateOffset is equal to (rateRatio – 1.0) / (2^41), truncated to the next smaller
 *                                // signed integer, where rateRatio is the ratio of the frequency of the Grandmaster Clock to the frequency of the
 *                                // LocalClock entity in the PTP Instance that sends the message.
 *     uint16_t gmTimeBaseIndicator \@bit(16); // The value of gmTimeBaseIndicator is the timeBaseIndicator of the ClockSource entity for the current
 *                                            // Grandmaster PTP Instance (see 9.2.2.3).
 *     clocktime_t lastGmPhaseChange \@bit(96); // The value of lastGmPhaseChange is the time of the current Grandmaster Clock minus the time of the
 *                                             // previous Grandmaster Clock, at the time that the current Grandmaster PTP Instance became the
 *                                             // Grandmaster PTP Instance. The value is copied from the lastGmPhaseChange member of the MDSyncSend
 *                                             // structure whose receipt causes the MD entity to send the Follow_Up message (see 11.2.11).
 *     int32_t scaledLastGmFreqChange \@bit(32); // The value of scaledLastGmFreqChange is the fractional frequency offset of the current Grandmaster Clock
 *                                              // relative to the previous Grandmaster Clock, at the time that the current Grandmaster PTP Instance became
 *                                              // the Grandmaster PTP Instance, or relative to itself prior to the last change in gmTimeBaseIndicator,
 *                                              // multiplied by 241 and truncated to the next smaller signed integer. The value is obtained by multiplying the
 *                                              // lastGmFreqChange member of MDSyncSend whose receipt causes the MD entity to send the Follow_Up
 *                                              // message (see 11.2.11) by 241, and truncating to the next smaller signed integer.
 * }
 * </pre>
 */
class INET_API GptpFollowUpInformationTlv : public ::inet::GptpTlv
{
  protected:
    uint16_t lengthField = B(GPTP_FOLLOW_UP_INFORMATION_TLV_BODYSIZE).get();
    uint32_t organizationId = 0x0080C2;
    uint32_t organizationSubType = 1;
    double rateRatio = 0;
    uint16_t gmTimeBaseIndicator = 0;
    clocktime_t lastGmPhaseChange = CLOCKTIME_ZERO;
    int32_t scaledLastGmFreqChange = 0;

  private:
    void copy(const GptpFollowUpInformationTlv& other);

  protected:
    bool operator==(const GptpFollowUpInformationTlv&) = delete;

  public:
    GptpFollowUpInformationTlv();
    GptpFollowUpInformationTlv(const GptpFollowUpInformationTlv& other);
    virtual ~GptpFollowUpInformationTlv();
    GptpFollowUpInformationTlv& operator=(const GptpFollowUpInformationTlv& other);
    virtual void parsimPack(omnetpp::cCommBuffer *b) const;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b);

    virtual uint16_t getLengthField() const;
    virtual void setLengthField(uint16_t lengthField);

    virtual uint32_t getOrganizationId() const;
    virtual void setOrganizationId(uint32_t organizationId);

    virtual uint32_t getOrganizationSubType() const;
    virtual void setOrganizationSubType(uint32_t organizationSubType);

    virtual double getRateRatio() const;
    virtual void setRateRatio(double rateRatio);

    virtual uint16_t getGmTimeBaseIndicator() const;
    virtual void setGmTimeBaseIndicator(uint16_t gmTimeBaseIndicator);

    virtual clocktime_t getLastGmPhaseChange() const;
    virtual void setLastGmPhaseChange(clocktime_t lastGmPhaseChange);

    virtual int32_t getScaledLastGmFreqChange() const;
    virtual void setScaledLastGmFreqChange(int32_t scaledLastGmFreqChange);


    void setCumulativeScaledRateOffset(int32_t x) { setRateRatio(1.0 + (double)(x) / (double)((uint64_t)1<<41)); }
    int32_t getCumulativeScaledRateOffset() const { return (int32_t)ceil((getRateRatio() - 1.0) * (double)((uint64_t)1<<41)); }
};

/**
 * Class generated from <tt>inet/linklayer/ieee8021as/GptpPacket.msg:202</tt> by opp_msgtool.
 * <pre>
 * class GptpSync extends GptpBase
 * {
 *     messageType = GPTPTYPE_SYNC;
 *     flags = twoStepFlag;
 *     chunkLength = GPTP_SYNC_2STEP_PACKET_SIZE;
 *     messageLengthField = B(GPTP_SYNC_2STEP_PACKET_SIZE).get();
 *     // clocktime_t originTimestamp; // filled when twoStep flag is FALSE
 *     // followUpInformationTLV; // filled when twoStep flag is FALSE
 * }
 * </pre>
 */
class INET_API GptpSync : public ::inet::GptpBase
{
  protected:

  private:
    void copy(const GptpSync& other);

  protected:
    bool operator==(const GptpSync&) = delete;

  public:
    GptpSync();
    GptpSync(const GptpSync& other);
    virtual ~GptpSync();
    GptpSync& operator=(const GptpSync& other);
    virtual GptpSync *dup() const override {return new GptpSync(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const GptpSync& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, GptpSync& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee8021as/GptpPacket.msg:212</tt> by opp_msgtool.
 * <pre>
 * class GptpFollowUp extends GptpBase
 * {
 *     messageType = GPTPTYPE_FOLLOW_UP;
 *     chunkLength = GPTP_FOLLOW_UP_PACKET_SIZE;
 *     messageLengthField = B(GPTP_FOLLOW_UP_PACKET_SIZE).get();
 *     clocktime_t preciseOriginTimestamp;  // 11.4.4.2.1
 *     GptpFollowUpInformationTlv followUpInformationTLV;
 * }
 * </pre>
 */
class INET_API GptpFollowUp : public ::inet::GptpBase
{
  protected:
    clocktime_t preciseOriginTimestamp = CLOCKTIME_ZERO;
    GptpFollowUpInformationTlv followUpInformationTLV;

  private:
    void copy(const GptpFollowUp& other);

  protected:
    bool operator==(const GptpFollowUp&) = delete;

  public:
    GptpFollowUp();
    GptpFollowUp(const GptpFollowUp& other);
    virtual ~GptpFollowUp();
    GptpFollowUp& operator=(const GptpFollowUp& other);
    virtual GptpFollowUp *dup() const override {return new GptpFollowUp(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual clocktime_t getPreciseOriginTimestamp() const;
    virtual void setPreciseOriginTimestamp(clocktime_t preciseOriginTimestamp);

    virtual const GptpFollowUpInformationTlv& getFollowUpInformationTLV() const;
    virtual GptpFollowUpInformationTlv& getFollowUpInformationTLVForUpdate() { handleChange();return const_cast<GptpFollowUpInformationTlv&>(const_cast<GptpFollowUp*>(this)->getFollowUpInformationTLV());}
    virtual void setFollowUpInformationTLV(const GptpFollowUpInformationTlv& followUpInformationTLV);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const GptpFollowUp& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, GptpFollowUp& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee8021as/GptpPacket.msg:221</tt> by opp_msgtool.
 * <pre>
 * class GptpPdelayReq extends GptpBase
 * {
 *     messageType = GPTPTYPE_PDELAY_REQ;
 *     chunkLength = GPTP_PDELAY_REQ_PACKET_SIZE;
 *     messageLengthField = B(GPTP_PDELAY_REQ_PACKET_SIZE).get();
 *     clocktime_t reserved1;
 *     clocktime_t reserved2;
 * }
 * </pre>
 */
class INET_API GptpPdelayReq : public ::inet::GptpBase
{
  protected:
    clocktime_t reserved1 = CLOCKTIME_ZERO;
    clocktime_t reserved2 = CLOCKTIME_ZERO;

  private:
    void copy(const GptpPdelayReq& other);

  protected:
    bool operator==(const GptpPdelayReq&) = delete;

  public:
    GptpPdelayReq();
    GptpPdelayReq(const GptpPdelayReq& other);
    virtual ~GptpPdelayReq();
    GptpPdelayReq& operator=(const GptpPdelayReq& other);
    virtual GptpPdelayReq *dup() const override {return new GptpPdelayReq(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual clocktime_t getReserved1() const;
    virtual void setReserved1(clocktime_t reserved1);

    virtual clocktime_t getReserved2() const;
    virtual void setReserved2(clocktime_t reserved2);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const GptpPdelayReq& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, GptpPdelayReq& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee8021as/GptpPacket.msg:230</tt> by opp_msgtool.
 * <pre>
 * class GptpPdelayResp extends GptpBase
 * {
 *     messageType = GPTPTYPE_PDELAY_RESP;
 *     chunkLength = GPTP_PDELAY_RESP_PACKET_SIZE;
 *     messageLengthField = B(GPTP_PDELAY_RESP_PACKET_SIZE).get();
 *     clocktime_t requestReceiptTimestamp;
 *     PortIdentity requestingPortIdentity;
 * }
 * </pre>
 */
class INET_API GptpPdelayResp : public ::inet::GptpBase
{
  protected:
    clocktime_t requestReceiptTimestamp = CLOCKTIME_ZERO;
    PortIdentity requestingPortIdentity;

  private:
    void copy(const GptpPdelayResp& other);

  protected:
    bool operator==(const GptpPdelayResp&) = delete;

  public:
    GptpPdelayResp();
    GptpPdelayResp(const GptpPdelayResp& other);
    virtual ~GptpPdelayResp();
    GptpPdelayResp& operator=(const GptpPdelayResp& other);
    virtual GptpPdelayResp *dup() const override {return new GptpPdelayResp(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual clocktime_t getRequestReceiptTimestamp() const;
    virtual void setRequestReceiptTimestamp(clocktime_t requestReceiptTimestamp);

    virtual const PortIdentity& getRequestingPortIdentity() const;
    virtual PortIdentity& getRequestingPortIdentityForUpdate() { handleChange();return const_cast<PortIdentity&>(const_cast<GptpPdelayResp*>(this)->getRequestingPortIdentity());}
    virtual void setRequestingPortIdentity(const PortIdentity& requestingPortIdentity);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const GptpPdelayResp& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, GptpPdelayResp& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee8021as/GptpPacket.msg:239</tt> by opp_msgtool.
 * <pre>
 * class GptpPdelayRespFollowUp extends GptpBase
 * {
 *     messageType = GPTPTYPE_PDELAY_RESP_FOLLOW_UP;
 *     chunkLength = GPTP_PDELAY_RESP_FOLLOW_UP_PACKET_SIZE;
 *     messageLengthField = B(GPTP_PDELAY_RESP_FOLLOW_UP_PACKET_SIZE).get();
 *     clocktime_t responseOriginTimestamp;
 *     PortIdentity requestingPortIdentity;
 * }
 * </pre>
 */
class INET_API GptpPdelayRespFollowUp : public ::inet::GptpBase
{
  protected:
    clocktime_t responseOriginTimestamp = CLOCKTIME_ZERO;
    PortIdentity requestingPortIdentity;

  private:
    void copy(const GptpPdelayRespFollowUp& other);

  protected:
    bool operator==(const GptpPdelayRespFollowUp&) = delete;

  public:
    GptpPdelayRespFollowUp();
    GptpPdelayRespFollowUp(const GptpPdelayRespFollowUp& other);
    virtual ~GptpPdelayRespFollowUp();
    GptpPdelayRespFollowUp& operator=(const GptpPdelayRespFollowUp& other);
    virtual GptpPdelayRespFollowUp *dup() const override {return new GptpPdelayRespFollowUp(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual clocktime_t getResponseOriginTimestamp() const;
    virtual void setResponseOriginTimestamp(clocktime_t responseOriginTimestamp);

    virtual const PortIdentity& getRequestingPortIdentity() const;
    virtual PortIdentity& getRequestingPortIdentityForUpdate() { handleChange();return const_cast<PortIdentity&>(const_cast<GptpPdelayRespFollowUp*>(this)->getRequestingPortIdentity());}
    virtual void setRequestingPortIdentity(const PortIdentity& requestingPortIdentity);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const GptpPdelayRespFollowUp& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, GptpPdelayRespFollowUp& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee8021as/GptpPacket.msg:248</tt> by opp_msgtool.
 * <pre>
 * class GptpIngressTimeInd extends TagBase
 * {
 *     clocktime_t arrivalClockTime;
 * }
 * </pre>
 */
class INET_API GptpIngressTimeInd : public ::inet::TagBase
{
  protected:
    clocktime_t arrivalClockTime = CLOCKTIME_ZERO;

  private:
    void copy(const GptpIngressTimeInd& other);

  protected:
    bool operator==(const GptpIngressTimeInd&) = delete;

  public:
    GptpIngressTimeInd();
    GptpIngressTimeInd(const GptpIngressTimeInd& other);
    virtual ~GptpIngressTimeInd();
    GptpIngressTimeInd& operator=(const GptpIngressTimeInd& other);
    virtual GptpIngressTimeInd *dup() const override {return new GptpIngressTimeInd(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual clocktime_t getArrivalClockTime() const;
    virtual void setArrivalClockTime(clocktime_t arrivalClockTime);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const GptpIngressTimeInd& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, GptpIngressTimeInd& obj) {obj.parsimUnpack(b);}


}  // namespace inet


namespace omnetpp {

inline any_ptr toAnyPtr(const inet::PortIdentity *p) {return any_ptr(p);}
template<> inline inet::PortIdentity *fromAnyPtr(any_ptr ptr) { return ptr.get<inet::PortIdentity>(); }
template<> inline inet::GptpReqAnswerEvent *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::GptpReqAnswerEvent*>(ptr.get<cObject>()); }
template<> inline inet::GptpBase *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::GptpBase*>(ptr.get<cObject>()); }
inline any_ptr toAnyPtr(const inet::GptpTlv *p) {if (auto obj = as_cObject(p)) return any_ptr(obj); else return any_ptr(p);}
template<> inline inet::GptpTlv *fromAnyPtr(any_ptr ptr) { return ptr.get<inet::GptpTlv>(); }
template<> inline inet::GptpFollowUpInformationTlv *fromAnyPtr(any_ptr ptr) { return static_cast<inet::GptpFollowUpInformationTlv*>(ptr.get<inet::GptpTlv>()); }
template<> inline inet::GptpSync *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::GptpSync*>(ptr.get<cObject>()); }
template<> inline inet::GptpFollowUp *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::GptpFollowUp*>(ptr.get<cObject>()); }
template<> inline inet::GptpPdelayReq *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::GptpPdelayReq*>(ptr.get<cObject>()); }
template<> inline inet::GptpPdelayResp *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::GptpPdelayResp*>(ptr.get<cObject>()); }
template<> inline inet::GptpPdelayRespFollowUp *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::GptpPdelayRespFollowUp*>(ptr.get<cObject>()); }
template<> inline inet::GptpIngressTimeInd *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::GptpIngressTimeInd*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __INET_GPTPPACKET_M_H

