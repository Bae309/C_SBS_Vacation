#include <stdio.h>

#include <stdlib.h>  //메모리 동적할당에 사용

​

//메모리의 동적할당

//Heap 영역에 메모리 공간을 할당해서 사용하고 사용이 끝나면 반납하는 기능이다.

​

​

int main() {

	​

		int num = 10; //정적 할당

	​

		//동적 할당 변수 선언 

		//stack 영역에 포인터 변수로 선언되어야 한다. 

		//-> Heap 영역에 배치된(저장된) 데이터값을 찾아갈 주소를 넣어준다.

		​

		//할당형식) 포인터 변수  = malloc(자료형 * 개수)

		//할당형식) int*  ptr = (int*) malloc (sizeof(int));

		​

		//정수형이 5개인 동적할당

		//int* iptr; //포인터(변수) -> 주소만 저장하는 변수!!!

		//iptr = (int*)malloc(sizeof(int) * 5);

		​

		int* iptr = (int*)malloc(sizeof(int) * 5);

	​

		int i; //초기화 변수

	int sum = 0; //데이터값을 누적시키는 변수

	​

		for (i = 0; i < 5; i++) {

			​

				//iptr[i] = 0; //메모리공간에 데이터 값을 0으로 초기화

				iptr[i] = 10 * (i + 1); // 메모리공간에 데이터 값을 10, 20, 30, 40, 50으로 초기화

			​

				sum += iptr[i];//sum = sum + iptr[i];

			​

				printf("iptr[%d] = ", i);

			printf("%d\n", iptr[i]); //iptr[0]

			printf("sum = %d\n", sum);

		}

	​

		//Heap 영역 사용이 끝나면 반납하기

		//형식) free (포인터(변수));

		​

		free(iptr);

	puts("-------------");

	​

		​

		//실수형이 3개인 동적할당

		//10.5, 15.5, 20.5

		double* dptr = (double*)malloc(sizeof(double) * 3);

	​

		dptr[0] = 10.5;

	dptr[1] = 15.5;

	dptr[2] = 20.5;

	printf("%g %g %g \n", dptr[0], dptr[1], dptr[2]);

	printf("%lf %lf %lf \n", dptr[0], dptr[1], dptr[2]);

	puts("---------------");

	​

		//반납

		free(dptr);

	​

		​

		​

		​

		​

		return 0;

}