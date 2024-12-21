//
// Generated file, do not edit! Created by opp_msgtool 6.1 from inet/protocolelement/fragmentation/tag/FragmentTag.msg.
//

#ifndef __INET_FRAGMENTTAG_M_H
#define __INET_FRAGMENTTAG_M_H

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

class FragmentTag;

}  // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/common/TagBase_m.h" // import inet.common.TagBase


namespace inet {

/**
 * Class generated from <tt>inet/protocolelement/fragmentation/tag/FragmentTag.msg:13</tt> by opp_msgtool.
 * <pre>
 * class FragmentTag extends TagBase
 * {
 *     bool firstFragment = true;
 *     bool lastFragment = true;
 *     int fragmentNumber = 0; // -1 means unspecified
 *     int numFragments = 1;   // -1 means unspecified
 * }
 * </pre>
 */
class INET_API FragmentTag : public ::inet::TagBase
{
  protected:
    bool firstFragment = true;
    bool lastFragment = true;
    int fragmentNumber = 0;
    int numFragments = 1;

  private:
    void copy(const FragmentTag& other);

  protected:
    bool operator==(const FragmentTag&) = delete;

  public:
    FragmentTag();
    FragmentTag(const FragmentTag& other);
    virtual ~FragmentTag();
    FragmentTag& operator=(const FragmentTag& other);
    virtual FragmentTag *dup() const override {return new FragmentTag(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual bool getFirstFragment() const;
    virtual void setFirstFragment(bool firstFragment);

    virtual bool getLastFragment() const;
    virtual void setLastFragment(bool lastFragment);

    virtual int getFragmentNumber() const;
    virtual void setFragmentNumber(int fragmentNumber);

    virtual int getNumFragments() const;
    virtual void setNumFragments(int numFragments);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const FragmentTag& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, FragmentTag& obj) {obj.parsimUnpack(b);}


}  // namespace inet


namespace omnetpp {

template<> inline inet::FragmentTag *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::FragmentTag*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __INET_FRAGMENTTAG_M_H

