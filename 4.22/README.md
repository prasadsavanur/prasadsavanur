# Solution
---
Note: All the information written below is specific to Ubuntu operating system
## Requirements
You will require the GNU Compiler Collection (GCC) in order to be able to run the program code.c

[Steps to install GCC compiler on Ubuntu](https://linuxize.com/post/how-to-install-gcc-on-ubuntu-20-04/)

## Running the program
- To compile the .c file, run the following command:
>  gcc -pthread code.c 
- -pthread is very essential as the code won't compile without it

- Run the object file using the following command
> ./a.out
- To get the time taken for execution of the code by multi threading, we use the following command
> time ./a.out

- The terminal will then prompt to enter the number of elements and the value of those elements


![ss4](https://user-images.githubusercontent.com/116995762/200156677-df691bc8-8a0e-43b5-925c-aa1a190ae45e.png)



## Implementation
- The program is written in C language for calculating the average, minimum and maximum using three functions thread_average, thread_minimum and thread_maximum respectively.
- The input is taken using the input() function
- We create 3 threads t1, t2 and t3
- Each of these functions is operated by a distinct thread. 
- The average function is executed by thread t1
- The minimum function is executed by thread t2
- The maximum function is executed by thread t3
- The execution time in case of multi threading is then observed 

## List of pthread functions used 
### 1. pthread_create() function
>  int pthread_create(pthread_t *thread, const pthread_attr_t *__restrict__attr, void *(*start_routine)(void *), void *restrict arg);
- First argument is a pointer to pthread_t type that is the data type for threads. It creates a new thread which has already been defined as t1, t2, t3 respectively.
 - Second argument is attr pointing to a pthread_attr_t structure to determine attributes for the new thread. In our case attr is given as NULL, as we want the thread to be created with default attributes.
 - Third argument is a pointer to the start_routine of a thread. It is the part of the code that is executed by a particular thread. 
 - Fourth Argument is the argument passed to start_routine(). In our case it is NULL i.e. no arg is passed to our start_routine.
  - On success, these functions returns 0
  - On error, they return a nonzero error number.
  
  Note: Some of the attributes (second argument in pthread_create function) are flags, stacksize, policy, param, guardsize. We use the default attributes by keeping the second parameter as NULL
  
  ### 2. pthread_join() function
  > int pthread_join(pthread_t thread, void **retval);
  - The pthread_join() function waits for the thread to terminate. If that thread has already terminated, then pthread_join() returns immediately
  - First argument is a pthread_t type that is the data type for threads which has already been defined as t1, t2 and t3 respectively.
- Second argument is retval which specifies the exit status of the thread. If it is not NULL then it has the exit status of thread when pthread_exit() was called. In our case we haven't called pthread_exit() before pthread_join() hence we give argument as NULL.



  
## References
#### code
- [C code - Github repositry](https://gist.github.com/Jabiribn/e58bf13c678953891900e5f982b48037)
#### pthread functions
- [https://man7.org/linux/man-pages/man3/pthread_create.3.html](https://man7.org/linux/man-pages/man3/pthread_create.3.html)
- [https://man7.org/linux/man-pages/man3/pthread_join.3.html](https://man7.org/linux/man-pages/man3/pthread_join.3.html)
- [https://www.ibm.com/docs/en/zos/2.3.0?topic=functions-pthread-join-wait-thread-end](https://www.ibm.com/docs/en/zos/2.3.0?topic=functions-pthread-join-wait-thread-end)

#### Code and documentation assistance
- Mr. Dev Agrawal and Mr. Vincent Paul
