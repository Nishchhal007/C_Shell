// Importing necessary header files
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void shell_Header()
{
  printf("*****************************************************\n\n");

  printf("**************** Welcome to my Shell ****************\n\n");

  printf("*****************************************************\n\n");
}

void pwd()
{
  char s[1000];
  printf("%s\n", getcwd(s, 1000));
  // printf("Path printed");
}
void cd()
{
  char cmd[100];
  printf("Enter the next Destination : ");
  scanf("%s", cmd);
  chdir(cmd);
}
void echo()
{
  char echos[1000];
  gets(echos);
  if ((echos[0] == 'e') && (echos[1] == 'c') && (echos[2] == 'h') && (echos[3] == 'o') && (echos[4] == ' ') && (echos[5] = '"'))
  {
    for (int i = 6; i < strlen(echos) - 1; i++)
    {
      printf("%c", echos[i]);
    }
  }
  else
  {
    printf("Invalid Syntax : Command Not found");
  }

  printf("\n");
}

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

void external(char *a, char *b)
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

void menu(char a[])
{
  char first[] = "pwd";
  char second[] = "cd";
  char third[] = "echo";
  if (strcmp(a, first) == 0)
  {
    pwd();
  }
  else if (strcmp(a, second) == 0)
  {
    cd();
  }
  else if (strcmp(a, third) == 0)
  {
    printf("Demo : Enter the Echo  command in the format echo \"The statement which u want to print \"  \n");
    echo();
  }
  else
  {
    char **cmd;
    cmd = diffrentiator(a);
    external(cmd[0], cmd[1]);
  }
}

int main()
{
  shell_Header();
  while (1)
  {
    printf("\nnishchhal007@NishchhalMSI:~$ ");

    char a[200];
    gets(a);
    menu(a);

    printf("\n");
  }
  // https://www.youtube.com/watch?v=fWGjBRHc5eQ

  return 0;
}