package lorajaringannirkabel;
simple LoRaGateway
{
    parameters:
        int maxConnections;
        int bufferCapacity;
    gates:
        input in[12];  // Mendukung 100 koneksi
        output out[12];
}

