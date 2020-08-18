# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {
	int total = 0;
	int max = 0;

	for (int i = 0; i < 4; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		total -= a;
		if (total > max) {
			max = total;
		}
		total += b;
		if (total > max) {
			max = total;
		}
	}
	printf("%d", max);
}