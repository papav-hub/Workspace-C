# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
char array[1000][1000];

void star (int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((i >= n / 3) && (i < 2 * n / 3) && (j >= n / 3) && (j < 2 * n / 3)) {
				array[i][j] = ' ';
			}
		}
	}

	if (n > 3) {
		star(n / 3);
	}
}

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			array[i][j] = '*';
		}
	}

	star(n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%c", array[i][j]);
		}
		printf("\n");
	}
}