#include <stdio.h>
#include <stdlib.h>

int main(){

 if(getenv("MYVAR") == NULL){
	printf("MYVAR %s\n:", getenv("MYVAR"));
 } else{
	printf("there is no such environment variable");
 }


 if(-1 == putenv("PATH=/:/home/satoshi_khd")){
	printf("putenv failed \n");
	return 1;
}

	printf("PATH: %s\n", getenv("MYVAR"));

 return 0;
}
