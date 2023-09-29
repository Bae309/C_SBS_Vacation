#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define RATE 1200	   //매크로 상수

int main() {
	//상수(Constant) : 변하지 않는 고정된 값이다.
	//기호 상수(Symbolic  Constant)
	//1. 매크로 상수(Macro Constant)

	/*
	int won = 1 * 1000;
	int won1 = 2 * 1000;
	int won2 = 3 * 1000;
	int won3 = 4 * 1000;
	int won4 = 5 * 1000;

	printf("won = %d\n", won);
	printf("won1 = %d\n", won1);
	printf("won2 = %d\n", won2);
	printf("won3 = %d\n", won3);
	printf("won4 = %d\n", won4);
	*/

	/*
	int won = 1 * RATE;
	int won1 = 2 * RATE;
	int won2 = 3 * RATE;
	int won3 = 4 * RATE;
	int won4 = 5 * RATE;

	printf("won = %d\n", won);
	printf("won1 = %d\n", won1);
	printf("won2 = %d\n", won2);
	printf("won3 = %d\n", won3);
	printf("won4 = %d\n", won4);
	printf("------------\n");
	*/

	//2.심볼릭 상수(Symbolic  Constant):
	//변수명 앞에 const키워드를 붙여서 사용하는 방법
	//메모리공간에 데이터를 초기화시켜 놓고 새로운 값을 넣지못하도록 막는 방법

	/*
	const int RATE1 = 1000;	//메모리공간 확보하고 1000이라는 값으로 넣어놓은 상태(초기화)
	//RATE1 = 1200; //이미 메모리공간에 넣어져 있는 값을 변경(변수에 새로운 값 대입)

	int won = 1 * RATE1;
	int won1 = 2 * RATE1;
	int won2 = 3 * RATE1;
	int won3 = 4 * RATE1;
	int won4 = 5 * RATE1;

	printf("won = %d\n", won);
	printf("won1 = %d\n", won1);
	printf("won2 = %d\n", won2);
	printf("won3 = %d\n", won3);
	printf("won4 = %d\n", won4);
	printf("------------\n");
	*/

	/*
	 //자료형 변환
	//1.자동 자료형 변환 : 큰자료형은 작은 자료형을 포함할 수 있다.
	short number1 = 10000;
	int number2 = (int)number1;	//정수 60
	float number3 = number2;  // 정수 60 -> 실수형 60
	double number4 = number3;

	printf("%d\n", number1);
	printf("%d\n", number2);
	printf("%f\n", number3);
	printf("%lf\n", number4);
	printf("---------------\n");

	//2.강제로 자료형변환
	//형식) (자료형)변수명or 데이터값
	printf("%d\n", (short)3.1425);
	printf("%d\n", (int)3.1425);
	printf("%f\n", (float)10);
	printf("%lf\n",(double)10);
	printf("---------------\n");
	 */

	 //표준 입력 : 키보드로 데이터를 입력 받는 방식

	 //scanf()함수 : 키보드에서 입력받은 값을 변수에 저장하는 함수이다.
	 //형식)scanf("서식변환자(형식문자)", &저장할 변수명);

	 /*
	 int num = 10;
	 printf("num 변수의 값 = %d\n", num);
	 printf("num 변수의 메모리공간의 실제 주소값 = %x\n", &num); //num변수의 메모리 공간 주소
	 printf("--------------\n");

	 //1.키보드로 데이터값을 입력받아 저장할 변수명(메모리 공간)을 미리 확보해야 한다.!!!
	 //2.저장할 변수명(메모리 공간)앞에 주소연산자(&)를 붙여 실제 메모리공간의 주소에 넣는다.

	 int num1; //메모리공간만 확보

	 printf("정수 숫자를 입력하세요..... : ");
	 scanf("%d", &num1);	//메모리공간의 실제 주소를 찾아가서 넣어야 한다.

	 printf("num1변수에 입력받은값 출력 = %d\n", num1);
	 */

	char character;
	int inum;
	float fname;

	printf("문자를 입력하세요..... : ");
	scanf("%c", &character);

	printf("정수 숫자를 입력하세요..... : ");
	scanf("%d", &inum);

	printf("실수 숫자를 입력하세요..... : ");
	scanf("%f", &fname);

	printf("character변수에 입력받은값 출력 = %c\n", character);
	printf("inum 변수에 입력받은값 출력 = %d\n", inum);
	printf("fname변수에 입력받은값 출력 = %f\n", fname);


	return 0;
}