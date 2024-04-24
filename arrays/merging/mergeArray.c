#include <stdio.h>

int main() {
	int sizea = 5;
	int sizeb = 6;
	
	int a[5] = {1, 3, 5, 7, 9};
	int b[6] = {2, 4, 6, 8, 10, 12};

	int i = 0;
	int j = 0;
	int k = 0;

	int c[11];
	
	for(int x = 0; x < sizea; x++) {
		printf("Value: %d | Index: %d\n", a[x], x);
	}
	printf("\n");

	for(int x = 0; x < sizeb; x++) {
		printf("Value: %d | Index: %d\n", b[x], x);
	}
	printf("\n");

	while(i < sizea && j < sizeb) {
		if(a[i] < b[j]) {
			c[k] = a[i];
			i++;
			k++;
		} else {
			c[k] = b[j];
			j++;
			k++;
		}
	}
	
	while(i < sizea) {
		c[k] = a[i];
		i++;
		k++;
	}

	while(j < sizeb) {
		c[k] = b[j];
		j++;
		k++;
	}
	
	for(int x = 0; x < sizea+sizeb; x++) {
		printf("Value: %d | Index: %d\n", c[x], x);
	}


	return 0;
}
