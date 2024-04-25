#include <stdio.h>

int main() {
	char s[100] = "vi is cool, ";
	char t[100] = "jk vim is better";
	
	printf("%s\n", s);
	printf("%s\n", t);

	int i = 0;
	int j = 0;

	while(s[i] != '\0') {
		i++;
	}

	while(t[j] != '\0') {
		s[i] = t[j];
		i++;
		j++;
	}
	t[i] = '\0';

	printf("%s\n", s);

	return 0;
}
