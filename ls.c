// #include <unistd.h>
 
// int main(void) {
//   char *binaryPath = "/bin/ls";
//   char *arg1 = "-l";
//   char *arg2 = "-ls";
 
//   execl(binaryPath, binaryPath, arg1, arg2, NULL);
 
//   return 0;
// }
#include <unistd.h>
 
int main(void) {
  char *binaryPath = "ls";
  char *arg1 = "-s";
  // char *arg2 = "-ls";
 
  execlp(binaryPath, binaryPath, arg1, NULL);
 
  return 0;
}

// https://www.youtube.com/watch?v=fWGjBRHc5eQ