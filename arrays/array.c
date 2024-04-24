#include <stdio.h>

#define n 10

int main() {
	int a[n];

	for(int i = 0; i < n; i++) {
		a[i] = 0;
		printf("Value: %d | Index: %d\n", a[i], i);
	}
	
	int size = sizeof(a);
	printf("Size of array: %d bytes\n", size);

	return 0;
}	
