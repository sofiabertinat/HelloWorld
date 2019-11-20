#include <stdio.h>
#include <stdlib.h>
#include "greetings.h"
int main(void){
	char * greeting;
	if (get_greetingSize()>0) {
		greeting = (char *) malloc(get_greetingSize()/sizeof(char));
	}
	else {
		printf("Greeting string is to short e!\n");
		return -1;
	}

	if (get_greeting(greeting)==0) {
		printf("%s", greeting);
		return 0;
	}
	else return -1;
}

