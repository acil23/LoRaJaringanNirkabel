#include <omnetpp.h>

using namespace omnetpp;

class LoRaSensorNode : public cSimpleModule
{
  private:
    double powerConsumption;
    double transmissionInterval;
    cMessage *sendEvent;

  protected:
    virtual void initialize() override {
        powerConsumption = par("powerConsumption");
        transmissionInterval = par("transmissionInterval");
        sendEvent = new cMessage("sendEvent");
        scheduleAt(simTime() + transmissionInterval, sendEvent);
    }

    virtual void handleMessage(cMessage *msg) override {
        if (msg == sendEvent) {
            EV << "Sending data to gateway\n";
            send(new cMessage("SensorData"), "out");
            scheduleAt(simTime() + transmissionInterval, sendEvent);
        }
    }

    virtual void finish() override {
        delete sendEvent;
    }
};

Define_Module(LoRaSensorNode);
