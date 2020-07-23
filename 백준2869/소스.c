# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {
	int A, B, V;
	scanf("%d %d %d", &A, &B, &V);
	int result = 0;
	int day = 0;
	while (1) {
		day++;
		result += A;
		if (result >= V) {
			break;
		}
		else {
			result -= B;
		}
	}
	printf("%d", day);
}