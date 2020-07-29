# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
char array[1000][1000];

void star(int n) {
	for (int i = 0; i < 1000; i++) {
		for (int j = 0; j < 1000; j++) {
			if ((i % n >= n / 3) && (j % n >= n / 3) && (i % n < (n / 3) * 2) && (j % n < (n / 3) * 2)) {
				array[i][j] = ' ';
			}
		}
	}

	if (n > 3) star(n / 3);
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