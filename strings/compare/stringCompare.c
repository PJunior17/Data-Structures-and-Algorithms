#include <stdio.h>

int main() {
	char s[100] = "this is a string";
	char t[100] = "this is not a string";
	char u[100] = "this is a string";

	int i = 0;
	while(s[i] != '\0' && s[i] == t[i]) {
		i++;
	}
	if(s[i] == '\0' && t[i] == '\0') {
		printf("They are the same!\n");
	} else {
		printf("They are not the same\n");
	}
	
	i = 0;
	while(s[i] != '\0' && s[i] == u[i]) {
		i++;
	}
	if(s[i] == '\0' && u[i] == '\0') {
		printf("They are the same!\n");
	} else {
		printf("They are not the same\n");
	}


	return 0;

}
