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
- It returns the file descriptor

### 2. read()
- Reads from a file descriptor

### 3. write()
- Writes to a file descriptor

### 4. close()
- Closes a file descriptor
- close() closes a file descriptor, so that it no longer refers to any file and may be reused.

### 5. fstat()
- The fstat() function obtains information about an open file known by the file descriptor, obtained from a successful call to a function such as open(2), create(2). It gets the file descriptor and gives it to the buffer. This buffer points to some location in the memory. 

### 6. stat()
- The stat() function obtains information about the file pointed to by path. 
- fstat() is identical to stat(), except that the file about which information is to be retrieved is specified by a file descriptor (instead of a file name).

### 7. lseek()
- lseek is a system call that is used to change the location of the read/write pointer of a file descriptor. 
- The location can be set either in absolute or relative terms.

### 8. mmap()
- It is used to map the files specified by the file descriptor in the memory. 
- It consists of information like the number of bytes, memory protection, etc.

### 9. brk()
- It is the program break, which defines the end of the process's data segment (i.e., the program  break is the first location after the end of the uninitialized data segment)
- Increasing the program break has the effect of allocating memory to the process
- Decreasing the break deallocates memory

### 10. pread64()
- pread64() shall read count bytes into buf from the file associated with the open file descriptor fd, at the position specified by offset. 
- If you read() twice, you get two different results, which shows that read() advances in the file.
- If you pread() twice, you get the same result, which shows that pread() stays at the same point in the file.

### 11. access()
- access() checks if the calling process can access the file pathname. 

### 12. execve()
- It executes the passed object file (execute vector arguments environment). 

### 13. arch_prctl()
- It is the architecture protocol. 
  
  ## References
  #### Code
- [geeksforgeeks](https://www.geeksforgeeks.org/c-program-copy-contents-one-file-another-file/)

#### System calls
- [https://docs.oracle.com/cd/E88353_01/html/E37841/fstat-2.html](https://docs.oracle.com/cd/E88353_01/html/E37841/fstat-2.html)
- [https://man7.org/linux/man-pages/man2/close.2.html](https://man7.org/linux/man-pages/man2/close.2.html)
- [https://man7.org/linux/man-pages/man2/write.2.html](https://man7.org/linux/man-pages/man2/write.2.html)
- [https://man7.org/linux/man-pages/man2/read.2.html](https://man7.org/linux/man-pages/man2/read.2.html)
- [https://linux.die.net/man/2/openat](https://linux.die.net/man/2/openat)
#### Code and Documentation Assistance 
- Mr. Dev Agrawal and Mr. Vincent Paul
