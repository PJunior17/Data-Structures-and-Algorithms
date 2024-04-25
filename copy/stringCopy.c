#include <stdio.h>

int main() {
	char s[10] = "happy ^_^";
	char t[10];

	int i = 0;
	while(s[i] != '\0') {
		t[i] = s[i];
		i++;
	}
	t[i] = '\0';

	printf("S: %s | T: %s\n", s, t);
	return 0;
}

