 * Proceeses have their own memory and state (register values)
 Open files, signal handlers, other stuff managed by the OS
 * The kernel manages the hardware and switching between those processes preemptively

Thread of Control = Execution Context

The shell does execv to the process that is invoked. Execv does not return. -1 if a process fails.

![Shell Invoking Execv](Images/Shell_Invoking_Execv.jpg)

## Spawn
Spawn creates a new child and waits for it to finish the execution and then terminates itself.
When strace command with the output of the program is executed, the trace shows a clone statement.

## Fork
* 2 processes share the same execution context. Identical Copies.
* Share memory layout
* After forking, the OS decides which process to run next
* Clone is a replacement of fork

What does fork do?
* Receives own copy of :
    * memory
    * open files
    * filesystem state
    * signal handlers
* After forking, the OS decides which process to run next

### 
Summary of System Calls : strace -c ./output

What does spawn do?
* Receives own copy of :
    * ~~memory~~
    * open files
    * filesystem state
    * signal handlers
* ~~After forking, the OS decides which process to run next~~
* Parent sleeps until child execv's or exit()
* Edits to one show up in other