//
// Generated file, do not edit! Created by opp_msgtool 6.1 from inet/common/TlvOptions.msg.
//

#ifndef __INET_TLVOPTIONS_M_H
#define __INET_TLVOPTIONS_M_H

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

class TlvOptionBase;
class TlvOptionRaw;
class TlvOptions;

}  // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs


namespace inet {

/**
 * Class generated from <tt>inet/common/TlvOptions.msg:12</tt> by opp_msgtool.
 * <pre>
 * class TlvOptionBase extends cObject
 * {
 *     \@packetData;
 *     short type = -1;
 *     short length = 0;   // total length of option
 * }
 * </pre>
 */
class INET_API TlvOptionBase : public ::omnetpp::cObject
{
  protected:
    short type = -1;
    short length = 0;

  private:
    void copy(const TlvOptionBase& other);

  protected:
    bool operator==(const TlvOptionBase&) = delete;

  public:
    TlvOptionBase();
    TlvOptionBase(const TlvOptionBase& other);
    virtual ~TlvOptionBase();
    TlvOptionBase& operator=(const TlvOptionBase& other);
    virtual TlvOptionBase *dup() const override {return new TlvOptionBase(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual short getType() const;
    virtual void setType(short type);

    virtual short getLength() const;
    virtual void setLength(short length);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TlvOptionBase& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TlvOptionBase& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/common/TlvOptions.msg:19</tt> by opp_msgtool.
 * <pre>
 * class TlvOptionRaw extends TlvOptionBase
 * {
 *     char bytes[];
 * }
 * </pre>
 */
class INET_API TlvOptionRaw : public ::inet::TlvOptionBase
{
  protected:
    char *bytes = nullptr;
    size_t bytes_arraysize = 0;

  private:
    void copy(const TlvOptionRaw& other);

  protected:
    bool operator==(const TlvOptionRaw&) = delete;

  public:
    TlvOptionRaw();
    TlvOptionRaw(const TlvOptionRaw& other);
    virtual ~TlvOptionRaw();
    TlvOptionRaw& operator=(const TlvOptionRaw& other);
    virtual TlvOptionRaw *dup() const override {return new TlvOptionRaw(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual void setBytesArraySize(size_t size);
    virtual size_t getBytesArraySize() const;
    virtual char getBytes(size_t k) const;
    virtual void setBytes(size_t k, char bytes);
    virtual void insertBytes(size_t k, char bytes);
    [[deprecated]] void insertBytes(char bytes) {appendBytes(bytes);}
    virtual void appendBytes(char bytes);
    virtual void eraseBytes(size_t k);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TlvOptionRaw& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TlvOptionRaw& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/common/TlvOptions.msg:24</tt> by opp_msgtool.
 * <pre>
 * class TlvOptions extends cObject
 * {
 *     \@packetData;
 *     TlvOptionBase *tlvOption[] \@owned;
 * }
 * </pre>
 */
class INET_API TlvOptions : public ::omnetpp::cObject
{
  protected:
    TlvOptionBase * *tlvOption = nullptr;
    size_t tlvOption_arraysize = 0;

  private:
    void copy(const TlvOptions& other);

  protected:
    bool operator==(const TlvOptions&) = delete;

  public:
    TlvOptions();
    TlvOptions(const TlvOptions& other);
    virtual ~TlvOptions();
    TlvOptions& operator=(const TlvOptions& other);
    virtual TlvOptions *dup() const override {return new TlvOptions(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual void setTlvOptionArraySize(size_t size);
    virtual size_t getTlvOptionArraySize() const;
    virtual const TlvOptionBase * getTlvOption(size_t k) const;
    virtual TlvOptionBase * getTlvOptionForUpdate(size_t k) { return const_cast<TlvOptionBase *>(const_cast<TlvOptions*>(this)->getTlvOption(k));}
    virtual void setTlvOption(size_t k, TlvOptionBase * tlvOption);
    virtual TlvOptionBase * removeTlvOption(size_t k);
    [[deprecated]] TlvOptionBase * dropTlvOption(size_t k) {return removeTlvOption(k);}
    virtual void insertTlvOption(size_t k, TlvOptionBase * tlvOption);
    [[deprecated]] void insertTlvOption(TlvOptionBase * tlvOption) {appendTlvOption(tlvOption);}
    virtual void appendTlvOption(TlvOptionBase * tlvOption);
    virtual void eraseTlvOption(size_t k);


  public:
    /*
     * Removes option from optionVector and returns option when removed, otherwise returns nullptr.
     */
    TlvOptionBase *dropTlvOption(TlvOptionBase *option);

    /*
     * Removes all options or first only option where type is the specified type.
     */
    void deleteOptionByType(int type, bool firstOnly = true);

    /*
     * Calculate and returns the total length of all stored options in bytes
     */
    virtual int getLength() const;

    /*
     * Find the first option with specified type. Search started with element at firstPos.
     * Returns the position of found option, or return -1 if not found
     */
    int findByType(short int type, int firstPos=0) const;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TlvOptions& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TlvOptions& obj) {obj.parsimUnpack(b);}


}  // namespace inet


namespace omnetpp {

template<> inline inet::TlvOptionBase *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::TlvOptionBase*>(ptr.get<cObject>()); }
template<> inline inet::TlvOptionRaw *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::TlvOptionRaw*>(ptr.get<cObject>()); }
template<> inline inet::TlvOptions *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::TlvOptions*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __INET_TLVOPTIONS_M_H

