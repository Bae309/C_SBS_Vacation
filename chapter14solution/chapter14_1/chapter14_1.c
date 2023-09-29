#include <stdio.h>

​

//배열을 출력하는 함수 만들기

​

//                   a(배열),     5

void sum(int a[], int length) {

    ​

        int i; //초기화 변수

    ​

        for (i = 0; i < length; i++) {

            printf("a[%d] = %d\n", i, a[i]); //a[0]

        }

    ​

}

​

int main() {

    ​

        //배열을 함수의 매개변수로 전달

        int a[5] = { 10, 20, 30, 40, 50 };

    ​

        // void sum(int a, int length) 함수 호출

        // 배열명, 배열개수

        sum(a, 5);

    ​

        return 0;

}