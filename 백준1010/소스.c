# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
int fact(int n) {
	if (n <= 1) {
		return 1;
	}
	return n * fact(n - 1);
}

int main() {
	int nn;
	scanf("%d", &nn);
	while (nn--) {
		int n, m;
		scanf("%d", &n);
		scanf("%d", &m);

		//printf("%d %d \n", fact(m), fact(m - n));
		int result1 = 1;
		int result2 = 2;
		for (int i = m; i > 1; i--) {
			result1 *= i;
		}
		for (int i = m - n; i > 1; i--) {
			result2 *= i;
		}
		printf("%d %d \n", result1, result2);
	}
}