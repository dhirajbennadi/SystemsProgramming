## Virtual Memory

Why?
* Layer of Indirection
* Speed

CPU -> MMU -> Physical Memory

### Problems with Sharing Memory
* Addressing Problem
    * Compiler generates memory references
    * Unknown where process will be located
* Protection Problem
    * Modifying another process's memory
* Space Problem
    * The more processes there are, the less memory each individually can have

## Concepts
* Every single process will have its own address space
* Virtual addresses assume separate memory starting at 0
* Compiler generated
* Independent of location in Physical Memory
* Conversion of logical to physical memory is done by Hardware. But the hardware is controlled by Page Tables which in turn is controlled by Operating Systems

## Page Table
Array of page table entries (PTEs) that maps virtual pages to physical pages

The PTE contains the information of a ~valid bit~ and the address the process is currently located at. If the process is available in the DRAM, then the valid bit is 1 or its 0, which indicates that the process is on the disk.
Remember the ~Page Hit~ concept over here.

## Page Hit
Reference to VM word that is in physical memory (DRAM cache hit)

## Page Fault
Reference to VM word that is not in physical memory (DRAM cache miss)


