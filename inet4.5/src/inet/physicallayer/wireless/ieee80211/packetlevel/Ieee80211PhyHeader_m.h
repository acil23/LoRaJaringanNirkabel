//
// Generated file, do not edit! Created by opp_msgtool 6.1 from inet/physicallayer/wireless/ieee80211/packetlevel/Ieee80211PhyHeader.msg.
//

#ifndef __INET__PHYSICALLAYER_IEEE80211PHYHEADER_M_H
#define __INET__PHYSICALLAYER_IEEE80211PHYHEADER_M_H

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
namespace physicallayer {

class Ieee80211PhyPreamble;
class Ieee80211PhyHeader;
class Ieee80211FhssPhyPreamble;
class Ieee80211FhssPhyHeader;
class Ieee80211IrPhyPreamble;
class Ieee80211IrPhyHeader;
class Ieee80211DsssPhyPreamble;
class Ieee80211DsssPhyHeader;
class Ieee80211HrDsssPhyPreamble;
class Ieee80211HrDsssPhyHeader;
class Ieee80211OfdmPhyPreamble;
class Ieee80211OfdmPhyHeader;
class Ieee80211ErpOfdmPhyPreamble;
class Ieee80211ErpOfdmPhyHeader;
class Ieee80211HtPhyPreamble;
class Ieee80211HtPhyHeader;
class Ieee80211VhtPhyPreamble;
class Ieee80211VhtPhyHeader;

}  // namespace physicallayer
}  // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/common/packet/chunk/Chunk_m.h" // import inet.common.packet.chunk.Chunk

#include "inet/transportlayer/common/CrcMode_m.h" // import inet.transportlayer.common.CrcMode


namespace inet {
namespace physicallayer {

/**
 * Class generated from <tt>inet/physicallayer/wireless/ieee80211/packetlevel/Ieee80211PhyHeader.msg:14</tt> by opp_msgtool.
 * <pre>
 * class Ieee80211PhyPreamble extends FieldsChunk
 * {
 * }
 * </pre>
 */
class INET_API Ieee80211PhyPreamble : public ::inet::FieldsChunk
{
  protected:

  private:
    void copy(const Ieee80211PhyPreamble& other);

  protected:
    bool operator==(const Ieee80211PhyPreamble&) = delete;

