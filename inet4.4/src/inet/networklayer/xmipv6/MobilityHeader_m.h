//
// Generated file, do not edit! Created by opp_msgtool 6.1 from inet/networklayer/xmipv6/MobilityHeader.msg.
//

#ifndef __INET_MOBILITYHEADER_M_H
#define __INET_MOBILITYHEADER_M_H

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

class MobilityHeader;
class BindingUpdate;
class BindingAcknowledgement;
class BindingError;
class HomeTestInit;
class HomeTest;
class CareOfTestInit;
class CareOfTest;
class BindingRefreshRequest;
class HomeAddressOption;

}  // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/common/packet/chunk/Chunk_m.h" // import inet.common.packet.chunk.Chunk

#include "inet/networklayer/contract/ipv6/Ipv6Address_m.h" // import inet.networklayer.contract.ipv6.Ipv6Address

#include "inet/networklayer/ipv6/Ipv6Header_m.h" // import inet.networklayer.ipv6.Ipv6Header

#include "inet/networklayer/ipv6/Ipv6ExtensionHeaders_m.h" // import inet.networklayer.ipv6.Ipv6ExtensionHeaders


namespace inet {

/**
 * Enum generated from <tt>inet/networklayer/xmipv6/MobilityHeader.msg:21</tt> by opp_msgtool.
 * <pre>
 * enum MobilityHeaderType
 * {
 *     BINDING_REFRESH_REQUEST = 0;
 *     HOME_TEST_INIT = 1;
 *     CARE_OF_TEST_INIT = 2;
 *     HOME_TEST = 3;
 *     CARE_OF_TEST = 4;
 *     BINDING_UPDATE = 5;
 *     BINDING_ACKNOWLEDGEMENT = 6;
 *     BINDING_ERROR = 7;
 * }
 * </pre>
 */
enum MobilityHeaderType {
    BINDING_REFRESH_REQUEST = 0,
    HOME_TEST_INIT = 1,
    CARE_OF_TEST_INIT = 2,
    HOME_TEST = 3,
    CARE_OF_TEST = 4,
    BINDING_UPDATE = 5,
    BINDING_ACKNOWLEDGEMENT = 6,
    BINDING_ERROR = 7
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const MobilityHeaderType& e) { b->pack(static_cast<int>(e)); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, MobilityHeaderType& e) { int n; b->unpack(n); e = static_cast<MobilityHeaderType>(n); }

/**
 * Class generated from <tt>inet/networklayer/xmipv6/MobilityHeader.msg:33</tt> by opp_msgtool.
 * <pre>
 * class MobilityHeader extends FieldsChunk  // extends Ipv6ExtensionHeader // TODO check how to define MobilityHeader as subclass of Ipv6ExtensionHeader
 * {
 *     MobilityHeaderType mobilityHeaderType;
 * }
 * </pre>
 */
class INET_API MobilityHeader : public ::inet::FieldsChunk
{
  protected:
    MobilityHeaderType mobilityHeaderType = static_cast<inet::MobilityHeaderType>(-1);

  private:
    void copy(const MobilityHeader& other);

  protected:
    bool operator==(const MobilityHeader&) = delete;

