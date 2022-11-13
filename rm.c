#include <unistd.h>
 
int main(void) {
  char *binaryPath = "rm";
  char *arg1 = "nish.txt";
//   char *arg2 = "-ls";
 
  execlp(binaryPath, binaryPath, arg1, NULL);
 
  return 0;
}