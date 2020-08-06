# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <stdlib.h> 

int main() {
	char arr[10] = { '0', };
	gets(arr);
	int r[10] = { 0, };
	for (int i = 0; i < 10; i++) {
		if (arr[i] == 'S') {
			r[i] = arr[i - 1] - '0';
			if (r[i] == 0) {
				if (arr[i - 2] == '1') {
					r[i] = 10;
				}
			}
			if (arr[i + 1] == '*') {
				r[i] *= 2;
				for (int j = i - 1; j > 0; j--) {
					if (r[j] != 0) {
						r[j] *= 2;
						break;
					}
				}
			}
			else if (arr[i + 1] == '#') {
				r[i] *= -1;
			}
		}
		if (arr[i] == 'D') {
			r[i] = arr[i - 1] - '0';
			if (r[i] == 0) {
				if (arr[i - 2] == '1') {
					r[i] = 10;
				}
			}
			r[i] *= r[i];
			if (arr[i + 1] == '*') {
				r[i] *= 2;
				for (int j = i - 1; j > 0; j--) {
					if (r[j] != 0) {
						r[j] *= 2;
						break;
					}
				}
			}
			else if (arr[i + 1] == '#') {
				r[i] *= -1;
			}
		}
		if (arr[i] == 'T') {
			r[i] = arr[i - 1] - '0';
			if (r[i] == 0) {
				if (arr[i - 2] == '1') {
					r[i] = 10;
				}
			}
			r[i] *= r[i] * r[i];
			if (arr[i + 1] == '*') {
				r[i] *= 2;
				for (int j = i - 1; j > 0; j--) {
					if (r[j] != 0) {
						r[j] *= 2;
						break;
					}
				}
			}
			else if (arr[i + 1] == '#') {
				r[i] *= -1;
			}
		}
	}
	int result = 0;
	for (int i = 0; i < 10; i++) {
		result += r[i];
	}
	printf("%d", result);
}