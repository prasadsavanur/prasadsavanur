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
- Enter the command to generate an output .txt file of system calls
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


  
  ## References
- [C code - geeksforgeeks](https://www.geeksforgeeks.org/c-program-copy-contents-one-file-another-file/)
- General Ubuntu and Linux command assistance from Mr. Dev Agrawal and Mr. Vincent Paul
