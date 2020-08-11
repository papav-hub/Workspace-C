# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {
	int nnn;
	scanf("%d", &nnn);
	while (nnn--) {

		int Array[50][50] = { 0, };
		int N, M;
		scanf("%d %d", &N, &M);

		int k;
		scanf("%d", &k);
		while (k--) {
			int a, b;
			scanf("%d %d", &a, &b);
			Array[a][b] = 1;
		}

		int count = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (Array[i][j] == 1) {
					Array[i][j] = 3;
					if ((Array[i + 1][j] < 3) && (Array[i - 1][j] < 3) && (Array[i][j + 1] < 3) && (Array[i][j - 1] < 3)) {
						count++;
					}
				}
			}
		}
		printf("%d", count);



	}

}