# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
char array[1000][1000];


int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			array[i][j] = '*';
		}
	}

	////////////////////////////////////////////////////////////////////////////

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((i % 3 >= 1) && (j % 3 >= 1) && (i % 3 < 2) && (j % 3 < 2)) {
				array[i][j] = ' ';
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((i % 9 >= 9 / 3) && (j % 9 >= 9 / 3) && (i % 9 < (9 / 3) * 2) && (j % 9 < (9 / 3) * 2)) {
				array[i][j] = ' ';
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((i % 27 >= 27 / 3) && (j % 27 >= 27 / 3) && (i % 27 < (27 / 3) * 2) && (j % 27 < (27 / 3) * 2)) {
				array[i][j] = ' ';
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((i % 81 >= 81 / 3) && (j % 81 >= 81 / 3) && (i % 81 < (81 / 3) * 2) && (j % 81 < (81 / 3) * 2)) {
				array[i][j] = ' ';
			}
		}
	}

	////////////////////////////////////////////////////////////////////////////

	

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%c", array[i][j]);
		}
		printf("\n");
	}
}