#include <stdio.h>

int main() {
	int n = 5;
	int a[10] = {-55, 1, 123, 453, 8531};

	for(int i = 0; i < n; i++) {
		printf("Value: %d | Index: %d\n", a[i], i);
	}

	int j = n-1;
	
	int key;
	printf("Enter the value you want to insert: ");
	scanf("%d", &key);

	while(a[j] > key) {
		a[j+1] = a[j];
		j--;
	}

	a[j+1] = key;
	n = n+1;

	for(int i = 0; i < n; i++) {
		printf("Value: %d | Index: %d\n", a[i], i);
	}
	
	return 0;
}
