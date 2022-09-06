#include <stdio.h>
#include <string.h>

void reverseStr (char *str) {
	int i, len, temp;
	len = strlen(str);
	for (i = 0; i < len/2; i++) {
		temp = str[i];
		str[i] = str[len-i-1];
		str[len-i-1] = temp;
	}
}

int main () {
	char str[50];
	printf("Enter the string: ");
	gets(str);
	printf("Original string: %s\n", str);
	reverseStr(str);
	printf("After reversing the string: %s", str);
	return 0;
}
