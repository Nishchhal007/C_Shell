# OS Teminal Linux


In this assignment, we have to write a C Program whose output works in similar way as a shell.
Standard C libraries, including Linux system calls such as fork, exec family system call, and wait
family system calls should be used in this assignment. The function ‘system’ should not be used.
In this assignment we need to design a simple shell.
That can handle three internal commands ‘cd’,‘echo’ and ‘pwd’. 

These commands would be directly handled by the shell. 

The shell should also be able to handle five external commands, ‘ls’, ‘cat’, ‘date’, ‘rm’, ‘mkdir’.

For these external commands you need to write individual programs to handle these commands. To handle these
external commands, the shell should typically create a new process using the fork() system call and
within each process you need to use the excel() family system call to run the individual program.
The parent program must also wait for the child program to terminate using the wait() family of
system calls.

For each of these commands, you need to handle all the command line options. Two option per
command is sufficient. You need to document which two options you are handling and need to
demonstrate correct functioning of the command with respect to your chosen options. 
You also need to handle corner cases such as invalid options.
