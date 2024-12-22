//
// Generated file, do not edit! Created by opp_msgtool 6.1 from inet/transportlayer/tcp/flavours/TcpWestwoodState.msg.
//

#ifndef __INET__TCP_TCPWESTWOODSTATE_M_H
#define __INET__TCP_TCPWESTWOODSTATE_M_H

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
namespace tcp {

struct TcpWestwoodStateVariables;

}  // namespace tcp
}  // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/transportlayer/tcp/flavours/TcpBaseAlgState_m.h" // import inet.transportlayer.tcp.flavours.TcpBaseAlgState

#include "inet/transportlayer/tcp/flavours/TcpSegmentTransmitInfoList_m.h" // import inet.transportlayer.tcp.flavours.TcpSegmentTransmitInfoList


namespace inet {
namespace tcp {

/**
 * Struct generated from inet/transportlayer/tcp/flavours/TcpWestwoodState.msg:18 by opp_msgtool.
 */
struct INET_API TcpWestwoodStateVariables : ::inet::tcp::TcpBaseAlgStateVariables
{
    TcpWestwoodStateVariables();
    uint32_t ssthresh = 65535;
    ::omnetpp::simtime_t w_RTTmin = SIMTIME_MAX;
    double w_a = 1.0;
    ::omnetpp::simtime_t w_lastAckTime = SIMTIME_ZERO;
    double w_bwe = 0.0;
    double w_sample_bwe = 0.0;
    TcpSegmentTransmitInfoList regions;

  public:
    virtual std::string str() const override;
    virtual std::string detailedInfo() const override;
};

// helpers for local use
void INET_API __doPacking(omnetpp::cCommBuffer *b, const TcpWestwoodStateVariables& a);
void INET_API __doUnpacking(omnetpp::cCommBuffer *b, TcpWestwoodStateVariables& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TcpWestwoodStateVariables& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TcpWestwoodStateVariables& obj) { __doUnpacking(b, obj); }


}  // namespace tcp
}  // namespace inet


namespace omnetpp {

template<> inet::tcp::TcpWestwoodStateVariables *fromAnyPtr(any_ptr ptr);

}  // namespace omnetpp

#endif // ifndef __INET__TCP_TCPWESTWOODSTATE_M_H

