#include<stdlib.h>
#include<unistd.h>

void ls(char *a, char *b)
{
    char *path = a;
    char *arg1 = b;

    int cpid = fork();
    int status;
    if (cpid == 0)
    {

        execlp(path, path, arg1, NULL);
        exit(0);
    }
    else
    {
        wait(&status);
    }
}