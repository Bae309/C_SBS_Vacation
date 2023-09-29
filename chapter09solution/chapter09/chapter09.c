#define _CRT_SECURE_NO_WARNINGS

#define COUNT 3 //매크로 상수

#include <stdio.h>

​

int main() {

    ​

        



        //1차원 배열 예제

        //3명의 학생의 국어, 영어, 수학 점수를 입력받아서 합계와 평균을 구하는 프로그램 작성

        ​

        int i;//초기화변수

         //     3             3           3             3

        int kor[COUNT], eng[COUNT], mat[COUNT], total[COUNT]; //국어, 영어, 수학, 합계

        double avg[COUNT]; //평균

        ​

        //               3

        for (i = 0; i < COUNT; i++) {

        printf("%d번 학생의 국어, 영어, 수학 점수를 입력하세요(스페이스 공백 입력): ", i + 1);

        scanf("%d %d %d", &kor[i], &eng[i], &mat[i]);

        ​

        total[i] = kor[i] + eng[i] + mat[i];

        avg[i] = total[i] / 3.0;

        }

        ​

        printf("\n");

        ​

        // 출력할때 타이틀 만들기

        printf("학번   국어   영어   수학   총점     평균\n");

        printf("_________________________________________________\n");

        ​

        // 배열 출력

        //               3

        for (i = 0; i < COUNT; i++) {

        printf("%3d  %6d  %5d  %5d  %5d     %.1f\n", i + 1, kor[i], eng[i], mat[i], total[i], avg[i]);

        }

        

        ​

        //베열과 문자열

        ​

        //문자(Character)와 문자열(String) 

        //문자(Character) : 영문 문자 1개,자료형 : char, 작은 따옴표로 묶어서 데이터값 넣기

        //아스키 코드표를 참조해서 사용

        /*

        char a = 's';

        char b = 'k';

        char c = 'y';

        ​

        printf("%c = %d \n", a, a);

        printf("%c = %d \n", b, b);

        printf("%c = %d \n", c, c);

        printf("%c%c%c \n", a,b,c);

        printf("------------------\n");

        ​

        int i;

        for (i = 0; i <= 127; i++) {

        printf("%c = %d\t", i, i);

        }

         */

        ​

        /*

        //문자열(String)

        //문자가 어러개 모여서  이루는 단어 1개(토큰), 자료형 : char[] ,큰따옴표로 묶어서 데이터값 넣기

        // ** 문자열을 배열에 담을때 배열의 개수는 표시할 총문자 개수 + 1('\0')개로 지정해야 한다.!!!

        //-> 문자열이 담겨져 있는 배열의 개수 : 총문자열 개수보다 1개가 더 많아야 한다.

        ​

        //              [0] [1] [2] [4]

        char arr[4] = { 's','k','y','\0'};

        ​

        int i;

        ​

        for (i = 0; i <= 3; i++) {

        printf("arr[%d] = ", i);

        printf("%c\n", arr[i]);

        }

        printf("-------------\n");

        ​

           //문자열을 담은 배열내의 문자들을 한꺼번에 모두 출력시키는 서식 변환자 : %s

        printf("%s\n", arr); //'\0'만나기 전까지의 배열내의 모든 문자들을 한번에 출력

        printf("-------------\n");

        ​

        //char greet[12] = { 'H', 'e', 'l', 'l', 'o', ',', 'G', 'u', 'y','s', '!', '\0' };

        //문자열의 총문자수 : 11개, 마지막 위치에 '\0' 값 -> 배열(문자열)의 총개수 : 12개

        char greet[] = "Hello,Guys!"; //마지막 위치에 '\0' 값이 저장되어 있다.!!

        printf("%s\n", greet);

        printf("greet 배열의 개수 = %d\n", sizeof(greet)); //12개

        printf("-------------\n");

        ​

        //문자열  수정

        greet[0] = 'A';

        greet[4] = 'H';

        greet[5] = '\0';  //'\0' 값을 대입하면 문자열의 끝으로 처리한다.!!!!

        printf("%s\n", greet);

        ​

        //예제

        char str[50]; //char 형 배열형식으로 메모리 공간을 확보

        ​

        printf("문자열을 입력하세요 >>>> ");

        scanf("%s", &str);

        ​

        printf("입력된 문자열 출력 =  %s \n", str);

        */

        ​

        //scanf() 함수로 문자열 입력받아 배열에 저장하기

        //이름, 취미, 메모 내용을 키보드로 입력받아서 출력하는 프로그램 작성

        //scanf() 함수 : 공백, tab, Enter를 만나면 분리된 단어로 인식한다.

        ​

       /* char name[10];

    printf("이름을 입력하세요 >>>");

    scanf("%s", &name);

    ​

        char like[30];

    printf("취미를 입력하세요 >>>");

    scanf("%s", &like);

    ​

        char memo[30];

    printf("메모를 입력하세요 >>>");

    scanf("%s", &memo);

    ​

        printf("이름은 %s\n", name);

    printf("취미는 %s\n", like);

    printf("메모는 %s\n", memo);*/

    return 0;

}