package lorajaringannirkabel;

network LoRaJaringanNirkabel
{
    submodules:
        sensors[13]: LoRaSensorNode {
            parameters:
                powerConsumption = 15mA;
                transmissionInterval = uniform(10s, 30s);
                range = 100m; // 1 km
        }
        gateway: LoRaGateway {
            parameters:
                maxConnections = 12;
                bufferCapacity = 1000;
        }
    connections allowunconnected:
        for i=0..12{
            sensors[i].out --> gateway.in++;
            gateway.out++ --> sensors[i].in;
        }
}
