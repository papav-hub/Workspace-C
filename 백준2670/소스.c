# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main () {
	double Array[10000];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lf", &Array[i]);
	}

	double max = 0.0;

	for (int i = 1; i <= n; i++) { // 몇개의 곱을 구하는가
		for (int j = 0; j <= n - i; j++) { // 곱의 첫번째 배열을 어디로 하는가
			double result = 1.0;
			for (int k = j; k < j + i; k++) { // 어디서부터 어디까지 곱하기
				result *= Array[k];
			}
			if (result > max) {
				max = result;
			}
		}
	}

	printf("%.3lf", max);
}