#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main() {
    char *command = "nice -n 10 grep \"pattern\" ./sometext.txt > ./output.txt\n";
    char *check__command = "ps -l \n";
    
    int result = system(command);
    result == -1 ? perror("-1") : printf("successfully run \n%s", command);
    
    printf("checking the nice value of the grep\n");
    system(check__command);
    
    
    return 0;
}
