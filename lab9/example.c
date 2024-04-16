#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("grep \"pattern\" ./sometext.txt > ./output.txt\n");
    system("ps -l | grep grep\n");
    printf("Done.\n");
    return 0;
}
