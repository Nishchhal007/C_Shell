#include <unistd.h>
 
int main(void) {
  char *binaryPath = "mkdir";
  char *arg1 = "devanshu";
//   char *arg2 = "-ls";
 
  execlp(binaryPath, binaryPath, arg1, NULL);
 
  return 0;
}