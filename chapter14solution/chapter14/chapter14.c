#include <stdio.h>

​

//사용자 함수 정의

//형식) 반환값자료형  함수명(매개변수 or 인수 or 인자) {   처리과정  return 반환값;    }

//함수호출) 함수명(매개변수값 or 인수값 or 인자값)

​

//3유형 : 반환값이 있고, 매개변수값이 있는 경우

​

//           100,    20

int add2(int num, int num1) {

    ​

        int tot;

    ​

        //  120 =  100   20

        tot = num + num1;

    return tot; //tot = 120 -> 호출한 곳으로 결과값(반환값)을 돌려준다.!!!

}

​

​

//함수 원형 선언(function prototype declaration)

//** 사용자 정의 함수가 main() 함수 아래쪽에 만들어져 있을 경우에 반드시 선언해야 한다.

//** 함수 헤더 부분만 적어 주어야 한다.!!!

int getBigger(int n1, int n2);

​

​

​

int main() {

    ​

        /*

            //3유형 함수 호출 : 형식)함수명(매개변수값 or 인자값 or 인수값)

        // int add2(int num, int num1) 호출

        add2(100, 20); //함수 호출도 하고 함수내에서 계산한 결과값(반환값)을 저장하고 있다.!!

        ​

        int result = add2(100, 20); //돌려받은 결과값(반환값)을 변수에 저장해 놓기

        printf("함수내에서 받아온 반환값 출력 = %d\n", result);

        puts("------------");

        ​

        printf("함수내에서 받아온 반환값 출력 add2(100, 20) = %d\n", add2(100, 20));

        puts("------------");

        */

        ​

        //함수 호출 : 반환값도 있고, 매개변수값도 있는 경우

        //형식) 함수명(인수값1, 인수값2); 

        int result;

    ​

        //int getBigger(int n1, int n2) 호출과 결과값 저장

        result = getBigger(3, 5);

    printf("첫 번째 결과값 getBigger(3, 5) = %d\n", result);

    puts("------------");

    ​

        int result1 = getBigger(8, 2);

    printf("두 번째 결과값 getBigger(8, 2) = %d\n", result1);

    puts("------------");

    ​

        int result2 = getBigger(4, 4);

    printf("세 번째 결과값 getBigger(4, 4) = %d\n", result2);

    puts("------------");

    ​

        ​

        return 0;

}

​

​

//정수형 숫자2개를 함수의 매개변수값으로 넘겨 받아서 2개의 숫자중에 큰값을 판단해서 반환하는 함수

​

//               3   ,   5

//               8   ,   2

//               4   ,   4   

int getBigger(int n1, int n2) {

    ​

        if (n1 > n2) {

            return  n1;  //호출한 곳으로 결과값을 돌려준다.!!!!

        }

        else if (n1 < n2) {

            return  n2; //호출한 곳으로 결과값을 돌려준다.!!!!

        }

        else {

            return 0; //호출한 곳으로 결과값을 돌려준다.!!!!

        }

}

​

​

================================

#include <stdio.h>

​

//지역변수와 전역변수

//1.지역변수 : 자신이 선언된 지역({   }) 내에서만 사용이 가능한 변수이다.

//2.전역변수 : 모든 영역에서 접근이 가능한 변수이다.

//3.static 지역 변수 : 지역변수가 가진 특성을 일부 보완해주는 역할을 하는 변수이다.

​

int number = 100; //전역변수

​

void func() {

    ​

        //*** 지역변수와 전역변수의 변수명이 같은 경우에는 지역변수의 값을 우선으로 적용한다.!!!

        //지역변수에 사용할 변수값을 지(초기화)하지 않으면 동일한 변수이름의 전역변수값을 사용한다.!!!

        int number = 10;  //지역 변수 : func()

    printf("number = %d\n", number);

    puts("func() 내부에서만 사용되는 number 변수 입니다.!!!");

    return;

}

​

​

//static 지역 변수를 사용하는 함수 작성

void staticLocal() {

    ​

        //선언된 지역내에서 생성된 후 소멸되지 않는다.(함수 수행이 끝나고 소멸되지 않고 유지된다.)

        static int number = 0;

    number++;

    printf("static 지역변수 number = %d\n", number);

    puts("staticLocal() 내부에서만 사용되는 number 변수 입니다.!!!");

    return;

}

​

​

​

int main() {

    ​

        //함수 호출

        //void func() 함수 호출

        func();

    puts("----------");

    ​

        ​

        // void staticLocal() 함수 호출

        staticLocal();

    staticLocal();

    staticLocal();

    ​

        return 0;

}

​