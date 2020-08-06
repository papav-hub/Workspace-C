# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {
	int arr1[16][16] = { 0, };
	int arr2[16][16] = { 0, };

	int n;
	scanf("%d", &n);


	for (int i = 0; i < n; i++) {
		int nn;
		scanf("%d", &nn);
		for (int ii = n - 1; nn > 0; ii--) {
			arr1[i][ii] = nn % 2;
			nn = nn / 2;
		}
	}
	for (int i = 0; i < n; i++) {
		int nn;
		scanf("%d", &nn);
		for (int ii = n - 1; nn > 0; ii--) {
			arr2[i][ii] = nn % 2;
			nn = nn / 2;
		}
	}

	int result[16][16] = { 0, };
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr1[i][j] == 1 || arr2[i][j] == 1) {
				result[i][j] = 1;
			}
			if (arr1[i][j] == 0 && arr2[i][j] == 0) {
				result[i][j] = 0;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (result[i][j]==1) {
				printf("#");
			}
			if (result[i][j] == 0) {
				printf(" ");
			}
		}
		printf("\n");
	}

	

	
}