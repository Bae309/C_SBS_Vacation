#include <stdio.h>

int main(void) {
	//변수(variable) : 데이터를 담아둘수 있는 메모리 공간의 이름(주소)
	//형식) 자료형(데이터타입) 변수명 = 담을값;

	//변수의 초기화
	int num = 100;	//메모리 공간을 확보하고 데이터값을 넣어놓았다.

	//변수만 확보
	int num1;	//메모리 공간만 확보하고 데이터값은 넣어놓지 않았다.

	//printf("서식변환자", 변수명);
	//printf("형식문자", 데이터값);
	//서식변환자
	//%d : 정수 형식으로 표시
	//%f, %lf : 실수 형식으로 표시
	//%c : 문자형식으로 표시
	//%s : 문자열 형식으로 표시

	printf("%d\n", num);
	printf("-------------\n");


	//변수가 만들어질 떄 넣어놓은 초기화값을 수정
	//변수가 새로운 값을 대입한다.!!!
	num = 200;
	printf("%d\n", num);
	printf("-------------\n");

	//num1 변수값 출력
	//printf("%d\n", num1);
	//printf("-------------\n");

	num1 = 10000;
	printf("%d\n", num1);
	printf("-------------\n");


	//변수에 이름, 나이, 키, 혈액형 데이터를 저장하고 출력하기
	printf("이름은 배성윤입니다.!!!\n");
	printf("나이는 20세 입니다.!!!\n");
	printf("키는 183cm입니다.!!\n");
	printf("혈액형은 B형입니다.!!!\n");
	printf("-------------\n");

	char name[10] = "배성윤";	//문자열 입력은 큰따옴표(")로 감싸기
	int age = 20;
	double height = 183.1;
	char blood = 'B';	//문자하나 입력 : 작은 따옴표로 감싸기
	printf("%s\n", name);
	printf("%d\n", age);
	printf("%10.1f\n", height); //%3
	printf("%c\n", blood);
	printf("-------------\n");

	printf("이름은 %s 입니다.\n", name);
	printf("나이는 %d세 입니다.!!!\n", age);
	printf("키는 %.1fcm입니다.!!\n", height);
	printf("혈액형은 %c형입니다.!!!\n", blood);
	printf("-------------\n");

	printf("%s %d %3f %c\n", name, age, height, blood);
	printf("이름:%s, 나이:%d, 키:%.1fcm, 혈액형:%c형\n", name, age, height, blood);
	return 0;
}