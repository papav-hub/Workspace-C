# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	int n = 0;
	for (int i = a; i <= b; i++) {
		if (i % 3 == 0) {
			n++;
		}
		else {
			int nn = i;
			while (1) {
				if ((nn / 10 == 3) || (nn / 10 == 6) || (nn / 10 == 9)|| (nn % 10 == 3) || (nn % 10 == 6) || (nn % 10 == 9)) {
					n++;
					break;
				}
				if (nn < 10) {
					break;
				}
				nn = nn % 10;
			}
		}
	}
	printf("%d", n%20150523);
}