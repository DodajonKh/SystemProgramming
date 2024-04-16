#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    printf("Executing ls command...\n");

    // Constructing argument vector
    char *args[] = {"/bin/ls", "/bin", "/home" , NULL}; // Command to execute

    execv(args[0], args); // Execute the command

    // If execv returns, it means there was an error
    perror("execv");
    return 1;
}
