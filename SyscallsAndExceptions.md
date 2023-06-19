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
    - Interrupts
    - Traps
    - Faults
    - Aborts

Exceptions are like procedure calls but the difference is as follows
1. Can return either to the current instruction or the following instruction
2. Run in kernel mode
3. Save information about the process we will need when we return from the kernel
4. Everything is saved on the kernel stack

### Asynchronous Exceptions
Caused by events external to the currently running instruction
- Indicated by setting the processor's interrupt pin
- Handler returns to the next instruction
- Can also be previously set timer firing on the CPU

Examples : I/O Interrupts, Hard Reset Interrupt, Soft Reset Interrupt

### Traps: Synchronous, Intentional Exceptions
* Caused by events that occur as a result of executing an instruction

Examples : System Calls, Breakpoint traps, Special Instructions

## Synchronous Exceptions
* Faults - Might fail or not, kernel needs to check
* Aborts - Always fails