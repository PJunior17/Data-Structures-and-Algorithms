#include <stdio.h>

int len(char string[]) {
	int n = 0;

	while(string[n] != '\0') {
		n++;
	}
	return n;
}

int main() {
	char s[100];
	printf("Enter a string you want to reverse: ");
	scanf("%[^\n]", s);
       	
	int n = len(s);
	
	int i = 0;
	int j = n - 1;

	while(i < j) {
		char temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}

	printf("%s", s);
	
	return 0;
}
