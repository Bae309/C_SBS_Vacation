#include <stdio.h>

​

//배열을 출력하는 함수 만들기

//         a배열,  배열의 개수

//         a    ,     5

void sum(int a[], int length) {

	​

		int i;

	for (i = 0; i < length; i++) {

		printf("a[%d] = %d\n", i, a[i]);

	}

}

​

//포인터(변수명)을 배열명으로 사용할 수 있다.

// a배열의 주소(배열명으로 사용),배열의 개수(자동으로 구함) 

//             a,  sizeof(a) / sizeof(int)

//            &a, sizeof(a) / sizeof(int)

void sum1(int* pa, int length) {

	​

		int i;

	for (i = 0; i < length; i++) {

		printf("pa[%d] = %d\n", i, pa[i]);

	}

}

​

int main() {

	​

		/*

		//1.배열을 함수의 매개변수로 전달

		​

		int a[5] = { 10, 20, 30, 40, 50 };

		//함수 호출 : void sum(int a, int length)

		sum(a, 5);

		puts("-------------");

		​

		sum(a, sizeof(a) / sizeof(int));//배열의 개수 자동으로 구하기

		puts("-------------");

		 */

		​

		​

		//함수의 매개변수값을 주소값을 전달 ->배열명 : 포인터 변수이다.!!!

		//void sum1(int *pa, int length) 함수 호출

		​

		int a[5] = { 10, 20, 30, 40, 50 };

	sum1(a, sizeof(a) / sizeof(int));  //&a배열의 주소를 *pa에 전달한다.

	sum1(&a, sizeof(a) / sizeof(int));

	puts("-------------");

	​

		​

		​

		return 0;

}