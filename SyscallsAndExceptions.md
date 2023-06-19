## Process
Running instance of a program. Access is only memory and registers.

| Process       |
|--------------|
| Kernel Level Component | 
| User Level Componenet  | 

## Exception
An exception is a transfer of control to the OS in response to some event (i.e change in processor state)

## Kernel
* All programs depend on it
    - Loads and runs them
    - Allow acess to hardware
* Works Closely with Hardware
    - Access device registers
    - Responds to signals from devices
* Allocates basic resouces
    - CPU time, memory, space
    - Controls I/O devices: display, keyboard, disk and network

## Kernel Mode
* Specified by setting a bit on the CPU
* Allows us to run privileged instructions
* Keep Track of kernel variables on a separate stack than process variables

## 4 Types of Exceptions
* Classes of Exceptions