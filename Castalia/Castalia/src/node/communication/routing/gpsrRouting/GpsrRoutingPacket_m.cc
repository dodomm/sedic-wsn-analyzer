//
// Generated file, do not edit! Created by nedtool 4.6 from src/node/communication/routing/gpsrRouting/GpsrRoutingPacket.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "GpsrRoutingPacket_m.h"

USING_NAMESPACE


// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




// Template rule for outputting std::vector<T> types
template<typename T, typename A>
inline std::ostream& operator<<(std::ostream& out, const std::vector<T,A>& vec)
{
    out.put('{');
    for(typename std::vector<T,A>::const_iterator it = vec.begin(); it != vec.end(); ++it)
    {
        if (it != vec.begin()) {
            out.put(','); out.put(' ');
        }
        out << *it;
    }
    out.put('}');
    
    char buf[32];
    sprintf(buf, " (size=%u)", (unsigned int)vec.size());
    out.write(buf, strlen(buf));
    return out;
}

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
inline std::ostream& operator<<(std::ostream& out,const T&) {return out;}

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("GpsrForwardingMode");
    if (!e) enums.getInstance()->add(e = new cEnum("GpsrForwardingMode"));
    e->insert(GPSR_GREEDY_ROUTING, "GPSR_GREEDY_ROUTING");
    e->insert(GPSR_PERIMETER_ROUTING, "GPSR_PERIMETER_ROUTING");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("GpsrPacketDef");
    if (!e) enums.getInstance()->add(e = new cEnum("GpsrPacketDef"));
    e->insert(GPSR_DATA_PACKET, "GPSR_DATA_PACKET");
    e->insert(GPSR_HELLO_MSG_PACKET, "GPSR_HELLO_MSG_PACKET");
    e->insert(GPSR_REP_HELLO_MSG_PACKET, "GPSR_REP_HELLO_MSG_PACKET");
    e->insert(GPSR_SINK_ADDRESS_PACKET, "GPSR_SINK_ADDRESS_PACKET");
);

Register_Class(GpsrPacket);

GpsrPacket::GpsrPacket(const char *name, int kind) : ::RoutingPacket(name,kind)
{
    this->GpsrPacketKind_var = 0;
    this->routingMode_var = 0;
    this->currentFaceFirstSender_var = 0;
    this->currentFaceFirstReceiver_var = 0;
}

GpsrPacket::GpsrPacket(const GpsrPacket& other) : ::RoutingPacket(other)
{
    copy(other);
}

GpsrPacket::~GpsrPacket()
{
}

GpsrPacket& GpsrPacket::operator=(const GpsrPacket& other)
{
    if (this==&other) return *this;
    ::RoutingPacket::operator=(other);
    copy(other);
    return *this;
}

void GpsrPacket::copy(const GpsrPacket& other)
{
    this->GpsrPacketKind_var = other.GpsrPacketKind_var;
    this->routingMode_var = other.routingMode_var;
    this->destLocation_var = other.destLocation_var;
    this->perimeterRoutingStartPosition_var = other.perimeterRoutingStartPosition_var;
    this->perimeterRoutingForwardPosition_var = other.perimeterRoutingForwardPosition_var;
    this->currentFaceFirstSender_var = other.currentFaceFirstSender_var;
    this->currentFaceFirstReceiver_var = other.currentFaceFirstReceiver_var;
    this->helloLocation_var = other.helloLocation_var;
}

void GpsrPacket::parsimPack(cCommBuffer *b)
{
    ::RoutingPacket::parsimPack(b);
    doPacking(b,this->GpsrPacketKind_var);
    doPacking(b,this->routingMode_var);
    doPacking(b,this->destLocation_var);
    doPacking(b,this->perimeterRoutingStartPosition_var);
    doPacking(b,this->perimeterRoutingForwardPosition_var);
    doPacking(b,this->currentFaceFirstSender_var);
    doPacking(b,this->currentFaceFirstReceiver_var);
    doPacking(b,this->helloLocation_var);
}

void GpsrPacket::parsimUnpack(cCommBuffer *b)
{
    ::RoutingPacket::parsimUnpack(b);
    doUnpacking(b,this->GpsrPacketKind_var);
    doUnpacking(b,this->routingMode_var);
    doUnpacking(b,this->destLocation_var);
    doUnpacking(b,this->perimeterRoutingStartPosition_var);
    doUnpacking(b,this->perimeterRoutingForwardPosition_var);
    doUnpacking(b,this->currentFaceFirstSender_var);
    doUnpacking(b,this->currentFaceFirstReceiver_var);
    doUnpacking(b,this->helloLocation_var);
}

int GpsrPacket::getGpsrPacketKind() const
{
    return GpsrPacketKind_var;
}

void GpsrPacket::setGpsrPacketKind(int GpsrPacketKind)
{
    this->GpsrPacketKind_var = GpsrPacketKind;
}

int GpsrPacket::getRoutingMode() const
{
    return routingMode_var;
}

void GpsrPacket::setRoutingMode(int routingMode)
{
    this->routingMode_var = routingMode;
}

Point& GpsrPacket::getDestLocation()
{
    return destLocation_var;
}

void GpsrPacket::setDestLocation(const Point& destLocation)
{
    this->destLocation_var = destLocation;
}

Point& GpsrPacket::getPerimeterRoutingStartPosition()
{
    return perimeterRoutingStartPosition_var;
}

