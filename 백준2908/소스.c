# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>

int main() {
	char A[10];
	char B[10];
	scanf("%s %s", &A, &B);
	char a[10];
	char b[10];
	for (int i = 0; i < 3; i++) {
		a[i] = A[2-i];
		b[i] = B[2-i];
	}
	a[3] = '\0';
	b[3] = '\0';
	
	int numA = atoi(a);
	int numB = atoi(b);

	if (numA > numB) {
		printf("%d", numA);
	}
	else {
		printf("%d", numB);
	}
}