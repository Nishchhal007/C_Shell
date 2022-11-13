#include<process.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char const *argv[])
{
    char *binaryPath = "ls";
    char *arg1 = "-lh";
    
    execlp(binaryPath, binaryPath, arg1, NULL);
    return 0;
}
