# Solution
---
Note: All the information written below is specific to Ubuntu operating system
## Requirements
You will require the GNU Compiler Collection (GCC) in order to be able to run the program strace.c

[Steps to install GCC compiler on Ubuntu](https://linuxize.com/post/how-to-install-gcc-on-ubuntu-20-04/)

## Running the program
- To compile the .c file, run the following command:
>  gcc -o straceobj strace.c


- Run the object file using the following command:
> ./straceobj


- The program will prompt to enter the name of the input file and output file

![ss](https://user-images.githubusercontent.com/116995762/200142462-5fd41332-3db7-418c-b1e8-67c75430cb1e.png)


## Creating an output text file to track system calls
- Enter this command to generate an output .txt file of system calls
> strace -o system_calls.txt ./straceobj
 - [Click to view system_calls_notable.txt](https://github.com/prasadsavanur/prasadsavanur/blob/main/2.24/system_calls_notable.txt)

- To keep the count of the number of each system call being made, we use -c
  > strace -o system_calls.txt -c ./straceobj
- The output text file containing the number of each system call is as shown below: 

![ss2](https://user-images.githubusercontent.com/116995762/200142651-6730b6f0-1a32-43d9-bd4b-0d3fba2bc629.png)
 - [Click to view system_calls.txt](https://github.com/prasadsavanur/prasadsavanur/blob/main/2.24/system_calls.txt)

## Implementation
- The program is written in C language for reading the data from an existing file and paste it into a new file (which does not exist before executing the program).
- The input file is source.txt    [(Click)](https://github.com/prasadsavanur/prasadsavanur/blob/main/2.24/source.txt)
- The output file is destination.txt  [(Click)](https://github.com/prasadsavanur/prasadsavanur/blob/main/2.24/destination.txt)
- A system_calls.txt file is also created in which all the system calls are logged   [(Click)](https://github.com/prasadsavanur/prasadsavanur/blob/main/2.24/system_calls.txt)

## List of system calls made

### 1. openat() 
-  Open a file relative to a directory file descriptor
-  If the pathname given in pathname is relative, then it is interpreted relative to the directory referred to by the file descriptor dirfd (rather than relative to the current working directory of the calling process)
> int openat(int dirfd, const char *pathname, int flags);
 - If the pathname given in pathname is relative, then it is interpreted relative to the directory referred to by the file descriptor dirfd (rather than relative to the current working directory of the calling process)

### 2. read()
- Reads from a file descriptor
> ssize_t read(int fd, void *buf, size_t count);
- read() attempts to read up to count bytes from file descriptor fd into the buffer starting at buf.

### 3. write()
- Writes to a file descriptor
> ssize_t write(int fd, const void *buf, size_t count);
- write() writes up to count bytes from the buffer starting at buf to the file referred to by the file descriptor fd.

### 4. close()
- Closes a file descriptor
> int close(int fd);
- close() closes a file descriptor, so that it no longer refers to any file and may be reused.

### 5. fstat()
> int fstat(int fildes, struct stat *buf);
- The fstat() function obtains information about an open file known by the file descriptor fildes, obtained from a successful call to a function such as open(2), create(2). If fildes references a shared memory object, the system updates in the stat structure pointed to by the buf argument.

### 6. stat()
> int stat(const char *restrict path, struct stat *restrict buf);
- The stat() function obtains information about the file pointed to by path. 
- Read, write, or execute permission of the named file is not required, but all directories listed in the path name leading to the file must be searchable.

### 7. lseek()
- lseek is a system call that is used to change the location of the read/write pointer of a file descriptor. 
- The location can be set either in absolute or relative terms.



  
  ## References
- [C code - geeksforgeeks](https://www.geeksforgeeks.org/c-program-copy-contents-one-file-another-file/)
- [System calls](https://man7.org)
- Assistance from Mr. Dev Agrawal and Mr. Vincent Paul
