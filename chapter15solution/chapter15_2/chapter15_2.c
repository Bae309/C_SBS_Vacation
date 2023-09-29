#include <stdio.h>

​

//구조체 : 서로 다른 자료형들을 하나로 묶어서 관리한다.

//객체 지향언어의 기본이 된다.

//형식)struct 구조체명 { 자료형이 다른 여러개의 변수를 정의 -> 멤버 변수 }

​

struct person {

	​

		char name[10]; //이름을 저장하는 멤버 변수

	int age; //나이를 저장하는 멤버 변수

};

​

int main() {

	​

		//자료형 변수명 = 값;

		int a = 10;

	​

		//구조체(사용자 정의 자료형) 사용 방법

		//형식) struct person  변수명 = { 값1, 값2 ..}

		​

		struct person  boy = { "김소년", 15 };

	struct person  girl = { "이소녀", 16 };

	​

		printf("소년의 이름은 %s, 나이는 %d 세\n", boy.name, boy.age);

	printf("소녀의 이름은 %s, 나이는 %d 세\n", girl.name, girl.age);

	​

		​

		​

		​

		return 0;

}