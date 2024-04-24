#include <stdio.h>

int main() {
	int n = 5;
	int a[10];
	for(int i = 0; i < 5; i++) {
		a[i] = i;
		printf("Value: %d | Index: %d\n", a[i], i);
	}
	
	int i = n-1;
	
	int p;
	printf("Enter a position to insert: ");
	scanf("%d", &p);

	while(i >= p) {
		a[i+1] = a[i];
		i--;
	}
	
	int key;
	printf("Enter a value to insert: ");
	scanf("%d", &key);

	a[p] = key;
	n = n + 1;

	for(int j = 0; j < n; j++) {
		printf("Value: %d | Index: %d\n", a[j], j);
	}

	return 0;

}
