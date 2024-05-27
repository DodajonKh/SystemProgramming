#include <stdio.h>
#include <stdlinb.h>
#include <unsitd.h>
#include <sys/wait.h>

#define BUFFER_SIZE = 256;

int main(){
 pid_t pid;
 int pipes[2];
 char buffer[BUFFER_SIZE + 1];

 if(pipe(pid) == 0){
  pid = fork();
  if(pid == -1){
   peror("fork failed");
   exit(1); 
  }
  if(pid == 0){
    write(pipes[1], "sending message", sizeof(buffer));
    pclose(pipes[1]);
    exit(0);
  }
  else{
   read(pipes[0], buffer)
  }
 }

 


}
