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

	for (int i = 1; i <= n; i++) { // ��� ���� ���ϴ°�
		for (int j = 0; j <= n - i; j++) { // ���� ù��° �迭�� ���� �ϴ°�
			double result = 1.0;
			for (int k = j; k < j + i; k++) { // ��𼭺��� ������ ���ϱ�
				result *= Array[k];
			}
			if (result > max) {
				max = result;
			}
		}
	}

	printf("%.3lf", max);
}