#include <stdio.h>
#include <stdlib.h>

int main(){
 char *var = "HOME=/usr/home";
 putenv(var);
 printf(var);
 return 0;
}
