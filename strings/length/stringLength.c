#include <stdio.h>

int main() {
	char s[10] = "happy!!";
	int n = 0;
	
	while(s[n] != '\0') {
		n++;
	}
	printf("%d\n", n);

	return 0;
}
