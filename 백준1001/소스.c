# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
int main(void) {
	//�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	int A, B, result;
	scanf("%d %d", &A, &B);
	result = A - B;
	printf("%d", result);

	return 0;
}