# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {
	int A, B, V;
	scanf("%d %d %d", &A, &B, &V);
	//V-B = �����̰� ��ǥ ������ ������ ������ �̲����� �������� (A-B�� ����Ϸ���)
	int day = 0;
	if ((V - A) % (A - B) == 0) {
		day = (V - B) / (A - B);
	}
	else {//������ �������� ������ �Ϸ簡 �� �ʿ��ϹǷ� + 1
		day = (V - B) / (A - B) + 1;
	}
	printf("%d", day);
}