//
// Generated file, do not edit! Created by nedtool 4.6 from src/node/communication/routing/gpsrRouting/GpsrRoutingPacket.msg.
//

#ifndef _GPSRROUTINGPACKET_M_H_
#define _GPSRROUTINGPACKET_M_H_

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
 * Enum generated from <tt>src/node/communication/routing/gpsrRouting/GpsrRoutingPacket.msg:11</tt> by nedtool.
 * <pre>
 * enum GpsrForwardingMode
 * {
 * 
 *     GPSR_GREEDY_ROUTING = 0;
 *     GPSR_PERIMETER_ROUTING = 1;
 * }
 * </pre>
 */
enum GpsrForwardingMode {
    GPSR_GREEDY_ROUTING = 0,
    GPSR_PERIMETER_ROUTING = 1
};

/**
 * Enum generated from <tt>src/node/communication/routing/gpsrRouting/GpsrRoutingPacket.msg:16</tt> by nedtool.
 * <pre>
 * enum GpsrPacketDef
 * {
 * 
 *     GPSR_DATA_PACKET = 0;       // data packet
 *     GPSR_HELLO_MSG_PACKET = 1;      // hello msg
 *     GPSR_REP_HELLO_MSG_PACKET = 2;     // rep hello msg 
 *     GPSR_SINK_ADDRESS_PACKET = 3;    // sink address
 * }
 * </pre>
 */
enum GpsrPacketDef {
    GPSR_DATA_PACKET = 0,
    GPSR_HELLO_MSG_PACKET = 1,
    GPSR_REP_HELLO_MSG_PACKET = 2,
    GPSR_SINK_ADDRESS_PACKET = 3
};

/**
 * Class generated from <tt>src/node/communication/routing/gpsrRouting/GpsrRoutingPacket.msg:23</tt> by nedtool.
 * <pre>
 * packet GpsrPacket extends RoutingPacket
 * {
 *     int GpsrPacketKind @enum(GpsrPacketDef);
 *     int routingMode @enum(GpsrForwardingMode);
 * 
 *     double destX;	// for the sink when it is a data message
 *     double destY;
 * 
 *     Point destLocation;
 * 
 *     // for hello message
 *     double helloX;
 *     double helloY;
 *     Point helloLocation;
 * }
 * </pre>
 */
class GpsrPacket : public ::RoutingPacket
{
  protected:
    int GpsrPacketKind_var;
    int routingMode_var;
    double destX_var;
    double destY_var;
    Point destLocation_var;
    double helloX_var;
    double helloY_var;
    Point helloLocation_var;

  private:
    void copy(const GpsrPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const GpsrPacket&);

  public:
    GpsrPacket(const char *name=NULL, int kind=0);
    GpsrPacket(const GpsrPacket& other);
    virtual ~GpsrPacket();
    GpsrPacket& operator=(const GpsrPacket& other);
    virtual GpsrPacket *dup() const {return new GpsrPacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getGpsrPacketKind() const;
    virtual void setGpsrPacketKind(int GpsrPacketKind);
    virtual int getRoutingMode() const;
    virtual void setRoutingMode(int routingMode);
    virtual double getDestX() const;
    virtual void setDestX(double destX);
    virtual double getDestY() const;
    virtual void setDestY(double destY);
    virtual Point& getDestLocation();
    virtual const Point& getDestLocation() const {return const_cast<GpsrPacket*>(this)->getDestLocation();}
    virtual void setDestLocation(const Point& destLocation);
    virtual double getHelloX() const;
    virtual void setHelloX(double helloX);
    virtual double getHelloY() const;
    virtual void setHelloY(double helloY);
    virtual Point& getHelloLocation();
    virtual const Point& getHelloLocation() const {return const_cast<GpsrPacket*>(this)->getHelloLocation();}
    virtual void setHelloLocation(const Point& helloLocation);
};

inline void doPacking(cCommBuffer *b, GpsrPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, GpsrPacket& obj) {obj.parsimUnpack(b);}


#endif // ifndef _GPSRROUTINGPACKET_M_H_

