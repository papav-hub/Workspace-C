# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <stdlib.h>

int main() {
	int a[8];
	for (int i = 0; i < 8; i++) {
		scanf("%d", &a[i]);
	}
	if (a[0] == 1) {
		for (int i = 0; i < 7; i++) {
			if (a[i + 1] != a[i] + 1) {
				printf("mixed");
				exit(0);
			}
		}
		printf("ascending");
	}
	else if (a[0] == 8) {
		for (int i = 0; i < 7; i++) {
			if (a[i + 1] != a[i] - 1) {
				printf("mixed");
				exit(0);
			}
		}
		printf("descending");
	}
	else {
		printf("mixed");
	}

}