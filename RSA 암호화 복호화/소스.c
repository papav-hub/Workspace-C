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

		m[i] = s[i];
		if (m[i] > 96 && m[i] < 123) {// �ҹ���
			m[i] -= 96;
		}
		/*else if(m[i] > 100 && m[i] < 133){// �빮��
			m[i] -= 100;
		}*/
		else {
			m[i] = 0;// ���� ����ó��
		}

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
		if (M[i] == 0) { // ���� ����ó��
			result[i] = ' ';
		}
		else {
			result[i] = M[i] + 96;
		}
		printf("%c", result[i]);
	}
	printf("\n");
}