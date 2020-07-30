# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
#include <stdlib.h>

int N, M;
int array[1000];

void print() {
	for (int i = 0; i < M; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}

int overlap() {//0이면 중복 없음 //1이면 중복
	int check = 0;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < M - 1; j++) {
			if (array[i] == array[j]) {
				check = 1;
			}
		}
	}
	return check;
}

void over() {//N을 넘어갔느냐
	for (int i = 0; i < M; i++) {
		if (array[i] > N) {
			if (i == 0) {
				exit(1);
			}
			else {
				array[i - 1]++;
				if (overlap() == 1) {
					over();

				}
			}
		}
	}
}

int main() {
	scanf("%d %d", &N, &M);

	for (int i = 0; i < M; i++) {//처음 값
		array[i] = i + 1;
	}
	print();

	while (1) {
		array[N]++;
		over();
		print();
	}


}