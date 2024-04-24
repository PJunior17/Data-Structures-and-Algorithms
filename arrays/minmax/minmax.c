#include <stdio.h>

int main() {
	int a[10];
	int min, max, n;

	printf("Enter the number of elements up to 10: ");
	scanf("%d", &n);
	
	printf("Enter %d elements: ", n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	min = a[0];
	max = a[0];

	for(int i = 0; i < n; i++) {
		if(a[i] > max) {
			max = a[i];
		}
		if(a[i] < min) {
			min = a[i];
		}
	}

	printf("\nThe Max number is %d\n", max);
	printf("The Min number is %d\n", min);
	return 0;
}
