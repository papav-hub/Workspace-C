#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char array[100000];
int nn = 0;
void asdf(int n, int d) {
	for (int i = 0; i < n; i++) {
		if (array[i] == '1') {
			int check = 1;
			for (int j = i + 1; j < i + d + 1; j++) {
				if (array[i] == '1') {
					check = 0;
				}
			}
			if (check == 1) {
				int checkk = 1;
				for (int j = i + d + 1; j < i + d + d + 1; j++) {
					if (array[i] == '1') {
						checkk = 0;
					}
				}
				if (check == 1) {
					if (array[i + d] == '0') {
						array[i + d] = 'x';
						nn++;
						if (nn == 2) {
							printf("%s\n", array);
							printf("%d", d);
							exit(0);
						}
					}
				}
				else {
					d--;
					asdf(n, d);
				}
			}
			else {
				d--;
				asdf(n, d);
			}
		}
	}
}

int main () {

	int n;
	scanf("%d ", &n);

	gets(array);

	int d = n;
	for (int i = 0; i < n; i++) {
		if (array[i] == '1') {
			for (int j = i+1; j < n; j++) {
				if (array[j] == '1') {
					if (d > j - i) {
						d = j - i;
						break;
					}
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {

	}

	asdf(n, d);
}