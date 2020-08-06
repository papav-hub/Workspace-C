# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {

	int min, max;
	scanf("%d %d", &min, &max);

	int count = max - min + 1;

	if (min < 3) {
		min = 3;
	}

	for (int i = min; i <= max; i++) {
		for (int j = 2; j < i; j++) {
			if (i == j*j) {
				count--;
				continue;
			}
		}
	}

	printf("%d", count);
}