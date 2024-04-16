#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    pid_t   pid;
    printf("fork program starting \n");
    pid = fork();
    switch(pid){
        case -1: perror("fork failed"); break;
        case 0: for(int i = 0; i<=9; ++i){
            printf("%d",i);
        } break;
        default: for(char c='A'; c<='Z'; ++c){
            printf("%c",c);
        }; break;
    };

    return 0;
}
