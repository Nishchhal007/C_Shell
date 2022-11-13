// Importing necessary header files
#include <stdio.h>
#include <unistd.h>

void pwd()
{
    char s[100];
    printf("%s\n", getcwd(s, 1000));
    // printf("Path printed");
}
void cd()
{
    chdir("..");
}

int main()
{
    while (1)
    {
        int choice;
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            pwd();
            break;
        case 2:
        // printf("Enter the String : ");
pwd();
            cd();
      pwd();
            break;
        case 3:
            pwd();
            break;
        
        default:
            break;
        }
    }
    
    
    
    
    return 0;
}