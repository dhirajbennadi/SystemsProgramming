## Static Linking
Link everything at build time: Globals, Functions
Advantage: Results in proper linkage and less failure

## Dynamic Linking
Keep libraries in different files
Link Global variables at load time. Link Lbirary functions at invocation time.

Interchangibly update the programs and libraries

#### How to make programs faster?
* Fewer bytes in memory means more bytes in cache
* More bytes in cache means faster
* At the system level we share libraries across prcoesses

