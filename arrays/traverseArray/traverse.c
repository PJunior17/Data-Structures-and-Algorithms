#include <stdio.h>

#define n 10

int main() {
	int a[n];
	int i = 0;
	
	while(i<n) {
		a[i] = 0;
		i++;
	}
	
	i = 0;
	while(i<n) {
		printf("Value: %d | Index: %d\n", a[i], i);
		i++;
	}

	return 0;
}

