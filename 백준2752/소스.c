# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {
	int a[3];
	for (int i = 0; i < 3; i++) {
		scanf("%d", &a[i]);
	}
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 2; i++) {
			if (a[i] > a[i + 1]) {
				int t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}
	}

	printf("%d %d %d", a[0], a[1], a[2]);
}