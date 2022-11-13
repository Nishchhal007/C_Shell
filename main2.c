// Importing necessary header files
#include <stdio.h>
#include <unistd.h>
#include<stdlib.h>
#include<string.h>

void pwd()
{
    char s[100];
    printf("%s\n", getcwd(s, 1000));
    // printf("Path printed");
}
void cd()
{
    char cmd[100];
    printf("Enter the next Destination : ");
    scanf("%s",cmd);
    chdir(cmd);
}
void echo()
{
    char echos[1000];
    gets(echos);
    for (int i = 6; i < strlen(echos)-1; i++)
    {
    printf("%c",echos[i]);
    }
    printf("\n");
    
}

int main()
{
   
    printf("*****************************************************\n\n");


    printf("***************** Nishchhal's Shell *****************\n\n");


    printf("*****************************************************\n\n");
    while (1)
    {
        printf("Nishchhal's Shell # : ");
        
        char a[200];
        gets(a);
            char first[] = "pwd";
            char second[] = "cd";
            char third[] = "echo";
            if (strcmp(a,first)==0)
            {
                pwd();
            }
            else if (strcmp(a,second)==0)
            {
                cd();
            }
            else if (strcmp(a,third)==0)
            {
                printf("Demo : Enter the Echo  command in the format echo \"The statement which u want to print \"  \n");
                echo();
            }
            printf("\n");
            
    }
// https://www.youtube.com/watch?v=fWGjBRHc5eQ
    
    return 0;
}