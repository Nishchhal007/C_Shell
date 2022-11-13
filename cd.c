// Importing necessary header files
#include <stdio.h>
#include <unistd.h>

int main()
{

    char s[100];

    // Printing the current working directory
    
    printf("%s\n", getcwd(s, 100));
    
    return 0;
}