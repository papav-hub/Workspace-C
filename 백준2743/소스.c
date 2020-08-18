# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {
	char s[100];
	gets(s);
	printf("%d", strlen(s));
}