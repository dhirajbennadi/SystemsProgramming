# CPUs, Kernels and Processes
Layering is one of the most important ways we manage complexity in CS.

Each layer implements capabilities that are built on the layers below it and exposed to the layers above it.

Virtualization is very important in modern architecture due to variety of architectures.
* Guest OS
* Hypervisor

# OS
* Cooperates with the CPU to run your programs
* Programs compiled for one are incompatible with each other
* Typically only one per machine, but hypervisors let us share the computer with more than one OS

POSIX - Portable Operating System Interface
* Standard C
* Multitasking
* Error States
* Command lines and Commands

# Libraries

# Shell
Command-line interfaces are the original way to use an interactive computer

*  Allows to launch other programs

# Kernel
The glue between programs and computers

# User Mode
Applications and Shared Runtime Libraries

# Supervisor Mode
Kernel Mode

OS is responsible for the isolation. Kernel is like a program. Full access to the computer.

# Device Drivers
Supervisor Mode

# Virtualization
Adds a layer of indirection called a hypervisor to manage multiplexing access to the computer's hardware by multiple kernels.

VM Ware, Hyper-V

# Docker
  