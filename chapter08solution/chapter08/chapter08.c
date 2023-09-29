#define _CRT_SECURE_NO_WARNINGS

#define COUNT 2 //매크로 상수

​

#include <stdio.h>

​

int main() {

    ​

        /*

        // 1 ~ 10 까지 출력할 때 홀수만(1,3,5,7)만 반복을 수행하지 않는 프로그램 작성

            // 9가 되면 반복 수행을 중지!!!

        ​

        //break문과 continue문

        //1.break문 : 반복을 중지 시킨다.

        //2.continue문 : 현재의 반복만 수행하지 않고 다음 반복을 수행하도록 한다.

        ​

        //논리 연산자 : 조건의 결과 참, 거짓을 가져다가 다시 연산하는 연산자

        //1.AND 연산자(&&) : (조건1) 과 (조건2) 가 동시에 참이어야만 수행한다.

        //2.OR 연산자(||) : (조건1)이 참이면 조건1을 수행하고 (조건2) 가 참이면 조건2를 수행한다.

        //3.NOT(!) : 조건이 참이면 거짓으로, 거짓이면 참으로 수행되게 한다.

        ​

        int num2; //초기화 변수

        ​

        for (num2 = 1; num2 <= 10; num2++) {

        ​

        if ((num2 == 1) || (num2 == 3) || (num2 == 5) || (num2 == 7))  continue;

        ​

        if (num2 == 9) break;

        printf("num2변수값 = %d\n", num2);

        ​

        ​

        }

        */

        ​

        ​

        ​

        /*

         //배열(Array)



        //변수로 처리 방식

        int stu1 = 100;

        int stu2 = 90;

        int stu3 = 85;

        ​

        printf("stu1 = %d\n", stu1);

        printf("stu2 = %d\n", stu2);

        printf("stu3 = %d\n", stu3);

        printf("--------------\n");

        ​

        //배열 방식으로 처리

        //형식) 자료형 변수명(배열명)[배열크기 or 개수];

        //배열 요소에 접근 : 인덱스(index) 번호 값을 찾아서 지정(*** 0번 부터 시작)

        //-> 변수명[찾아갈 인덱스 번호]

        ​

        //배열 선언

        int stu[3];

        printf("stu[0] = %d\n", stu[0]);

        printf("stu[1] = %d\n", stu[1]);

        printf("stu[2] = %d\n", stu[2]);

        printf("--------------\n");

        ​

        //배열 요소에 사용할 데이터값을 대입하기

        stu[0] = 100;

        stu[1] = 90;

        stu[2] = 85;

        printf("stu[0] = %d\n", stu[0]);

        printf("stu[1] = %d\n", stu[1]);

        printf("stu[2] = %d\n", stu[2]);

        printf("--------------\n");

        ​

        ​

        // 배열을 생성함과 동시에 요소에 데이터값을 초기화

        ​

        //                 [0]  [1]  [2]

        int numbers[3] = { 100, 200, 300 };

        //int numbers[] = { 100, 200, 300 };

        printf("numbers[0] = %d\n", numbers[0]);

        printf("numbers[1] = %d\n", numbers[1]);

        printf("numbers[2] = %d\n", numbers[2]);

        printf("--------------\n");

        ​

        int i; //초기화 변수

        ​

        //          0 <= 2

        //          1 <= 2

        //          2 <= 2

        //          3 <= 2 - > 조건이 거짓 (반복 수행 안함)

        for (i = 0; i <= 2; i++) {

        ​

        //                                  0

        //                                  1

        //                                  2

        //printf("numbers[%d] = ", i); //배열 형식 출력

        //printf("%d\n", numbers[i]);  //배열 요소에 접근해서 데이터값 출력

        ​

        printf("numbers[%d] = %d\n", i, numbers[i]);

        }

        printf("------------\n");

         */

        ​

        ​

        ​

        /*

        int i; //초기화 변수

        //            [0] [1] [2] [3]  [4]

        int even[] = { 2,  4  ,6,  8 , 10 };

        ​

        for (i = 0; i <= 4; i++) {

        ​

        printf("even[%d] = %d\n", i, even[i]);

        }

        printf("------------\n");

        ​

        //배열의 개수 구하기

        //** sizeof() 함수 : 자료형, 배열등의 크기를 구해주는 함수

        //형식) sizeof(자료형 or 배열명);

        ​

        printf("sizeof(char) = %d\n", sizeof(char));

        printf("sizeof(short) = %d\n", sizeof(short));

        printf("sizeof(int) = %d\n", sizeof(int));

        printf("sizeof(float) = %d\n", sizeof(float));

        printf("sizeof(double) = %d\n", sizeof(double));

        printf("------------\n");

        ​

        //even 배열의 전체 크기(길이)

        printf("even 배열의 전체 크기(길이) = %d\n", sizeof(even)); //20개

        ​

        //even 배열의 개수 구하기

        //                                            20개      /  4byte

        printf("even 배열의 개수 구하기 = %d\n", sizeof(even)/sizeof(int));   //5개의 개수

        printf("------------\n");

        ​

        ​

        //                     5

        for (i = 0; i < sizeof(even) / sizeof(int); i++) {

        ​

        printf("even[%d] = %d\n", i, even[i]);

        }

        printf("------------\n");

        ​

        //배열의 개수를 구해서 저장하는 변수를 이용

        //       배열의 전체 크기(20) / 정수형(4byte)

        int len = sizeof(even) / sizeof(int); //배열개수 : 5개

        ​

        for (i = 0; i < len ; i++) {

        ​

        printf("even[%d] = %d\n", i, even[i]);

        }

        printf("------------\n");

        */

        ​

        ​

        ​

        //1차원 배열 예제

        //3명의 학생의 국어, 영어, 수학 점수를 입력받아서 합계와 평균을 구하는 프로그램 작성

        ​

        int i;//초기화변수

        int kor[COUNT], eng[COUNT], mat[COUNT], total[COUNT]; //국어, 영어, 수학, 합계

        double avg[COUNT]; //평균 

    ​

        for (i = 0; i < COUNT; i++) {

            printf("%d번 학생의 국어, 영어, 수학 점수를 입력하세요(스페이스 공백 입력): ", i + 1);

            scanf("%d %d %d", &kor[i], &eng[i], &mat[i]);

            ​

            total[i] = kor[i] + eng[i] + mat[i];

            avg[i] = total[i] / 3.0;

        }

    //100공백100공백100엔터90공백90공백90엔터

    printf("\n");

    ​

        // 출력할때 타이틀 만들기

        printf("학번   국어   영어   수학   총점     평균\n");

    printf("_________________________________________________\n");

    ​

        // 배열 출력

        for (i = 0; i < COUNT; i++) {

            printf("%3d  %6d  %5d  %5d  %5d     %.1f\n", i + 1, kor[i], eng[i], mat[i], total[i], avg[i]);

        }

    ​

        ​

        return 0;

}