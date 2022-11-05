# Solution
---
Note: All the information written below is specific to Ubuntu operating system
## Requirements
You will require the GNU Compiler Collection (GCC) in order to be able to run the program strace.c

[Steps to install GCC compiler on Ubuntu](https://linuxize.com/post/how-to-install-gcc-on-ubuntu-20-04/)

## Running the program
- To compile the .c file, run the following command:
>  gcc -pthread code.c 
- -pthread is very essential as the code won't compile without it

- Run the object file using the following command
> ./a.out

- The program will prompt to enter the number of elements and the value of those elements


## Implementation
- The program is written in C language for calculating the average, minimum and maximum using three functions thread_average, thread_minimum and thread_maximum respectively.
- We create 3 threads t1, t2 and t3
- Each of these functions is operated by a distinct thread. 
- The average function is operated by thread t1
- The minimum function is operated by thread t2
- The maximum function is operated by thread t3
  
## References
- [C code - Github repositry](https://gist.github.com/Jabiribn/e58bf13c678953891900e5f982b48037)
- Code and Linux command assistance from Mr. Dev Agrawal and Mr. Vincent Paul
