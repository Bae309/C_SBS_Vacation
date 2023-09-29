#include <stdio.h>

int main() {
	//1. 주석처리 : 코드를 수행하지 않는 구문으로 만든다.
	//->한줄 주석 : 구문 앞에 //를 붙인다.
	//->묶음 주석 : 시작 위치와 마지막 위치에 /* ~~~ */로 묶어서 만든다.
	//2. 컴파일과 실행을 동시에 처리하는 단축키 : Crtl + F5
	//3. 수행시킬 명령의 끝은 반드시 세미콜론(;)을 붙인다

	printf("Hello World!!!\n");
	printf("자기 소개\n");
	printf("이름은 \\배성윤입니다.\n");
	printf("나이는 23세입니다.\n");
	printf("키는 183cm입니다.\n");
	printf("혈액형은 B형입니다.\n");

	//변수(Variable) : 값을 담아두는 메무리 공간
	//(형식)자료형(데이터타입) 변수명 = 값
	int num = 10;
	printf("%d", num);

	return 0;
}