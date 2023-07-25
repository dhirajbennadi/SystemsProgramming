### Open File Table
* Global table in the kernel. 
    * This contains current file position
    * Reference count of processes pointing to it
    * Pointer to an entry in the v-node table
    * One entry per open call

### V-node table
Global Structure contains information about the file on disk, including
* Permissions
* File Size
* File Type
* One entry per file

### dup2
Copies descriptor table entry oldfd to descriptor table entry newfd
If newfd was open, closes newfd before the copy