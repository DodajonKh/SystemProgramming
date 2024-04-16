#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {

  printf("Child PID from execv: %d\n", getpid());

  printf("Parent PID from execv: %d\n", getppid());

  exit(0);
}
