### Files

#### The big Five file operations
1. open - create a file descriptor
2. close - destroy a reference to a file descriptor
3. read - get bytes from a file starting from the current offset
4. write - put bytes in a file starting from the current offset
5. lseek - change the current offset

#### Flags for open
* Read only, write only, read and write, create 
* Modes - chmod ugo+-rwx