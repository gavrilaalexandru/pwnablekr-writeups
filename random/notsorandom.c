#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
	unsigned int random;
	random = rand();	// random value!

	printf("Not so random is: %d\n", random);
	return 0;
}

