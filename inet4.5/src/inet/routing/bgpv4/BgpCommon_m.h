//
// Generated file, do not edit! Created by opp_msgtool 6.1 from inet/routing/bgpv4/BgpCommon.msg.
//

#ifndef __INET__BGP_BGPCOMMON_M_H
#define __INET__BGP_BGPCOMMON_M_H

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
namespace bgp {


}  // namespace bgp
}  // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs


namespace inet {
namespace bgp {

/**
 * Enum generated from <tt>inet/routing/bgpv4/BgpCommon.msg:12</tt> by opp_msgtool.
 * <pre>
 * enum BgpSessionType
 * {
 *     IGP = 0;
 *     EGP = 1;
 *     INCOMPLETE = 2;
 * }
 * </pre>
 */
enum BgpSessionType {
    IGP = 0,
    EGP = 1,
    INCOMPLETE = 2
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const BgpSessionType& e) { b->pack(static_cast<int>(e)); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, BgpSessionType& e) { int n; b->unpack(n); e = static_cast<BgpSessionType>(n); }

/**
 * Enum generated from <tt>inet/routing/bgpv4/BgpCommon.msg:19</tt> by opp_msgtool.
 * <pre>
 * enum BgpPathSegmentType
 * {
 *     AS_SET = 1;
 *     AS_SEQUENCE = 2;
 * }
 * </pre>
 */
enum BgpPathSegmentType {
    AS_SET = 1,
    AS_SEQUENCE = 2
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const BgpPathSegmentType& e) { b->pack(static_cast<int>(e)); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, BgpPathSegmentType& e) { int n; b->unpack(n); e = static_cast<BgpPathSegmentType>(n); }

/**
 * Enum generated from <tt>inet/routing/bgpv4/BgpCommon.msg:25</tt> by opp_msgtool.
 * <pre>
 * enum BgpSelfMsgKind
 * {
 *     START_EVENT_KIND = 81;
 *     CONNECT_RETRY_KIND = 82;
 *     HOLD_TIME_KIND = 83;
 *     KEEP_ALIVE_KIND = 89;
 * }
 * </pre>
 */
enum BgpSelfMsgKind {
    START_EVENT_KIND = 81,
    CONNECT_RETRY_KIND = 82,
    HOLD_TIME_KIND = 83,
    KEEP_ALIVE_KIND = 89
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const BgpSelfMsgKind& e) { b->pack(static_cast<int>(e)); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, BgpSelfMsgKind& e) { int n; b->unpack(n); e = static_cast<BgpSelfMsgKind>(n); }

/**
 * Enum generated from <tt>inet/routing/bgpv4/BgpCommon.msg:33</tt> by opp_msgtool.
 * <pre>
 * enum BgpProcessResult
 * {
 *     RESULT0 = 0;
 *     ROUTE_DESTINATION_CHANGED = 90;
 *     NEW_ROUTE_ADDED = 91;
 *     NEW_SESSION_ESTABLISHED = 92;
 *     ASLOOP_NO_DETECTED = 93;
 *     ASLOOP_DETECTED = 94;
 * }
 * </pre>
 */
enum BgpProcessResult {
    RESULT0 = 0,
    ROUTE_DESTINATION_CHANGED = 90,
    NEW_ROUTE_ADDED = 91,
    NEW_SESSION_ESTABLISHED = 92,
    ASLOOP_NO_DETECTED = 93,
    ASLOOP_DETECTED = 94
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const BgpProcessResult& e) { b->pack(static_cast<int>(e)); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, BgpProcessResult& e) { int n; b->unpack(n); e = static_cast<BgpProcessResult>(n); }


}  // namespace bgp
}  // namespace inet


namespace omnetpp {


}  // namespace omnetpp

#endif // ifndef __INET__BGP_BGPCOMMON_M_H

