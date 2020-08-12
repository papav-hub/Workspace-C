# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>
# define max 100
// n과 e는 서로소 관계
# define p 11
# define q 3
# define n 33
# define e 3

int main() {
	//암호화
	//암호화 할 문장 입력받기
	printf("암호화 할 문장을 적어주세요\n");
	char s[max];
	gets(s);

	//알파벳 순서로 정수형 배열로 바꾸기
	int m[max];
	for (int i = 0; i < strlen(s); i++) {

		m[i] = s[i];
		if (m[i] > 96 && m[i] < 123) {// 소문자
			m[i] -= 96;
		}
		/*else if(m[i] > 100 && m[i] < 133){// 대문자
			m[i] -= 100;
		}*/
		else {
			m[i] = 0;// 공백 예외처리
		}

		printf("%d ", m[i]);
	}
	printf("\n");

	//암호화 C = M^e mod n
	int c[max];
	for (int i = 0; i < strlen(s); i++) {
		c[i] = (int)pow(m[i], e) % n;
		printf("%d ", c[i]);
	}
	printf("\n");



	//복호화
	//d 구하기 // e*d mod(p-1)(q-1)=1 일 때 d값
	int d;
	for (int i = 0; i < 100; i++) {
		if (e * i % ((p - 1)*(q - 1)) == 1) {
			d = i;
			break;
		}
	}

	//복호화 M = C^d mod n
	int M[max];
	for (int i = 0; i < strlen(s); i++) {
		M[i] = (int)pow(c[i], d) % n;
		printf("%d ", M[i]);
	}
	printf("\n");

	//다시 문자열로
	char result[max];
	for (int i = 0; i < strlen(s); i++) {
		if (M[i] == 0) { // 공백 예외처리
			result[i] = ' ';
		}
		else {
			result[i] = M[i] + 96;
		}
		printf("%c", result[i]);
	}
	printf("\n");
}