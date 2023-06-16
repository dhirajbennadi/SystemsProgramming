## Symbols Resolution
* Functions
* Global Variables
* Static Variables

readelf on the .o file

## Symbol Bindings
Global - These are the variables in the code
Global (External) - printf 
Local - Static

## Elf file
.text - Assembly Instructions
.rodata - read only variables
.data - read / write variables
.bss - 0 initialized - Better Save Space

--- These are the like the To-Dos for the linker
.symtab
.rel.text
.rel.data

--- These are sections useful for the developer
.debug
.line
.strtab

### Special Section Types

#### Common
Uninitialized Global - But not zero

## How to Resolve Symbols
Strong Symbols - Defined functions, initialized variables
Weak Symbols - Uninitialized Variables

You can store integers at locations divisible by 4

## Linking with Static Libraries
* Static Library - Essentially a bunch of .o files
* Have a header describing where each .o file is within the .a file
* When an external function is used, the linker attempts to find it within the referenced .h files and adds only the module where it is