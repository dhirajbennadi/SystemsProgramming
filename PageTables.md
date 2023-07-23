https://www.youtube.com/watch?v=ccWRlNP1UsY&list=PLhy9gU5W1fvUND_5mdpbNVHC1WCIaABbP&index=25

* Page Tables is managed by both Kernel and OS
* Every Individual Process has its own Page Table

## Page Table
Array of page table entries (PTEs) that maps virtual pages to physical pages

The PTE contains the information of a ~valid bit~ and the address the process is currently located at. If the process is available in the DRAM, then the valid bit is 1 or its 0, which indicates that the process is on the disk.
Remember the ~Page Hit~ concept over here.

## Page Hit
Reference to VM word that is in physical memory (DRAM cache hit)

1. CPU sends the virtual address that it wants to load/store to the MMU
2. MMU fetches the PTE from page table in memory
3. MMU sends physical address to cache/memory
4. Cache/memory sends data word to processor

## Page Fault
Reference to VM word that is not in physical memory (DRAM cache miss)

1. CPU sends the virtual address that it wants to load/store to the MMU
2. MMU fetches the PTE from page table in memory - But it is not present. So Page Fault -> Page fault handler
3. OS pushes that mapping into memory
4. MMU sends physical address to cache/memory
5. Cache/memory sends data word to processor

## Types of memory in use by a process
1. User Level Text
2. User Level Stack
3. User level heap
4. User level data
5. Kernel Text
6. Kernel Stack
7. Kernel Heap

## Memory Protection Bits
* Present
* Writeable
* User-Accessible
* Executable

## Integrating VM and Cache

* CPU is translating the addresses for MMU and MMU is looking for PTE Hit and Miss in the Memory Hierarchy
* PTEs are cached in L1 like any other memory word
* PTE hit still requires a small L1 delay

Solution : **Translation Lookaside Buffer**

## TLB Hit
CPU -> MMU-> TLB

## Summary

#### Programmer's View
* Each process has its own private linear address space
* Cannot be corrupted by other processes

#### System's View
* Uses memory efficiently by caching virtual memory pages
    * Efficient only because of locality
* Simplifies Memory Management and Programming
* Simplifies protection by providing a convenient interpositioning point to check permissions
