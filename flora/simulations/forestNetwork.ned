package flora.simulations;

import inet.applications.udpapp.UdpBasicApp;
import inet.common.geometry.common.IGeographicCoordinateSystem;
import inet.common.geometry.common.SimpleGeographicCoordinateSystem;
import inet.node.inet.Router;
import inet.node.internetcloud.InternetCloud;
import flora.LoRaPhy.LoRaMedium;
import flora.LoraNode.LoRaNode;
import flora.LoraNode.LoRaGW;
import inet.node.inet.StandardHost;
import inet.networklayer.configurator.ipv4.Ipv4NetworkConfigurator;
import inet.node.ethernet.Eth1G;
import inet.visualizer.canvas.integrated.IntegratedCanvasVisualizer;
import inet.visualizer.canvas.scene.OpenStreetMapSceneCanvasVisualizer;


@license(LGPL);
network ForestNetwork
{
    parameters:
        int numberOfNodes = default(1);
        int numberOfGateways = default(1);
        int networkSizeX = default(500);
        int networkSizeY = default(500);
        @display("bgb=1845,1560");
    submodules:

        visualizer: IntegratedCanvasVisualizer {
            @display("p=1300,413");
        }
        coordinateSystem: SimpleGeographicCoordinateSystem {
            @display("p=1297,651");
        }
        loRaNodes[numberOfNodes]: LoRaNode {
            @display("p=75,69");
        }
        loRaGW[numberOfGateways]: LoRaGW {
            @display("p=153,203;is=s");
        }
        LoRaMedium: LoRaMedium {
            @display("p=1340,66");
        }
        networkServer: StandardHost {
            parameters:
                @display("p=657,519");
        }
        configurator: Ipv4NetworkConfigurator {
            parameters:
                assignDisjunctSubnetAddresses = false;
                @display("p=1494,69");
        }
        internetCloud: InternetCloud {
            @display("p=238,522");
        }
        gwRouter[numberOfGateways]: Router {
            @display("p=238,328");
        }
        nsRouter: Router {
            @display("p=454,519");
        }
    connections:
        networkServer.ethg++ <--> Eth1G <--> nsRouter.ethg++;
        nsRouter.pppg++ <--> Eth1G <--> internetCloud.pppg++;
        for i=0..numberOfGateways-1 {
            internetCloud.pppg++ <--> Eth1G <--> gwRouter[i].pppg++;
            gwRouter[i].ethg++ <--> Eth1G <--> loRaGW[i].ethg++;
        }
}

