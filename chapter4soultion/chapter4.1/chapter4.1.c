#include <stdio.h>

int main(void) {
	//제어문(조건문)

	//1. if문 : 조건에 맞을 경우에만 수행한다.
	//조건 작성 방법 
	//형식) 비교대상 비교연산자 비교할기준값 -> 결과값은 참 or 거짓
	char alpha = 'F';

	// 'A' == 'A' -> 참
	// 'A' == 'F' -> 거짓
	if (alpha == 'F') { //
		printf("%c\n", alpha);
	}
	printf("-------------------\n");

	//2. if ~ else문 : 조건이 맞을때와 맞지 않을째 각각 수행하는 구문을 지정한다.
	// 'A' == 'F' -> 거짓
	if (alpha == 'A') {
		printf("%c\n", alpha);
	}
	else {
		printf("alpha 변수의 값이 출력되지 않습니다.!!!\n");
	}

	//3. if ~ else if ~ else문 : 조건이 여러개일때 각각 조건에 해당하면 맞는 조건에 
	//해당하는 구문을 수행하고 물어보지 않은 조건은 else구눔에서 처리하도록 만든다
	if (alpha == 'A') {
		printf("%c\n", alpha);
	}
	else if (alpha == 'B') {
		printf("%c\n", alpha);
	}
	else if (alpha == 'C') {
		printf("%c\n", alpha);
	}
	else {
		printf("alpha 변수의 값은 A, B, C가 아닌 다른 값입니다.!!!\n");
	}
	return 0;
}