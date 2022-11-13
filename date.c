#include <unistd.h>
 
int main(void) {
  char *binaryPath = "date";
//   char *arg1 = "-ls";
  // char *arg2 = "-ls";
 
  execlp(binaryPath, binaryPath, NULL);
 
  return 0;
}