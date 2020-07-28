# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>

int main() {
	int nn;
	scanf("%d", &nn);

	while (nn--) {
		int n;
		scanf("%d", &n);
		char s[100];
		scanf("%s", s);
		char Array[8000];
		for (int i = 0; i < strlen(s); i++) {
			for (int j = i * n; j < (i * n) + n; j++) {
				Array[j] = s[i];
			}
		}

		Array[strlen(s) * n] = '\0';

		printf("%s\n", Array);

	}

}