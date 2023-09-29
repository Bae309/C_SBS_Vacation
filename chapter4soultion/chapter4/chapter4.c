#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	/*
	//변수에 키보드로부터 데이터를 입력받아서 저장하는 기능
	//형식 > scanf("서식 변환자", &변수명(입력장소)

	char character;
	int inum; //정수값 100을 저장하고 출력
	float fnum; //105.25를 저장하고 출력

	printf("문자를 입력하세요 >>> ");
	scanf("%c", &character);
	printf("입력받은 값 = %c\n", character);
	printf("-----------------\n");

	printf("정수를 입력하세요 >>> ");
	scanf("%d", &inum);
	printf("입력받은 값 = %d\n", inum);
	printf("-----------------\n");

	printf("실수를 입력하세요 >>> ");
	scanf("%f", &fnum);
	printf("입력받은 값 = %.2f\n", fnum);
	printf("-----------------\n");
	*/

	//2개의 정수를 입력받아서 더한값, 뺀값, 곱한값, 나눈값, 나머지를 계산해서 출력
	/*
	int num = 100;
	int num1 = 3;

	int result = num + num1;
	int result1 = num - num1;
	int result2 = num * num1;
	int result3 = num / num1;
	int result4 = num % num1;

	printf("result = %d\n", result);
	printf("result1 = %d\n", result1);
	printf("result2 = %d\n", result2);
	printf("result3 = %d\n", result3);
	printf("result4 = %d\n", result4);
	printf("-----------------\n");

	printf("num + num1 = %d\n", num + num1);
	printf("num - num1 = %d\n", num - num1);
	printf("num * num1 = %d\n", num * num1);
	printf("num / num1 = %d\n", num / num1);
	printf("num %% num1 = %d\n", num % num1);
	printf("-----------------\n");

	printf("%d %d %d %d %d \n", num + num1, num - num1, num * num1, num / num1, num % num1);
	*/

	//2개의 정수를 입력받아서 더한값, 뺀값, 곱한값, 나눈값, 나머지를 계산해서 출력
	int num2;
	int num3;

	/*printf("첫번째 정수를 입력하세요 >>>");
	scanf("%d", &num2);

	printf("두번째 정수를 입력하세요 >>>");
	scanf("%d", &num3);

	printf("num2 + num3 = %d\n", num2 + num3);
	printf("num2 - num3 = %d\n", num2 - num3);
	printf("num2 * num3 = %d\n", num2 * num3);
	printf("num2 / num3 = %d\n", num2 / num3);
	printf("num2 %% num3 = %d\n", num2 % num3);
	printf("-----------------\n");*/

	printf("첫번째 정수와 두번째 정수를 입력하세요 >>>");
	scanf("%d %d", &num2, &num3);//100 Enter, 3 Enter

	printf("%d + %d = %d\n", num2, num3, num2 + num3);
	printf("num2 + num3 = %d\n", num2 + num3);
	printf("num2 - num3 = %d\n", num2 - num3);
	printf("num2 * num3 = %d\n", num2 * num3);
	printf("num2 / num3 = %d\n", num2 / num3);
	printf("num2 %% num3 = %d\n", num2 % num3);
	printf("-----------------\n");
	return 0;
}