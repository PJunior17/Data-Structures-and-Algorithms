#include <stdio.h>

int main() {
	int n = 10;
	int a[10];
	
	for(int i = 0; i < n; i++) {
		a[i] = i;
		printf("Value: %d | Index: %d\n", a[i], i);
	}

	int p;
	printf("Enter the position you want to delete: ");
	scanf("%d", &p);

	int key;

	int j = p;
	key = a[p];
	
	while(j < n-1) {
		a[j] = a[j+1];
		j++;
	}
	n = n-1;
	
	for(int i = 0; i < n; i++) {
		printf("Value: %d | Index: %d\n", a[i], i);
	}

	return 0;
}
