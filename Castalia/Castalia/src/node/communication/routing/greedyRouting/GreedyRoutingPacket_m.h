//
// Generated file, do not edit! Created by nedtool 4.6 from src/node/communication/routing/greedyRouting/GreedyRoutingPacket.msg.
//

#ifndef _GREEDYROUTINGPACKET_M_H_
#define _GREEDYROUTINGPACKET_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
#include "RoutingPacket_m.h"
#include "GeoMathHelper.h"
// }}

/**
 * Enum generated from <tt>src/node/communication/routing/greedyRouting/GreedyRoutingPacket.msg:12</tt> by nedtool.
 * <pre>
 * enum GreedyPacketDef
 * {
 * 
 *     GREEDY_DATA_PACKET = 0;       // data packet
 *     GREEDY_HELLO_MSG_PACKET = 1;      // hello msg
 *     GREEDY_REP_HELLO_MSG_PACKET = 2;     // rep hello msg 
 *     GREEDY_SINK_ADDRESS_PACKET = 3;    // sink address
 * }
 * </pre>
 */
enum GreedyPacketDef {
    GREEDY_DATA_PACKET = 0,
    GREEDY_HELLO_MSG_PACKET = 1,
    GREEDY_REP_HELLO_MSG_PACKET = 2,
    GREEDY_SINK_ADDRESS_PACKET = 3
};

/**
 * Class generated from <tt>src/node/communication/routing/greedyRouting/GreedyRoutingPacket.msg:19</tt> by nedtool.
 * <pre>
 * packet GreedyPacket extends RoutingPacket
 * {
 *     int packetId;
 *     int GreedyPacketKind @enum(GreedyPacketDef);
 *     Point destLocation;
 * 
 *     // for hello message
 *     Point helloLocation;
 * }
 * </pre>
 */
class GreedyPacket : public ::RoutingPacket
{
  protected:
    int packetId_var;
    int GreedyPacketKind_var;
    Point destLocation_var;
    Point helloLocation_var;

  private:
    void copy(const GreedyPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const GreedyPacket&);

  public:
    GreedyPacket(const char *name=NULL, int kind=0);
    GreedyPacket(const GreedyPacket& other);
    virtual ~GreedyPacket();
    GreedyPacket& operator=(const GreedyPacket& other);
    virtual GreedyPacket *dup() const {return new GreedyPacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getPacketId() const;
    virtual void setPacketId(int packetId);
    virtual int getGreedyPacketKind() const;
    virtual void setGreedyPacketKind(int GreedyPacketKind);
    virtual Point& getDestLocation();
    virtual const Point& getDestLocation() const {return const_cast<GreedyPacket*>(this)->getDestLocation();}
    virtual void setDestLocation(const Point& destLocation);
    virtual Point& getHelloLocation();
    virtual const Point& getHelloLocation() const {return const_cast<GreedyPacket*>(this)->getHelloLocation();}
    virtual void setHelloLocation(const Point& helloLocation);
};

inline void doPacking(cCommBuffer *b, GreedyPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, GreedyPacket& obj) {obj.parsimUnpack(b);}


#endif // ifndef _GREEDYROUTINGPACKET_M_H_