  public:
    MobilityHeader();
    MobilityHeader(const MobilityHeader& other);
    virtual ~MobilityHeader();
    MobilityHeader& operator=(const MobilityHeader& other);
    virtual MobilityHeader *dup() const override {return new MobilityHeader(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual MobilityHeaderType getMobilityHeaderType() const;
    virtual void setMobilityHeaderType(MobilityHeaderType mobilityHeaderType);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const MobilityHeader& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, MobilityHeader& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/networklayer/xmipv6/MobilityHeader.msg:38</tt> by opp_msgtool.
 * <pre>
 * class BindingUpdate extends MobilityHeader
 * {
 *     unsigned int lifetime;
 *     unsigned int sequence;
 *     bool ackFlag;                //A-Flag (Acknowledge Flag)
 *     bool homeRegistrationFlag;        //H-Flag (Home Registration Flag)
 *     bool linkLocalAddressCompatibilityFlag;    //L-Flag (Link Local Address Compatibility Flag)
 *     bool keyManagementFlag = false;        //K-Flag (Key Management Flag)
 *     //Mobility Options not defined
 *     Ipv6Address homeAddressMN;        //As BU is supposed to be sent with Home Address Option, therefore i make this part of BU Msg.
 * 
 *     // for CN communication; value different from 0 shows that it is used
 *     int bindingAuthorizationData = 0; // 28.08.07 - CB
 * }
 * </pre>
 */
class INET_API BindingUpdate : public ::inet::MobilityHeader
{
  protected:
    unsigned int lifetime = 0;
    unsigned int sequence = 0;
    bool ackFlag = false;
    bool homeRegistrationFlag = false;
    bool linkLocalAddressCompatibilityFlag = false;
    bool keyManagementFlag = false;
    Ipv6Address homeAddressMN;
    int bindingAuthorizationData = 0;

  private:
    void copy(const BindingUpdate& other);

  protected:
    bool operator==(const BindingUpdate&) = delete;

  public:
    BindingUpdate();
    BindingUpdate(const BindingUpdate& other);
    virtual ~BindingUpdate();
    BindingUpdate& operator=(const BindingUpdate& other);
    virtual BindingUpdate *dup() const override {return new BindingUpdate(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual unsigned int getLifetime() const;
    virtual void setLifetime(unsigned int lifetime);

    virtual unsigned int getSequence() const;
    virtual void setSequence(unsigned int sequence);

    virtual bool getAckFlag() const;
    virtual void setAckFlag(bool ackFlag);

    virtual bool getHomeRegistrationFlag() const;
    virtual void setHomeRegistrationFlag(bool homeRegistrationFlag);

    virtual bool getLinkLocalAddressCompatibilityFlag() const;
    virtual void setLinkLocalAddressCompatibilityFlag(bool linkLocalAddressCompatibilityFlag);

    virtual bool getKeyManagementFlag() const;
    virtual void setKeyManagementFlag(bool keyManagementFlag);

    virtual const Ipv6Address& getHomeAddressMN() const;
    virtual Ipv6Address& getHomeAddressMNForUpdate() { handleChange();return const_cast<Ipv6Address&>(const_cast<BindingUpdate*>(this)->getHomeAddressMN());}
    virtual void setHomeAddressMN(const Ipv6Address& homeAddressMN);

    virtual int getBindingAuthorizationData() const;
    virtual void setBindingAuthorizationData(int bindingAuthorizationData);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const BindingUpdate& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, BindingUpdate& obj) {obj.parsimUnpack(b);}

/**
 * Enum generated from <tt>inet/networklayer/xmipv6/MobilityHeader.msg:54</tt> by opp_msgtool.
 * <pre>
 * //Defining the status fields for the Binding Acknowledgement Message
 * enum BaStatus
 * {
 *     BINDING_UPDATE_ACCEPTED = 0;
 *     BU_ACCEPT_BUT_DISCOVER_PREFIX = 1;
 *     REASON_UNSPECIFIED = 128;
 *     ADMINISTRATIVELY_PROHIBITED = 129;
 *     INSUFFICIENT_RESOURCES = 130;
 *     HOME_REGISTRATION_NOT_SUPPORTED = 131;
 *     NOT_HOME_SUBNET = 132;
 *     NOT_HA_FOR_THIS_MN = 133;
 *     DAD_FAILED = 134;
 *     SEQUENCE_NUMBER_OUT_OF_WINDOW = 135;
 *     EXPIRED_HOME_NONCE_INDEX = 136;
 *     EXPIRED_CARE_OF_NONCE_INDEX = 137;
 *     EXPIRED_NONCES = 138;
 *     REGISTRATION_TYPE_CHANGE_DISALLOWED = 139;
 * }
 * </pre>
 */
enum BaStatus {
    BINDING_UPDATE_ACCEPTED = 0,
    BU_ACCEPT_BUT_DISCOVER_PREFIX = 1,
    REASON_UNSPECIFIED = 128,
    ADMINISTRATIVELY_PROHIBITED = 129,
    INSUFFICIENT_RESOURCES = 130,
    HOME_REGISTRATION_NOT_SUPPORTED = 131,
    NOT_HOME_SUBNET = 132,
    NOT_HA_FOR_THIS_MN = 133,
    DAD_FAILED = 134,
    SEQUENCE_NUMBER_OUT_OF_WINDOW = 135,
    EXPIRED_HOME_NONCE_INDEX = 136,
    EXPIRED_CARE_OF_NONCE_INDEX = 137,
    EXPIRED_NONCES = 138,
    REGISTRATION_TYPE_CHANGE_DISALLOWED = 139
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const BaStatus& e) { b->pack(static_cast<int>(e)); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, BaStatus& e) { int n; b->unpack(n); e = static_cast<BaStatus>(n); }

/**
 * Class generated from <tt>inet/networklayer/xmipv6/MobilityHeader.msg:73</tt> by opp_msgtool.
 * <pre>
 * //==================Defining Binding Acknowledgement Message===================
 * class BindingAcknowledgement extends MobilityHeader
 * {
 *     BaStatus status;
 *     unsigned int sequenceNumber;
 *     unsigned int lifetime;
 *     bool keyManagementFlag = false;//K-Flag (Key Management Flag)
 *     //Mobility Options not defined
 * 
 *     // for CN communication; value different from 0 shows that it is used
 *     int bindingAuthorizationData = 0; // 28.08.07 - CB
 * }
 * </pre>
 */
class INET_API BindingAcknowledgement : public ::inet::MobilityHeader
{
  protected:
    BaStatus status = static_cast<inet::BaStatus>(-1);
    unsigned int sequenceNumber = 0;
    unsigned int lifetime = 0;
    bool keyManagementFlag = false;
    int bindingAuthorizationData = 0;

  private:
    void copy(const BindingAcknowledgement& other);

  protected:
    bool operator==(const BindingAcknowledgement&) = delete;

  public:
    BindingAcknowledgement();
    BindingAcknowledgement(const BindingAcknowledgement& other);
    virtual ~BindingAcknowledgement();
    BindingAcknowledgement& operator=(const BindingAcknowledgement& other);
    virtual BindingAcknowledgement *dup() const override {return new BindingAcknowledgement(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual BaStatus getStatus() const;
    virtual void setStatus(BaStatus status);

    virtual unsigned int getSequenceNumber() const;
    virtual void setSequenceNumber(unsigned int sequenceNumber);

    virtual unsigned int getLifetime() const;
    virtual void setLifetime(unsigned int lifetime);

    virtual bool getKeyManagementFlag() const;
    virtual void setKeyManagementFlag(bool keyManagementFlag);

    virtual int getBindingAuthorizationData() const;
    virtual void setBindingAuthorizationData(int bindingAuthorizationData);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const BindingAcknowledgement& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, BindingAcknowledgement& obj) {obj.parsimUnpack(b);}

/**
 * Enum generated from <tt>inet/networklayer/xmipv6/MobilityHeader.msg:86</tt> by opp_msgtool.
 * <pre>
 * //==================Defining Binding Error Status====================
 * enum BeStatus
 * {
 *     UNKNOWN_BINDING_FOR_HOME_ADDRESS_DEST_OPTION = 1;
 *     UNKNOWN_MH_TYPE = 2; //Unrecognised MH Type
 * }
 * </pre>
 */
enum BeStatus {
    UNKNOWN_BINDING_FOR_HOME_ADDRESS_DEST_OPTION = 1,
    UNKNOWN_MH_TYPE = 2
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const BeStatus& e) { b->pack(static_cast<int>(e)); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, BeStatus& e) { int n; b->unpack(n); e = static_cast<BeStatus>(n); }

/**
 * Class generated from <tt>inet/networklayer/xmipv6/MobilityHeader.msg:93</tt> by opp_msgtool.
 * <pre>
 * //==================Defining Binding Error Message===================
 * class BindingError extends MobilityHeader
 * {
 *     BeStatus status;
 *     Ipv6Address homeAddress;
 *     //Mobility Options not defined
 * }
 * </pre>
 */
class INET_API BindingError : public ::inet::MobilityHeader
{
  protected:
    BeStatus status = static_cast<inet::BeStatus>(-1);
    Ipv6Address homeAddress;

  private:
    void copy(const BindingError& other);

  protected:
    bool operator==(const BindingError&) = delete;

  public:
    BindingError();
    BindingError(const BindingError& other);
    virtual ~BindingError();
    BindingError& operator=(const BindingError& other);
    virtual BindingError *dup() const override {return new BindingError(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual BeStatus getStatus() const;
    virtual void setStatus(BeStatus status);

    virtual const Ipv6Address& getHomeAddress() const;
    virtual Ipv6Address& getHomeAddressForUpdate() { handleChange();return const_cast<Ipv6Address&>(const_cast<BindingError*>(this)->getHomeAddress());}
    virtual void setHomeAddress(const Ipv6Address& homeAddress);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const BindingError& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, BindingError& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/networklayer/xmipv6/MobilityHeader.msg:101</tt> by opp_msgtool.
 * <pre>
 * //=============Message definition of Home Test Init Message ==========
 * class HomeTestInit extends MobilityHeader
 * {
 *     unsigned int homeInitCookie;
 * }
 * </pre>
 */
class INET_API HomeTestInit : public ::inet::MobilityHeader
{
  protected:
    unsigned int homeInitCookie = 0;

  private:
    void copy(const HomeTestInit& other);

  protected:
    bool operator==(const HomeTestInit&) = delete;

  public:
    HomeTestInit();
    HomeTestInit(const HomeTestInit& other);
    virtual ~HomeTestInit();
    HomeTestInit& operator=(const HomeTestInit& other);
    virtual HomeTestInit *dup() const override {return new HomeTestInit(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual unsigned int getHomeInitCookie() const;
    virtual void setHomeInitCookie(unsigned int homeInitCookie);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const HomeTestInit& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, HomeTestInit& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/networklayer/xmipv6/MobilityHeader.msg:107</tt> by opp_msgtool.
 * <pre>
 * //=============Message definition of Home Test Message ==========
 * class HomeTest extends MobilityHeader
 * {
 *     unsigned int homeInitCookie;
 *     unsigned int homeKeyGenToken;
 *     // home nonce index not modelled
 * }
 * </pre>
 */
class INET_API HomeTest : public ::inet::MobilityHeader
{
  protected:
    unsigned int homeInitCookie = 0;
    unsigned int homeKeyGenToken = 0;

  private:
    void copy(const HomeTest& other);

  protected:
    bool operator==(const HomeTest&) = delete;

  public:
    HomeTest();
    HomeTest(const HomeTest& other);
    virtual ~HomeTest();
    HomeTest& operator=(const HomeTest& other);
    virtual HomeTest *dup() const override {return new HomeTest(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual unsigned int getHomeInitCookie() const;
    virtual void setHomeInitCookie(unsigned int homeInitCookie);

    virtual unsigned int getHomeKeyGenToken() const;
    virtual void setHomeKeyGenToken(unsigned int homeKeyGenToken);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const HomeTest& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, HomeTest& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/networklayer/xmipv6/MobilityHeader.msg:115</tt> by opp_msgtool.
 * <pre>
 * //=============Message definition of Care-of Test Init Message ==========
 * class CareOfTestInit extends MobilityHeader
 * {
 *     unsigned int careOfInitCookie;
 * }
 * </pre>
 */
class INET_API CareOfTestInit : public ::inet::MobilityHeader
{
  protected:
    unsigned int careOfInitCookie = 0;

  private:
    void copy(const CareOfTestInit& other);

  protected:
    bool operator==(const CareOfTestInit&) = delete;

  public:
    CareOfTestInit();
    CareOfTestInit(const CareOfTestInit& other);
    virtual ~CareOfTestInit();
    CareOfTestInit& operator=(const CareOfTestInit& other);
    virtual CareOfTestInit *dup() const override {return new CareOfTestInit(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual unsigned int getCareOfInitCookie() const;
    virtual void setCareOfInitCookie(unsigned int careOfInitCookie);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const CareOfTestInit& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, CareOfTestInit& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/networklayer/xmipv6/MobilityHeader.msg:121</tt> by opp_msgtool.
 * <pre>
 * //=============Message definition of Care-of Test Message ==========
 * class CareOfTest extends MobilityHeader
 * {
 *     unsigned int careOfInitCookie;
 *     unsigned int careOfKeyGenToken;
 *     // care-of nonce index not modelled
 * }
 * </pre>
 */
class INET_API CareOfTest : public ::inet::MobilityHeader
{
  protected:
    unsigned int careOfInitCookie = 0;
    unsigned int careOfKeyGenToken = 0;

  private:
    void copy(const CareOfTest& other);

  protected:
    bool operator==(const CareOfTest&) = delete;

  public:
    CareOfTest();
    CareOfTest(const CareOfTest& other);
    virtual ~CareOfTest();
    CareOfTest& operator=(const CareOfTest& other);
    virtual CareOfTest *dup() const override {return new CareOfTest(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual unsigned int getCareOfInitCookie() const;
    virtual void setCareOfInitCookie(unsigned int careOfInitCookie);

    virtual unsigned int getCareOfKeyGenToken() const;
    virtual void setCareOfKeyGenToken(unsigned int careOfKeyGenToken);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const CareOfTest& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, CareOfTest& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/networklayer/xmipv6/MobilityHeader.msg:131</tt> by opp_msgtool.
 * <pre>
 * ///////////////////////////////////////////
 * // 18.09.07 - CB
 * ///////////////////////////////////////////
 * class BindingRefreshRequest extends MobilityHeader
 * {
 * }
 * </pre>
 */
class INET_API BindingRefreshRequest : public ::inet::MobilityHeader
{
  protected:

  private:
    void copy(const BindingRefreshRequest& other);

  protected:
    bool operator==(const BindingRefreshRequest&) = delete;

  public:
    BindingRefreshRequest();
    BindingRefreshRequest(const BindingRefreshRequest& other);
    virtual ~BindingRefreshRequest();
    BindingRefreshRequest& operator=(const BindingRefreshRequest& other);
    virtual BindingRefreshRequest *dup() const override {return new BindingRefreshRequest(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const BindingRefreshRequest& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, BindingRefreshRequest& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/networklayer/xmipv6/MobilityHeader.msg:138</tt> by opp_msgtool.
 * <pre>
 * ///////////////////////////////////////////
 * // 17.10.07 - CB
 * ///////////////////////////////////////////
 * class HomeAddressOption extends Ipv6DestinationOptionsHeader
 * {
 *     Ipv6Address homeAddress;
 * }
 * </pre>
 */
class INET_API HomeAddressOption : public ::inet::Ipv6DestinationOptionsHeader
{
  protected:
    Ipv6Address homeAddress;

  private:
    void copy(const HomeAddressOption& other);

  protected:
    bool operator==(const HomeAddressOption&) = delete;

  public:
    HomeAddressOption();
    HomeAddressOption(const HomeAddressOption& other);
    virtual ~HomeAddressOption();
    HomeAddressOption& operator=(const HomeAddressOption& other);
    virtual HomeAddressOption *dup() const override {return new HomeAddressOption(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual const Ipv6Address& getHomeAddress() const;
    virtual Ipv6Address& getHomeAddressForUpdate() { return const_cast<Ipv6Address&>(const_cast<HomeAddressOption*>(this)->getHomeAddress());}
    virtual void setHomeAddress(const Ipv6Address& homeAddress);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const HomeAddressOption& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, HomeAddressOption& obj) {obj.parsimUnpack(b);}


}  // namespace inet


namespace omnetpp {

template<> inline inet::MobilityHeader *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::MobilityHeader*>(ptr.get<cObject>()); }
template<> inline inet::BindingUpdate *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::BindingUpdate*>(ptr.get<cObject>()); }
template<> inline inet::BindingAcknowledgement *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::BindingAcknowledgement*>(ptr.get<cObject>()); }
template<> inline inet::BindingError *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::BindingError*>(ptr.get<cObject>()); }
template<> inline inet::HomeTestInit *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::HomeTestInit*>(ptr.get<cObject>()); }
template<> inline inet::HomeTest *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::HomeTest*>(ptr.get<cObject>()); }
template<> inline inet::CareOfTestInit *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::CareOfTestInit*>(ptr.get<cObject>()); }
template<> inline inet::CareOfTest *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::CareOfTest*>(ptr.get<cObject>()); }
template<> inline inet::BindingRefreshRequest *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::BindingRefreshRequest*>(ptr.get<cObject>()); }
template<> inline inet::HomeAddressOption *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::HomeAddressOption*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __INET_MOBILITYHEADER_M_H

