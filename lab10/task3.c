]#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int call_exec(){
  char *args[] = {"./child", NULL};
  execv(args[0],args);
};

int main() {
  pid_t pid;
  pid = fork();

  switch (pid){
  case -1:  perror("fork failed"); break;
  case 0: {
   printf("Child PID: %d\n", getpid());
   call_exec();
   break;
  }
  default: printf("Parent PID: %d\n", getpid()); break;
}
 


  exit(0);
}
