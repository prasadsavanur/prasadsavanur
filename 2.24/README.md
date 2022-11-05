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

## Command to create an output text file to track system calls
> strace -o system_calls.txt ./straceobj
- To keep the count of the number of each system call being made, we use -c
  > strace -o system_calls.txt -c ./straceobj

## Implementation
- The program is written in C language for reading the data from an existing file and paste it into a new file (which does not exist before executing the program).
- The input file is source.txt 
- The output file is destination.txt
- A system_calls.txt file is also created in which all the system calls are logged.
  
  ## References
- [C code - geeksforgeeks](https://www.geeksforgeeks.org/c-program-copy-contents-one-file-another-file/)
- [Documentation assistance - Github repository](https://github.com/sankronaldo) 
- General Ubuntu and Linux command assistance from Mr. Dev Agrawal and Mr. Vincent Paul
