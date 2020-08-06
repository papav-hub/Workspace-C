# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {
	int a, b, c, d, e, f;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);


	for (int i = -999; i < 1000; i++) {
		for (int j = -999; j < 1000; j++) {
			if ((a * i) + (b * j) == c) {
				if ((d * i) + (e * j) == f) {
					printf("%d %d", i, j);
					break;
				}
			}
		}
	}
}