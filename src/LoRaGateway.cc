#include <omnetpp.h>

using namespace omnetpp;

class LoRaGateway : public cSimpleModule
{
  private:
    int maxConnections;
    int receivedMessages;

  protected:
    virtual void initialize() override {
        maxConnections = par("maxConnections");
        receivedMessages = 0;
    }

    virtual void handleMessage(cMessage *msg) override {
        EV << "Received message from sensor: " << msg->getName() << "\n";
        receivedMessages++;
        delete msg;
    }

    virtual void finish() override {
        EV << "Total messages received: " << receivedMessages << "\n";
    }
};

Define_Module(LoRaGateway);
