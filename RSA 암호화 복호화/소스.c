# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>
# define max 100
// n�� e�� ���μ� ����
# define p 11
# define q 3
# define n 33
# define e 3

int main() {
	//��ȣȭ
	//��ȣȭ �� ���� �Է¹ޱ�
	printf("��ȣȭ �� ������ �����ּ���\n");
	char s[max];
	gets(s);

	//���ĺ� ������ ������ �迭�� �ٲٱ�
	int m[max];
	for (int i = 0; i < strlen(s); i++) {
		m[i] = s[i] - 96;
		printf("%d ", m[i]);
	}
	printf("\n");

	//��ȣȭ C = M^e mod n
	int c[max];
	for (int i = 0; i < strlen(s); i++) {
		c[i] = (int)pow(m[i], e) % n;
		printf("%d ", c[i]);
	}
	printf("\n");



	//��ȣȭ
	//d ���ϱ� // e*d mod(p-1)(q-1)=1 �� �� d��
	int d;
	for (int i = 0; i < 100; i++) {
		if (e * i % ((p - 1)*(q - 1)) == 1) {
			d = i;
			break;
		}
	}

	//��ȣȭ M = C^d mod n
	int M[max];
	for (int i = 0; i < strlen(s); i++) {
		M[i] = (int)pow(c[i], d) % n;
		printf("%d ", M[i]);
	}
	printf("\n");

	//�ٽ� ���ڿ���
	char result[max];
	for (int i = 0; i < strlen(s); i++) {
		result[i] = M[i] + 96;
		printf("%c", result[i]);
	}
	printf("\n");
}