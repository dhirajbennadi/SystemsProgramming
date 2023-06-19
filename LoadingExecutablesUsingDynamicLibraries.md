## Loading Executables
The executable is loaded from the disk to the memory

The versions of the executable on the disk and memory are completely different

![Executable](Images/LoadingExecutables.png)

The loader needs to figure out which sections from the elf file needed to be loaded in the memory

## .bss section
Does not take space on file, but needs space in memory

## Loader
* Copies code and data from executable file to memory as a collection of segments
    - Contiguous chunks of memory with the same permissions
* Starts running the first instruction at the entry point specified in the ELF Header
    - This is (usually) the first instruction of .text
    - A special loader call `__start` written in assembly for whatever CPY architecture you are using
    - This does super basic housekeeping then calls the C function `__libc_start_main` - This will call main

### __start
* Calls __init
* Sets up *argc and *argc on the stack
* Sets up enviroment variables
* Calls main
* Calls exit with the return value of main

Example:
![Executable](Images/LoadingExecutables.png)

## Dynamic Linking
We can use shared libraries that are compiled in such a way that they are linked at load or run time
* .so files on linux (shared object)
* .dll files on Windows

Until now we dealt with .o files which is linking at compile time

## Shared vs Static Libraries
![]()

## Interesting Observation
When an executable is compiled with dynmaic linking, it takes less space
When it is complied with static linking, it takes way much larger space

Example : gcc -static -o output main.c `vs` gcc -o output main.c
The difference is 757KB to 18 KB


