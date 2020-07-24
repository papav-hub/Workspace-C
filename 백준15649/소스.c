# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {
	int N, M;
	scanf("%d %d", &N, &M);

	for (int i = 1; i <= N; i++) {
		for (int j = i + 1; j <= N; j++) {
			if (i != j) {
				printf("%d %d", i, j);
			}
		}





		printf("\n");
	}


}