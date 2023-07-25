Why are Signals needed?
* IOC for process control between processes
* Interrupt-driven, rather than explicit
    * uncommon, unexpected things
* Concurrent Programming

![Signal Hanlding](Images/SignalHandling.jpg)

### Examples of Signals
* SIGINT
* SIGILL
* SIGKILL
* SIGSEGV
* SIGCHILD

### Sending Signals
* Kernel sends signals by setting a flag in the process's context
* There can be multiple pending signals which a process has been sent but not yet received

### Receving Signals
* At some point, the prcess switches into kernel mode(system call, context switch, etc)
* When the process switches back to user mode, the kernel checks for pending signals
* Kernel forces the process to recive any pending signals

### Process Groups

### Jobs
* Shell
* Foreground
* Background

### Errno
Errno is a global variable in the C Standard library to keep track of the error state of the process

### Signal Concepts
* Kernel will maintain pending and blocked bit vectors in the context of each process
    * pending - represents the set of pending signals
    * blocked - represents the set of blocked signals