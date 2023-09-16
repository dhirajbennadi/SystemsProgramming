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
4. How to **manage** realities(problems) of the underlying IP network, like dropped packets or out-of-delivery

TCP, UDP -> Port Numbers 

##### Network
1. Routing
2. Name
3. Resource Management

##### Link Layer
1. Framing -> When does a message begin, end
2. Forwarding -? How do I store and send these bytes to receiver
3. Media Access Control -> If multiple senders want to send on a shared channel, how do they coordinate
4. Detecting errors -> Sharing a physical medium can often result in bit error, detect them at this level


### Best Effort
* Avoids Congestion Collapse

#### Reliable ByteStreams
1. TCP is the main protocol that provides reliable transport
2. Splits long streams of bytes up into individual messages, labels these bytes with their offsets
3. Sends acknowledgements (based on offsets) then bytes are received
4. Resends messages when its determined that they are dropped
5. Slows down when it detects congestion


### Scalable

#### Measure of Success
1. Bandwidth
2. Delay/Latency
3. Error Rate