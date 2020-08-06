# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int main(void) {

	int n;
	scanf("%d", &n);

	int A[200];
	int B[200];

	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}

	for (int i = 0; i < n; i++) {
		scanf("%d", &B[i]);
	}

	int result = 0;

	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			int max = 0;
			int ex = 0;
			for (int j = 0; j < n; j++) {
				if (A[i] > ex) {
					ex = A[i];
					max = i;
				}
			}
			result += ex;
			B[max] = 0;
			A[max] = 0;
		}
		else {
			int max = 0;
			int ex = 0;
			for (int j = 0; j < n; j++) {
				if (B[i] > ex) {
					ex = B[i];
					max = i;
				}
			}
			B[max] = 0;
			A[max] = 0;
		}
	}


	printf("%d", result);


	return 0;
}