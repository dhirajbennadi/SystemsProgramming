Wifi - 802.11

### Internet
The Internet is a network of networks that delivers messages using a **best-effort** packet switched delivery mechanism

Host -> Router {A--------} -> Router{---------B} <----> Bigger Network <--------> Router{B---------} -> Router {--------A} -> Host

Router has buffers to store messages

Landline phones are circuit switch networks

### OSI Layers

#### 4 Layer Internet Model
1. Application - Application, Email
2. Transport - End to End Reliable Connections
3. Network - Routing , Naming
4. Link - Framing, Forwarding, detecting errors, sharing the medium
5. Physical

##### DNS
Layer of Abstraction allowing IPs to change. Number to Name for Humans

DNS existing as an application on top of Transport Layer

##### Transport
1. Two processes on different computer exchanging bytes
2. **Multiplex** different application-level messages
3. What **Abstraction** to expose to the application developer via API?
4. How to ma