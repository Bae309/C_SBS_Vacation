#include <stdio.h>

​

//함수 (function)

​

//사용자 정의 함수 

// 형식) 반환값자료형  함수명(매개변수 or 인수 or 인자) {    처리과정  return 반환값;   }

​

//1유형 : 함수내에서 처리한 결과값을 반환할 필요가 없고, 함수내에서 계산해야 하는 값을 입력해 줄 필요가 없는 경우

//1유형 : 반환값이 없고, 매개변수가 없는 경우

​

void add() {

    ​

        int num = 100;

    int num1 = 10;

    ​

        int total = num + num1;

    printf("%d + %d = %d\n", num, num1, total);

    return;

    ​

}

​

​

//2유형 : 반환값이 없고, 매개변수가 있는 경우

//          200 ,    10

void add1(int num, int num1) {

    ​

        //          200 + 10

        int total = num + num1;

    printf("%d + %d = %d\n", num, num1, total);

    return;

    ​

}

​

int main() {

    ​

        /*

        //2차원 배열

        //형식) 자료형 배열명[행개수][열개수]   = {  {    } , {     } ..... };

        ​

        //      2행 3열

        int arr[2][3] = {

        {1000, 2000, 3000}, //0행   -> 1행

        {4000, 5000, 6000} //1행   -> 2행

        ​

        };

        ​

        printf("arr[0][0] = %d\n", arr[0][0]);

        printf("arr[0][1] = %d\n", arr[0][1]);

        printf("arr[0][2] = %d\n", arr[0][2]);

        printf("arr[1][0] = %d\n", arr[1][0]);

        printf("arr[1][1] = %d\n", arr[1][1]);

        printf("arr[1][2] = %d\n", arr[1][2]);

        puts("------------------");

        ​

        //2차원 배열의 요소값 수정

        arr[0][0] = 10;

        printf("arr[0][0] = %d\n", arr[0][0]);

        printf("arr[0][1] = %d\n", arr[0][1]);

        printf("arr[0][2] = %d\n", arr[0][2]);

        printf("arr[1][0] = %d\n", arr[1][0]);

        printf("arr[1][1] = %d\n", arr[1][1]);

        printf("arr[1][2] = %d\n", arr[1][2]);

        puts("------------------");

        ​

        //for문을 이용한 2차원 배열 출력

        //이중 for문 : 바깥 for문이 1번 수행되는 동안 안쪽 for문은 반복횟수 만큼 모두 수행해야 한다.

        ​

        int x, y; //초기화 변수

        ​

        //배열의 모든 요소 출력

        for (x = 0; x < 2; x++) { //행

        ​

        for (y = 0; y < 3; y++) { //열

        ​

        //          0 0. 0 1, 0 2

        //          1 0, 1 1, 1 2

        printf("arr[%d][%d] = ", x, y);

        printf("%d\n", arr[x][y]);

        ​

        }

        }

        ​

        puts("---------------");

        ​

        // 배열의 요소값을 모두 0으로 변경

        for (x = 0; x < 2; x++) { //행

        ​

        for (y = 0; y < 3; y++) { //열

        ​

        // 0 0. 0 1, 0 2

        // 1 0, 1 1, 1 2

            arr[x][y] = 0;



        printf("arr[%d][%d] = ", x, y);

        printf("%d\n", arr[x][y]);

        ​

        }

        }

        ​

        puts("---------------");

        */

        ​

        /*

        //2차원 배열의 각 행과 각 열의 합계 구하기

        ​

        int i, j; //초기화 변수

        int sum = 0; //요소값들의 누적값을 저장하는 변수

        ​

        int array[3][5] = {

        {12,56,32,16,98}, //0행

        {99,56,34,41,3},  //1행

        {65,3,87,78,21}   //2행

        ​

        };

        ​

        //각 행의 합계 구하기

        for (i = 0; i < 3; i++) {

        ​

        for (j = 0; j < 5; j++) {

        ​

        printf("array[%d][%d] = ", i, j);

        printf("%d\n", array[i][j]);

        sum = sum + array[i][j];

        ​

        }

        ​

        printf("%d행의 합계 =  %d\n", i, sum);

        sum = 0;

        }

        puts("------------------");

        ​

        ​

        //각 열의 합계 구하기 **확인 해보기

        for (i = 0; i < 5; i++) {

        ​

        for (j = 0; j < 3; j++) {

        ​

        //printf("i[%d]j[%d] = %d \n", i, j, array[i][j]);

        //sum += array[i][j];

        printf("j[%d]i[%d] = %d \n", j, i, array[j][i]);

        sum += array[j][i];

        }

        printf("%d열의 합계: %d\n", i, sum);

        sum = 0;

        }

        */

        ​

        /*

    //문자열(string) 생성 방법 : 배열기반과 포인터 기반으로 만들 수 있다.

    ​

    //1. 배열 기반의 문자열 다루기

    char good[] = "Good!"; //문자열의 끝을 알려주는 '\0'도 같이 저장되어 있다.

    printf("good[] = %s\n", good);

    puts("-----------");

    ​

    //문자열 수정 : G -> H로 고치기

    good[0] = 'H';

    printf("good[] = %s\n", good);

    puts("-----------");

    ​

    //2.포인터 기반의 문자열 다루기

    char* bad = "Bad!";

    printf("*bad = %s\n", bad);

    puts("-----------");

    ​

    //문자열 수정 : B -> H로 고치기

    // bad[0] = 'H';  //포인터 변수이기 때문에 배열형식으로 접근할 수 없다.

    ​

    bad = "Had"; //문자열을 수정은 하나씩 할 수 없고 한꺼번에 수정할 문자열을 만들어서 대입시킨다.!!!

    ​

    printf("*bad = %s\n", bad);

    puts("-----------");

    */

        ​

        ==========================================

        //정의된 함수 호출해서 사용하기

        //함수 호출 형식) 함수명(매개변수값 or 인수값 or 인자값);

         //1유형 호출 : 함수명()

        add();

    add();

    puts("-----------");

    ​

        //2유형 호출 : void add1(int num, int num1)

        //2유형 호출 : 함수명(매개변수값, 매개변수값)

        add1(200, 10);