#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
  pid_t pid;
  pid = fork();

  switch(pid){
   case -1: perror("fork failed");
   case 0: {
    printf("This is child before execl %d\n", getpid());
    execl("/usr/bin/ps", "ps", "-l", NULL);
    break;
   };
   case 1: {
    printf("This is parent %d\n", getpid());
    printf("This is child from parent process %d\n", pid);
   };
 };

  exit(0);
}
