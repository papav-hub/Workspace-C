# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <stdlib.h>
//ÇÏ´ÂÁß
int main() {
	int a[100] = { 0, }, b[100] = { 0, };
	//int a[100], b[100];
	scanf("%s %s", a, b);
	int aa = atoi(a);
	int bb = atoi(b);
	int result = aa + bb;
	printf("%d", result); 
}