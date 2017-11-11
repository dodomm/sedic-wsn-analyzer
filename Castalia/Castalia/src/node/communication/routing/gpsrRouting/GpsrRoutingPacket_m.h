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
 *     Point previousLocation; // to determine last edge
 *     Point destLocation; // Ld
 *     Point perimeterRoutingStartPosition; // Lp
 *     Point perimeterRoutingFacePosition; // Lf
 *     int currentFaceFirstSender; // e0
 *     int currentFaceFirstReceiver; // e0
 * 
 * 
 *     // for hello message
 *     Point helloLocation;
 * }
 * </pre>
 */
class GpsrPacket : public ::RoutingPacket
{
  protected:
    int GpsrPacketKind_var;
    int routingMode_var;
    Point previousLocation_var;
    Point destLocation_var;
    Point perimeterRoutingStartPosition_var;
    Point perimeterRoutingFacePosition_var;
    int currentFaceFirstSender_var;
    int currentFaceFirstReceiver_var;
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
    virtual Point& getPreviousLocation();
    virtual const Point& getPreviousLocation() const {return const_cast<GpsrPacket*>(this)->getPreviousLocation();}
    virtual void setPreviousLocation(const Point& previousLocation);
    virtual Point& getDestLocation();
    virtual const Point& getDestLocation() const {return const_cast<GpsrPacket*>(this)->getDestLocation();}
    virtual void setDestLocation(const Point& destLocation);
    virtual Point& getPerimeterRoutingStartPosition();
    virtual const Point& getPerimeterRoutingStartPosition() const {return const_cast<GpsrPacket*>(this)->getPerimeterRoutingStartPosition();}
    virtual void setPerimeterRoutingStartPosition(const Point& perimeterRoutingStartPosition);
    virtual Point& getPerimeterRoutingFacePosition();
    virtual const Point& getPerimeterRoutingFacePosition() const {return const_cast<GpsrPacket*>(this)->getPerimeterRoutingFacePosition();}
    virtual void setPerimeterRoutingFacePosition(const Point& perimeterRoutingFacePosition);
    virtual int getCurrentFaceFirstSender() const;
    virtual void setCurrentFaceFirstSender(int currentFaceFirstSender);
    virtual int getCurrentFaceFirstReceiver() const;
    virtual void setCurrentFaceFirstReceiver(int currentFaceFirstReceiver);
    virtual Point& getHelloLocation();
    virtual const Point& getHelloLocation() const {return const_cast<GpsrPacket*>(this)->getHelloLocation();}
    virtual void setHelloLocation(const Point& helloLocation);
};

inline void doPacking(cCommBuffer *b, GpsrPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, GpsrPacket& obj) {obj.parsimUnpack(b);}


#endif // ifndef _GPSRROUTINGPACKET_M_H_

