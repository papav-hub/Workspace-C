# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {
	int Array[100][100] = { 0, };
	int n = 4;
	while (n--) {
		int a, b, c, d;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		for (int i = a ; i < c; i++) {
			for (int j = b ; j < d; j++) {
				Array[i][j] = 1;
			}
		}
	}

	int number = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			//printf("%d", Array[i][j]);
			if (Array[i][j] == 1) {
				number++;
			}
		}
		//printf("\n");
	}
	printf("%d", number);
}