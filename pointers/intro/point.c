#include<stdio.h>

int main() {
	int i = 1;
	char c = 'c';
	float pi = 3.14;

	printf("Address of i: %p | Value of i: %d\n", &i, i);
	printf("Address of c: %p | Value of c: %c\n", &c, c);
	printf("Address of pi: %p | Value of pi: %f\n", &pi, pi);
	
	return 0;
}
