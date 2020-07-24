# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {
	int A, B, V;
	scanf("%d %d %d", &A, &B, &V);
	//V-B = 달팽이가 목표 지점에 도착한 날에는 미끌어지 않음으로 (A-B로 계산하려면)
	int day = 0;
	if ((V - A) % (A - B) == 0) {
		day = (V - B) / (A - B);
	}
	else {//나누어 떨어지지 않으면 하루가 더 필요하므로 + 1
		day = (V - B) / (A - B) + 1;
	}
	printf("%d", day);
}