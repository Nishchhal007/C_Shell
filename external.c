// Importing necessary header files
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

// void shell_Header()
// {
//     printf("*****************************************************\n\n");

//     printf("**************** Welcome to my Shell ****************\n\n");

//     printf("*****************************************************\n\n");
// }

char **diffrentiator(char *input)
{
    char **command = malloc(8 * sizeof(char *));
    char *separator = " ";
    char *parsed;
    int index = 0;

    parsed = strtok(input, separator);
    while (parsed != NULL)
    {
        command[index] = parsed;
        index++;

        parsed = strtok(NULL, separator);
    }

    command[index] = NULL;
    return command;
}

void menu(char *a, char *b)
{
    // printf("%s %s",a,b);
    char *binaryPath = a;
    char *arg1 = b;

    int cpid = fork();
    int status;
    if (cpid == 0)
    {

        execlp(binaryPath, binaryPath, arg1, NULL);
        exit(0);
    }
    else
    {
        wait(&status);
    }

}

int main()
{
    // shell_Header();
    while (1)
    {
        printf("\nnishchhal007@NishchhalMSI:~$ ");
        char **cmd;
        char a[200];
        gets(a);
        cmd = diffrentiator(a);
        // printf("%s %s\n",cmd[0],cmd[1]);
        menu(cmd[0], cmd[1]);

        printf("\n");
    }

    return 0;
}