  public:
    Ieee80211PhyPreamble();
    Ieee80211PhyPreamble(const Ieee80211PhyPreamble& other);
    virtual ~Ieee80211PhyPreamble();
    Ieee80211PhyPreamble& operator=(const Ieee80211PhyPreamble& other);
    virtual Ieee80211PhyPreamble *dup() const override {return new Ieee80211PhyPreamble(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Ieee80211PhyPreamble& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Ieee80211PhyPreamble& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/physicallayer/wireless/ieee80211/packetlevel/Ieee80211PhyHeader.msg:18</tt> by opp_msgtool.
 * <pre>
 * class Ieee80211PhyHeader extends FieldsChunk
 * {
 *     // TODO remove this, because not all subtypes have lengthField
 *     B lengthField;
 * }
 * </pre>
 */
class INET_API Ieee80211PhyHeader : public ::inet::FieldsChunk
{
  protected:
    ::inet::B lengthField = B(-1);

  private:
    void copy(const Ieee80211PhyHeader& other);

  protected:
    bool operator==(const Ieee80211PhyHeader&) = delete;

  public:
    Ieee80211PhyHeader();
    Ieee80211PhyHeader(const Ieee80211PhyHeader& other);
    virtual ~Ieee80211PhyHeader();
    Ieee80211PhyHeader& operator=(const Ieee80211PhyHeader& other);
    virtual Ieee80211PhyHeader *dup() const override {return new Ieee80211PhyHeader(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual ::inet::B getLengthField() const;
    virtual void setLengthField(::inet::B lengthField);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Ieee80211PhyHeader& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Ieee80211PhyHeader& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/physicallayer/wireless/ieee80211/packetlevel/Ieee80211PhyHeader.msg:27</tt> by opp_msgtool.
 * <pre>
 * //
 * // IEEE 802.11 14. Frequency-Hopping spread spectrum (FHSS)
 * //
 * class Ieee80211FhssPhyPreamble extends Ieee80211PhyPreamble
 * {
 *     chunkLength = b(96);
 * }
 * </pre>
 */
class INET_API Ieee80211FhssPhyPreamble : public ::inet::physicallayer::Ieee80211PhyPreamble
{
  protected:

  private:
    void copy(const Ieee80211FhssPhyPreamble& other);

  protected:
    bool operator==(const Ieee80211FhssPhyPreamble&) = delete;

  public:
    Ieee80211FhssPhyPreamble();
    Ieee80211FhssPhyPreamble(const Ieee80211FhssPhyPreamble& other);
    virtual ~Ieee80211FhssPhyPreamble();
    Ieee80211FhssPhyPreamble& operator=(const Ieee80211FhssPhyPreamble& other);
    virtual Ieee80211FhssPhyPreamble *dup() const override {return new Ieee80211FhssPhyPreamble(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Ieee80211FhssPhyPreamble& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Ieee80211FhssPhyPreamble& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/physicallayer/wireless/ieee80211/packetlevel/Ieee80211PhyHeader.msg:32</tt> by opp_msgtool.
 * <pre>
 * class Ieee80211FhssPhyHeader extends Ieee80211PhyHeader
 * {
 *     chunkLength = b(32);
 *     uint16_t plw;
 *     uint8_t psf;
 *     uint16_t crc;
 *     CrcMode crcMode = CRC_MODE_UNDEFINED;
 * }
 * </pre>
 */
class INET_API Ieee80211FhssPhyHeader : public ::inet::physicallayer::Ieee80211PhyHeader
{
  protected:
    uint16_t plw = 0;
    uint8_t psf = 0;
    uint16_t crc = 0;
    ::inet::CrcMode crcMode = CRC_MODE_UNDEFINED;

  private:
    void copy(const Ieee80211FhssPhyHeader& other);

  protected:
    bool operator==(const Ieee80211FhssPhyHeader&) = delete;

  public:
    Ieee80211FhssPhyHeader();
    Ieee80211FhssPhyHeader(const Ieee80211FhssPhyHeader& other);
    virtual ~Ieee80211FhssPhyHeader();
    Ieee80211FhssPhyHeader& operator=(const Ieee80211FhssPhyHeader& other);
    virtual Ieee80211FhssPhyHeader *dup() const override {return new Ieee80211FhssPhyHeader(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual uint16_t getPlw() const;
    virtual void setPlw(uint16_t plw);

    virtual uint8_t getPsf() const;
    virtual void setPsf(uint8_t psf);

    virtual uint16_t getCrc() const;
    virtual void setCrc(uint16_t crc);

    virtual ::inet::CrcMode getCrcMode() const;
    virtual void setCrcMode(::inet::CrcMode crcMode);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Ieee80211FhssPhyHeader& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Ieee80211FhssPhyHeader& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/physicallayer/wireless/ieee80211/packetlevel/Ieee80211PhyHeader.msg:44</tt> by opp_msgtool.
 * <pre>
 * //
 * // IEEE 802.11 15. Infrared (IR) PHY
 * //
 * class Ieee80211IrPhyPreamble extends Ieee80211PhyPreamble
 * {
 * }
 * </pre>
 */
class INET_API Ieee80211IrPhyPreamble : public ::inet::physicallayer::Ieee80211PhyPreamble
{
  protected:

  private:
    void copy(const Ieee80211IrPhyPreamble& other);

  protected:
    bool operator==(const Ieee80211IrPhyPreamble&) = delete;

  public:
    Ieee80211IrPhyPreamble();
    Ieee80211IrPhyPreamble(const Ieee80211IrPhyPreamble& other);
    virtual ~Ieee80211IrPhyPreamble();
    Ieee80211IrPhyPreamble& operator=(const Ieee80211IrPhyPreamble& other);
    virtual Ieee80211IrPhyPreamble *dup() const override {return new Ieee80211IrPhyPreamble(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Ieee80211IrPhyPreamble& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Ieee80211IrPhyPreamble& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/physicallayer/wireless/ieee80211/packetlevel/Ieee80211PhyHeader.msg:48</tt> by opp_msgtool.
 * <pre>
 * class Ieee80211IrPhyHeader extends Ieee80211PhyHeader
 * {
 *     // TODO B lengthField;
 *     uint16_t crc;
 *     CrcMode crcMode = CRC_MODE_UNDEFINED;
 * }
 * </pre>
 */
class INET_API Ieee80211IrPhyHeader : public ::inet::physicallayer::Ieee80211PhyHeader
{
  protected:
    uint16_t crc = 0;
    ::inet::CrcMode crcMode = CRC_MODE_UNDEFINED;

  private:
    void copy(const Ieee80211IrPhyHeader& other);

  protected:
    bool operator==(const Ieee80211IrPhyHeader&) = delete;

  public:
    Ieee80211IrPhyHeader();
    Ieee80211IrPhyHeader(const Ieee80211IrPhyHeader& other);
    virtual ~Ieee80211IrPhyHeader();
    Ieee80211IrPhyHeader& operator=(const Ieee80211IrPhyHeader& other);
    virtual Ieee80211IrPhyHeader *dup() const override {return new Ieee80211IrPhyHeader(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual uint16_t getCrc() const;
    virtual void setCrc(uint16_t crc);

    virtual ::inet::CrcMode getCrcMode() const;
    virtual void setCrcMode(::inet::CrcMode crcMode);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Ieee80211IrPhyHeader& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Ieee80211IrPhyHeader& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/physicallayer/wireless/ieee80211/packetlevel/Ieee80211PhyHeader.msg:58</tt> by opp_msgtool.
 * <pre>
 * //
 * // IEEE 802.11 16. DSSS PHY
 * //
 * class Ieee80211DsssPhyPreamble extends Ieee80211PhyPreamble
 * {
 *     chunkLength = b(144);
 * }
 * </pre>
 */
class INET_API Ieee80211DsssPhyPreamble : public ::inet::physicallayer::Ieee80211PhyPreamble
{
  protected:

  private:
    void copy(const Ieee80211DsssPhyPreamble& other);

  protected:
    bool operator==(const Ieee80211DsssPhyPreamble&) = delete;

  public:
    Ieee80211DsssPhyPreamble();
    Ieee80211DsssPhyPreamble(const Ieee80211DsssPhyPreamble& other);
    virtual ~Ieee80211DsssPhyPreamble();
    Ieee80211DsssPhyPreamble& operator=(const Ieee80211DsssPhyPreamble& other);
    virtual Ieee80211DsssPhyPreamble *dup() const override {return new Ieee80211DsssPhyPreamble(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Ieee80211DsssPhyPreamble& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Ieee80211DsssPhyPreamble& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/physicallayer/wireless/ieee80211/packetlevel/Ieee80211PhyHeader.msg:63</tt> by opp_msgtool.
 * <pre>
 * class Ieee80211DsssPhyHeader extends Ieee80211PhyHeader
 * {
 *     chunkLength = b(32);
 *     uint8_t signal;
 *     uint8_t service;
 *     // TODO B lengthField;
 *     uint16_t crc;
 *     CrcMode crcMode = CRC_MODE_UNDEFINED;
 * }
 * </pre>
 */
class INET_API Ieee80211DsssPhyHeader : public ::inet::physicallayer::Ieee80211PhyHeader
{
  protected:
    uint8_t signal = 0;
    uint8_t service = 0;
    uint16_t crc = 0;
    ::inet::CrcMode crcMode = CRC_MODE_UNDEFINED;

  private:
    void copy(const Ieee80211DsssPhyHeader& other);

  protected:
    bool operator==(const Ieee80211DsssPhyHeader&) = delete;

  public:
    Ieee80211DsssPhyHeader();
    Ieee80211DsssPhyHeader(const Ieee80211DsssPhyHeader& other);
    virtual ~Ieee80211DsssPhyHeader();
    Ieee80211DsssPhyHeader& operator=(const Ieee80211DsssPhyHeader& other);
    virtual Ieee80211DsssPhyHeader *dup() const override {return new Ieee80211DsssPhyHeader(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual uint8_t getSignal() const;
    virtual void setSignal(uint8_t signal);

    virtual uint8_t getService() const;
    virtual void setService(uint8_t service);

    virtual uint16_t getCrc() const;
    virtual void setCrc(uint16_t crc);

    virtual ::inet::CrcMode getCrcMode() const;
    virtual void setCrcMode(::inet::CrcMode crcMode);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Ieee80211DsssPhyHeader& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Ieee80211DsssPhyHeader& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/physicallayer/wireless/ieee80211/packetlevel/Ieee80211PhyHeader.msg:76</tt> by opp_msgtool.
 * <pre>
 * //
 * // IEEE 802.11 17. High Rate direct sequence spread spectrum (HR/DSSS)
 * //
 * class Ieee80211HrDsssPhyPreamble extends Ieee80211DsssPhyPreamble
 * {
 * }
 * </pre>
 */
class INET_API Ieee80211HrDsssPhyPreamble : public ::inet::physicallayer::Ieee80211DsssPhyPreamble
{
  protected:

  private:
    void copy(const Ieee80211HrDsssPhyPreamble& other);

  protected:
    bool operator==(const Ieee80211HrDsssPhyPreamble&) = delete;

  public:
    Ieee80211HrDsssPhyPreamble();
    Ieee80211HrDsssPhyPreamble(const Ieee80211HrDsssPhyPreamble& other);
    virtual ~Ieee80211HrDsssPhyPreamble();
    Ieee80211HrDsssPhyPreamble& operator=(const Ieee80211HrDsssPhyPreamble& other);
    virtual Ieee80211HrDsssPhyPreamble *dup() const override {return new Ieee80211HrDsssPhyPreamble(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Ieee80211HrDsssPhyPreamble& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Ieee80211HrDsssPhyPreamble& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/physicallayer/wireless/ieee80211/packetlevel/Ieee80211PhyHeader.msg:80</tt> by opp_msgtool.
 * <pre>
 * class Ieee80211HrDsssPhyHeader extends Ieee80211DsssPhyHeader
 * {
 * }
 * </pre>
 */
class INET_API Ieee80211HrDsssPhyHeader : public ::inet::physicallayer::Ieee80211DsssPhyHeader
{
  protected:

  private:
    void copy(const Ieee80211HrDsssPhyHeader& other);

  protected:
    bool operator==(const Ieee80211HrDsssPhyHeader&) = delete;

  public:
    Ieee80211HrDsssPhyHeader();
    Ieee80211HrDsssPhyHeader(const Ieee80211HrDsssPhyHeader& other);
    virtual ~Ieee80211HrDsssPhyHeader();
    Ieee80211HrDsssPhyHeader& operator=(const Ieee80211HrDsssPhyHeader& other);
    virtual Ieee80211HrDsssPhyHeader *dup() const override {return new Ieee80211HrDsssPhyHeader(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Ieee80211HrDsssPhyHeader& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Ieee80211HrDsssPhyHeader& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/physicallayer/wireless/ieee80211/packetlevel/Ieee80211PhyHeader.msg:87</tt> by opp_msgtool.
 * <pre>
 * //
 * // IEEE 802.11 18. Orthogonal frequency division multiplexing (OFDM)
 * //
 * class Ieee80211OfdmPhyPreamble extends Ieee80211PhyPreamble
 * {
 * }
 * </pre>
 */
class INET_API Ieee80211OfdmPhyPreamble : public ::inet::physicallayer::Ieee80211PhyPreamble
{
  protected:

  private:
    void copy(const Ieee80211OfdmPhyPreamble& other);

  protected:
    bool operator==(const Ieee80211OfdmPhyPreamble&) = delete;

  public:
    Ieee80211OfdmPhyPreamble();
    Ieee80211OfdmPhyPreamble(const Ieee80211OfdmPhyPreamble& other);
    virtual ~Ieee80211OfdmPhyPreamble();
    Ieee80211OfdmPhyPreamble& operator=(const Ieee80211OfdmPhyPreamble& other);
    virtual Ieee80211OfdmPhyPreamble *dup() const override {return new Ieee80211OfdmPhyPreamble(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Ieee80211OfdmPhyPreamble& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Ieee80211OfdmPhyPreamble& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/physicallayer/wireless/ieee80211/packetlevel/Ieee80211PhyHeader.msg:107</tt> by opp_msgtool.
 * <pre>
 * // The length field is a 12-bit integer indicates the number of
 * // octets in the PSDU that the MAC is currently requesting the PHY to
 * // transmit.
 * //
 * // The rate field (18.3.4.2 RATE field) is a 4-bit integer carries
 * // information about the modulation and coding.
 * //
 * // There are other fields which are not explicitly represented here,
 * // for e.g. Parity, Reserved, SERVICE, Pad Bits.
 * //
 * // The PSDU field must be contained as an encapsulated packet.
 * //
 * // This packet is intended to represent the whole PPDU frame in the
 * // IEEE 802.11 PHY. For detailed description, you may refer to 18.3.2 PLCP
 * // frame format, Figure 18-1—PPDU frame format in IEEE Std. 802.11-2012.
 * //
 * class Ieee80211OfdmPhyHeader extends Ieee80211PhyHeader
 * {
 *     // The PLCP header is composed of RATE (4), Reserved (1), LENGTH (12), Parity (1),
 *     // Tail (6) and SERVICE (16) fields.
 *     chunkLength = B(5);
 *     uint8_t rate;
 *     bool reserved = false;
 *     // TODO B lengthField;
 *     bool parity = false;
 *     uint8_t tail = 0;
 *     uint16_t service;
 * }
 * </pre>
 */
class INET_API Ieee80211OfdmPhyHeader : public ::inet::physicallayer::Ieee80211PhyHeader
{
  protected:
    uint8_t rate = 0;
    bool reserved = false;
    bool parity = false;
    uint8_t tail = 0;
    uint16_t service = 0;

  private:
    void copy(const Ieee80211OfdmPhyHeader& other);

  protected:
    bool operator==(const Ieee80211OfdmPhyHeader&) = delete;

  public:
    Ieee80211OfdmPhyHeader();
    Ieee80211OfdmPhyHeader(const Ieee80211OfdmPhyHeader& other);
    virtual ~Ieee80211OfdmPhyHeader();
    Ieee80211OfdmPhyHeader& operator=(const Ieee80211OfdmPhyHeader& other);
    virtual Ieee80211OfdmPhyHeader *dup() const override {return new Ieee80211OfdmPhyHeader(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual uint8_t getRate() const;
    virtual void setRate(uint8_t rate);

    virtual bool getReserved() const;
    virtual void setReserved(bool reserved);

    virtual bool getParity() const;
    virtual void setParity(bool parity);

    virtual uint8_t getTail() const;
    virtual void setTail(uint8_t tail);

    virtual uint16_t getService() const;
    virtual void setService(uint16_t service);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Ieee80211OfdmPhyHeader& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Ieee80211OfdmPhyHeader& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/physicallayer/wireless/ieee80211/packetlevel/Ieee80211PhyHeader.msg:123</tt> by opp_msgtool.
 * <pre>
 * //
 * // IEEE 802.11 19. Extended Rate PHY (ERP) OFDM
 * //
 * class Ieee80211ErpOfdmPhyPreamble extends Ieee80211OfdmPhyPreamble
 * {
 * }
 * </pre>
 */
class INET_API Ieee80211ErpOfdmPhyPreamble : public ::inet::physicallayer::Ieee80211OfdmPhyPreamble
{
  protected:

  private:
    void copy(const Ieee80211ErpOfdmPhyPreamble& other);

  protected:
    bool operator==(const Ieee80211ErpOfdmPhyPreamble&) = delete;

  public:
    Ieee80211ErpOfdmPhyPreamble();
    Ieee80211ErpOfdmPhyPreamble(const Ieee80211ErpOfdmPhyPreamble& other);
    virtual ~Ieee80211ErpOfdmPhyPreamble();
    Ieee80211ErpOfdmPhyPreamble& operator=(const Ieee80211ErpOfdmPhyPreamble& other);
    virtual Ieee80211ErpOfdmPhyPreamble *dup() const override {return new Ieee80211ErpOfdmPhyPreamble(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Ieee80211ErpOfdmPhyPreamble& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Ieee80211ErpOfdmPhyPreamble& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/physicallayer/wireless/ieee80211/packetlevel/Ieee80211PhyHeader.msg:127</tt> by opp_msgtool.
 * <pre>
 * class Ieee80211ErpOfdmPhyHeader extends Ieee80211OfdmPhyHeader
 * {
 * }
 * </pre>
 */
class INET_API Ieee80211ErpOfdmPhyHeader : public ::inet::physicallayer::Ieee80211OfdmPhyHeader
{
  protected:

  private:
    void copy(const Ieee80211ErpOfdmPhyHeader& other);

  protected:
    bool operator==(const Ieee80211ErpOfdmPhyHeader&) = delete;

  public:
    Ieee80211ErpOfdmPhyHeader();
    Ieee80211ErpOfdmPhyHeader(const Ieee80211ErpOfdmPhyHeader& other);
    virtual ~Ieee80211ErpOfdmPhyHeader();
    Ieee80211ErpOfdmPhyHeader& operator=(const Ieee80211ErpOfdmPhyHeader& other);
    virtual Ieee80211ErpOfdmPhyHeader *dup() const override {return new Ieee80211ErpOfdmPhyHeader(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Ieee80211ErpOfdmPhyHeader& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Ieee80211ErpOfdmPhyHeader& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/physicallayer/wireless/ieee80211/packetlevel/Ieee80211PhyHeader.msg:134</tt> by opp_msgtool.
 * <pre>
 * //
 * // IEEE 802.11 20. High Throughput (HT)
 * //
 * class Ieee80211HtPhyPreamble extends Ieee80211PhyPreamble
 * {
 * }
 * </pre>
 */
class INET_API Ieee80211HtPhyPreamble : public ::inet::physicallayer::Ieee80211PhyPreamble
{
  protected:

  private:
    void copy(const Ieee80211HtPhyPreamble& other);

  protected:
    bool operator==(const Ieee80211HtPhyPreamble&) = delete;

  public:
    Ieee80211HtPhyPreamble();
    Ieee80211HtPhyPreamble(const Ieee80211HtPhyPreamble& other);
    virtual ~Ieee80211HtPhyPreamble();
    Ieee80211HtPhyPreamble& operator=(const Ieee80211HtPhyPreamble& other);
    virtual Ieee80211HtPhyPreamble *dup() const override {return new Ieee80211HtPhyPreamble(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Ieee80211HtPhyPreamble& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Ieee80211HtPhyPreamble& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/physicallayer/wireless/ieee80211/packetlevel/Ieee80211PhyHeader.msg:138</tt> by opp_msgtool.
 * <pre>
 * class Ieee80211HtPhyHeader extends Ieee80211PhyHeader
 * {
 * }
 * </pre>
 */
class INET_API Ieee80211HtPhyHeader : public ::inet::physicallayer::Ieee80211PhyHeader
{
  protected:

  private:
    void copy(const Ieee80211HtPhyHeader& other);

  protected:
    bool operator==(const Ieee80211HtPhyHeader&) = delete;

  public:
    Ieee80211HtPhyHeader();
    Ieee80211HtPhyHeader(const Ieee80211HtPhyHeader& other);
    virtual ~Ieee80211HtPhyHeader();
    Ieee80211HtPhyHeader& operator=(const Ieee80211HtPhyHeader& other);
    virtual Ieee80211HtPhyHeader *dup() const override {return new Ieee80211HtPhyHeader(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Ieee80211HtPhyHeader& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Ieee80211HtPhyHeader& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/physicallayer/wireless/ieee80211/packetlevel/Ieee80211PhyHeader.msg:144</tt> by opp_msgtool.
 * <pre>
 * // IEEE 802.11 21. High Throughput (VHT)
 * //
 * class Ieee80211VhtPhyPreamble extends Ieee80211PhyPreamble
 * {
 * }
 * </pre>
 */
class INET_API Ieee80211VhtPhyPreamble : public ::inet::physicallayer::Ieee80211PhyPreamble
{
  protected:

  private:
    void copy(const Ieee80211VhtPhyPreamble& other);

  protected:
    bool operator==(const Ieee80211VhtPhyPreamble&) = delete;

  public:
    Ieee80211VhtPhyPreamble();
    Ieee80211VhtPhyPreamble(const Ieee80211VhtPhyPreamble& other);
    virtual ~Ieee80211VhtPhyPreamble();
    Ieee80211VhtPhyPreamble& operator=(const Ieee80211VhtPhyPreamble& other);
    virtual Ieee80211VhtPhyPreamble *dup() const override {return new Ieee80211VhtPhyPreamble(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Ieee80211VhtPhyPreamble& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Ieee80211VhtPhyPreamble& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/physicallayer/wireless/ieee80211/packetlevel/Ieee80211PhyHeader.msg:148</tt> by opp_msgtool.
 * <pre>
 * class Ieee80211VhtPhyHeader extends Ieee80211PhyHeader
 * {
 * }
 * </pre>
 */
class INET_API Ieee80211VhtPhyHeader : public ::inet::physicallayer::Ieee80211PhyHeader
{
  protected:

  private:
    void copy(const Ieee80211VhtPhyHeader& other);

  protected:
    bool operator==(const Ieee80211VhtPhyHeader&) = delete;

  public:
    Ieee80211VhtPhyHeader();
    Ieee80211VhtPhyHeader(const Ieee80211VhtPhyHeader& other);
    virtual ~Ieee80211VhtPhyHeader();
    Ieee80211VhtPhyHeader& operator=(const Ieee80211VhtPhyHeader& other);
    virtual Ieee80211VhtPhyHeader *dup() const override {return new Ieee80211VhtPhyHeader(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Ieee80211VhtPhyHeader& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Ieee80211VhtPhyHeader& obj) {obj.parsimUnpack(b);}


}  // namespace physicallayer
}  // namespace inet


namespace omnetpp {

template<> inline inet::physicallayer::Ieee80211PhyPreamble *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::physicallayer::Ieee80211PhyPreamble*>(ptr.get<cObject>()); }
template<> inline inet::physicallayer::Ieee80211PhyHeader *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::physicallayer::Ieee80211PhyHeader*>(ptr.get<cObject>()); }
template<> inline inet::physicallayer::Ieee80211FhssPhyPreamble *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::physicallayer::Ieee80211FhssPhyPreamble*>(ptr.get<cObject>()); }
template<> inline inet::physicallayer::Ieee80211FhssPhyHeader *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::physicallayer::Ieee80211FhssPhyHeader*>(ptr.get<cObject>()); }
template<> inline inet::physicallayer::Ieee80211IrPhyPreamble *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::physicallayer::Ieee80211IrPhyPreamble*>(ptr.get<cObject>()); }
template<> inline inet::physicallayer::Ieee80211IrPhyHeader *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::physicallayer::Ieee80211IrPhyHeader*>(ptr.get<cObject>()); }
template<> inline inet::physicallayer::Ieee80211DsssPhyPreamble *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::physicallayer::Ieee80211DsssPhyPreamble*>(ptr.get<cObject>()); }
template<> inline inet::physicallayer::Ieee80211DsssPhyHeader *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::physicallayer::Ieee80211DsssPhyHeader*>(ptr.get<cObject>()); }
template<> inline inet::physicallayer::Ieee80211HrDsssPhyPreamble *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::physicallayer::Ieee80211HrDsssPhyPreamble*>(ptr.get<cObject>()); }
template<> inline inet::physicallayer::Ieee80211HrDsssPhyHeader *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::physicallayer::Ieee80211HrDsssPhyHeader*>(ptr.get<cObject>()); }
template<> inline inet::physicallayer::Ieee80211OfdmPhyPreamble *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::physicallayer::Ieee80211OfdmPhyPreamble*>(ptr.get<cObject>()); }
template<> inline inet::physicallayer::Ieee80211OfdmPhyHeader *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::physicallayer::Ieee80211OfdmPhyHeader*>(ptr.get<cObject>()); }
template<> inline inet::physicallayer::Ieee80211ErpOfdmPhyPreamble *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::physicallayer::Ieee80211ErpOfdmPhyPreamble*>(ptr.get<cObject>()); }
template<> inline inet::physicallayer::Ieee80211ErpOfdmPhyHeader *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::physicallayer::Ieee80211ErpOfdmPhyHeader*>(ptr.get<cObject>()); }
template<> inline inet::physicallayer::Ieee80211HtPhyPreamble *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::physicallayer::Ieee80211HtPhyPreamble*>(ptr.get<cObject>()); }
template<> inline inet::physicallayer::Ieee80211HtPhyHeader *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::physicallayer::Ieee80211HtPhyHeader*>(ptr.get<cObject>()); }
template<> inline inet::physicallayer::Ieee80211VhtPhyPreamble *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::physicallayer::Ieee80211VhtPhyPreamble*>(ptr.get<cObject>()); }
template<> inline inet::physicallayer::Ieee80211VhtPhyHeader *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::physicallayer::Ieee80211VhtPhyHeader*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __INET__PHYSICALLAYER_IEEE80211PHYHEADER_M_H