void GpsrPacket::setPerimeterRoutingStartPosition(const Point& perimeterRoutingStartPosition)
{
    this->perimeterRoutingStartPosition_var = perimeterRoutingStartPosition;
}

Point& GpsrPacket::getPerimeterRoutingForwardPosition()
{
    return perimeterRoutingForwardPosition_var;
}

void GpsrPacket::setPerimeterRoutingForwardPosition(const Point& perimeterRoutingForwardPosition)
{
    this->perimeterRoutingForwardPosition_var = perimeterRoutingForwardPosition;
}

int GpsrPacket::getCurrentFaceFirstSender() const
{
    return currentFaceFirstSender_var;
}

void GpsrPacket::setCurrentFaceFirstSender(int currentFaceFirstSender)
{
    this->currentFaceFirstSender_var = currentFaceFirstSender;
}

int GpsrPacket::getCurrentFaceFirstReceiver() const
{
    return currentFaceFirstReceiver_var;
}

void GpsrPacket::setCurrentFaceFirstReceiver(int currentFaceFirstReceiver)
{
    this->currentFaceFirstReceiver_var = currentFaceFirstReceiver;
}

Point& GpsrPacket::getHelloLocation()
{
    return helloLocation_var;
}

void GpsrPacket::setHelloLocation(const Point& helloLocation)
{
    this->helloLocation_var = helloLocation;
}

class GpsrPacketDescriptor : public cClassDescriptor
{
  public:
    GpsrPacketDescriptor();
    virtual ~GpsrPacketDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(GpsrPacketDescriptor);

GpsrPacketDescriptor::GpsrPacketDescriptor() : cClassDescriptor("GpsrPacket", "RoutingPacket")
{
}

GpsrPacketDescriptor::~GpsrPacketDescriptor()
{
}

bool GpsrPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<GpsrPacket *>(obj)!=NULL;
}

const char *GpsrPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int GpsrPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 8+basedesc->getFieldCount(object) : 8;
}

unsigned int GpsrPacketDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<8) ? fieldTypeFlags[field] : 0;
}

const char *GpsrPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "GpsrPacketKind",
        "routingMode",
        "destLocation",
        "perimeterRoutingStartPosition",
        "perimeterRoutingForwardPosition",
        "currentFaceFirstSender",
        "currentFaceFirstReceiver",
        "helloLocation",
    };
    return (field>=0 && field<8) ? fieldNames[field] : NULL;
}

int GpsrPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='G' && strcmp(fieldName, "GpsrPacketKind")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "routingMode")==0) return base+1;
    if (fieldName[0]=='d' && strcmp(fieldName, "destLocation")==0) return base+2;
    if (fieldName[0]=='p' && strcmp(fieldName, "perimeterRoutingStartPosition")==0) return base+3;
    if (fieldName[0]=='p' && strcmp(fieldName, "perimeterRoutingForwardPosition")==0) return base+4;
    if (fieldName[0]=='c' && strcmp(fieldName, "currentFaceFirstSender")==0) return base+5;
    if (fieldName[0]=='c' && strcmp(fieldName, "currentFaceFirstReceiver")==0) return base+6;
    if (fieldName[0]=='h' && strcmp(fieldName, "helloLocation")==0) return base+7;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *GpsrPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "int",
        "Point",
        "Point",
        "Point",
        "int",
        "int",
        "Point",
    };
    return (field>=0 && field<8) ? fieldTypeStrings[field] : NULL;
}

const char *GpsrPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "GpsrPacketDef";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"enum")) return "GpsrForwardingMode";
            return NULL;
        default: return NULL;
    }
}

int GpsrPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    GpsrPacket *pp = (GpsrPacket *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string GpsrPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    GpsrPacket *pp = (GpsrPacket *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getGpsrPacketKind());
        case 1: return long2string(pp->getRoutingMode());
        case 2: {std::stringstream out; out << pp->getDestLocation(); return out.str();}
        case 3: {std::stringstream out; out << pp->getPerimeterRoutingStartPosition(); return out.str();}
        case 4: {std::stringstream out; out << pp->getPerimeterRoutingForwardPosition(); return out.str();}
        case 5: return long2string(pp->getCurrentFaceFirstSender());
        case 6: return long2string(pp->getCurrentFaceFirstReceiver());
        case 7: {std::stringstream out; out << pp->getHelloLocation(); return out.str();}
        default: return "";
    }
}

bool GpsrPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    GpsrPacket *pp = (GpsrPacket *)object; (void)pp;
    switch (field) {
        case 0: pp->setGpsrPacketKind(string2long(value)); return true;
        case 1: pp->setRoutingMode(string2long(value)); return true;
        case 5: pp->setCurrentFaceFirstSender(string2long(value)); return true;
        case 6: pp->setCurrentFaceFirstReceiver(string2long(value)); return true;
        default: return false;
    }
}

const char *GpsrPacketDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2: return opp_typename(typeid(Point));
        case 3: return opp_typename(typeid(Point));
        case 4: return opp_typename(typeid(Point));
        case 7: return opp_typename(typeid(Point));
        default: return NULL;
    };
}

void *GpsrPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    GpsrPacket *pp = (GpsrPacket *)object; (void)pp;
    switch (field) {
        case 2: return (void *)(&pp->getDestLocation()); break;
        case 3: return (void *)(&pp->getPerimeterRoutingStartPosition()); break;
        case 4: return (void *)(&pp->getPerimeterRoutingForwardPosition()); break;
        case 7: return (void *)(&pp->getHelloLocation()); break;
        default: return NULL;
    }
}


