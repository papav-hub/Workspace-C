#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
int main() {
	int reject = 0;
	int n;
	scanf("%d", &n);

	int Array[100] = { 0, };
	int nn;
	while (n--) {
		scanf("%d", &nn);
		if (Array[nn] == 1) {
			reject++;
		}
		else {
			Array[nn] = 1;
		}
	}
	printf("%d", reject);
}