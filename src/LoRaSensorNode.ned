package loraforestmonitoring;

simple LoRaSensorNode
{
    parameters:
        double powerConsumption @unit(mA);  // Deklarasi tipe dan unit
        double transmissionInterval @unit(s);
        double range @unit(m);  // Unit untuk jangkauan
    gates:
        input in;
        output out;
}

