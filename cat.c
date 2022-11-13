#include <unistd.h>
 
int main(void) {
  char *binaryPath = "/bin/cat";
  char *arg1 = "nish.txt";
//   char *arg2 = "-ls";
 
  execl(binaryPath, binaryPath, arg1, NULL);
 
  return 0;
}