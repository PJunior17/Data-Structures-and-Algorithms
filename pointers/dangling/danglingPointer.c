#include <stdlib.h>

int main() {
	int* cp = malloc(100); 	//create memory
	free(cp);	       	//now cp is a dangling pointer
	cp = NULL;	       	//cp is no longer dangling
}

