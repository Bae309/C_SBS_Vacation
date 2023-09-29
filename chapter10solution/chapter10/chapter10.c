#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> //입출력 기능

#include <string.h> //문자열 기능

​

int main() {

    ​

        //scanf() 함수로 문자열 입력받아 배열에 저장하기

        //이름, 취미, 메모 내용을 키보드로 입력받아서 출력하는 프로그램 작성

        //scanf() 함수 : 공백, tab, Enter를 만나면 분리된 단어로 인식한다.

        ​

        ​

        /*

        char name[10];

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

        printf("---------------\n");

        ​

        printf("이름은 %s\n", name);

        printf("취미는 %s\n", like);

        printf("메모는 %s\n", memo);

        printf("---------------\n");

        */

        ​

        ​

        /*

        //문자 하나 단위 전용 함수

        //문자 단위 입출력 : 문자 하나를 입력받고 문자 하나를 출력하는 함수

        //형식)getchar() 함수 : 문자 하나만 입력받도록 한다.

        //형식)putchar(출력할 문자(변수명)) : 문자 하나만 출력하도록 한다.

        ​

        char ch, ch1;

        ​

        printf("문자를 입력하세요 >>>\n");

        ​

        ch = getchar();

        ch1 = getchar();

        ​

        putchar(ch);

        putchar(ch1);

        putchar(65);

        putchar('a');

        putchar('\n');

        ​

        //printf("\n");

        ​

        printf("----------------\n");

         */

        ​

        ​

        ​

        //문자열 전용 입출력 함수 : 공백을 포함해서 문자열 입력받기

        //형식)gets(저장할 변수명(배열명)) 함수 : 공백을 포함해서 문자열을 입력받는다. 

        //-> (** Enter키를 만나기 전까지 공백을 포함한 모든 문자열을  가져온다.)

        //형식)puts("문자열" or 문자열을 담은 변수명(배열명)) 함수 : 문자열을 출력한다.

        //->(자동으로 줄바꿈이 되고, 서식변환자가 없다.)

        ​

        /*

        char ch2[30]; //배열로 메모리 공간 확보

        ​

        puts("문자열을 입력하세요 >>> ");

        gets(ch2);

        puts(ch2);

        */

        ​

        ​

        /*

        char name[10];

        printf("이름을 입력하세요 >>>");

        gets(name); //Enter키 누르기 전까지 공백을 포함한 모든 문자 입력 가능!!!

        ​

        char like[30];

        printf("취미를 입력하세요 >>>");

        gets(like);

        ​

        char memo[30];

        printf("메모를 입력하세요 >>>");

        gets(memo);

        printf("---------------\n");

        ​

        puts(name);

        puts(like);

        puts(memo);

        printf("%s\n", memo);

        ​

        printf("---------------\n");

        */

        ​

        ​

        /*

        //scanf() 함수와 gets()함수를 섞어서 사용하는 경우

        ​

        char name[10];

        printf("이름을 입력하세요 >>>");

        scanf("%s", &name);

        ​

        char like[30];

        printf("취미를 입력하세요 >>>");

        scanf("%s", &like);

        ​

        getchar(); //문자 하나만 가져온다.(Enter를 읽어서 gets가 다음 문자열을 읽도록 한다.!!!)

        ​

        char memo[30];

        printf("메모를 입력하세요 >>>");

        gets(memo);

        ​

        //김하나엔터잠자기엔터코딩은 어려워요!!!

        puts(name);

        puts(like);

        puts(memo);

        puts("----------------");

        ​

        printf("이름은 %s\n", name);

        printf("취미는 %s\n", like);

        printf("메모는 %s\n", memo);

        printf("---------------\n");

        */

        ​

        ​

        //문자열 처리 함수

        ​

        //문자열을 저장하는 배열은 실제 저장하는 문자의 총개수보다 +1 개 더 많아야 한다.

    //-> 문자열의 마지막을 알려주는 '\0' NULL(비워둠)을 반드시 맨끝에 적어주어야 한다.

    //-> 문자열의 개수 + '\0'

        ​

        char str1[50] = "Busan";   // '\0'

    char str2[50] = "Seoul";

    char str3[50];

    ​

        printf("str1 = %s\n", str1);

    printf("str2 = %s\n", str2);

    printf("str3 = %s\n", str3);

    puts("---------------");

    ​

        //배열의 개수(str1배열의 개수 구하기)

        printf("str1 배열의 총길이(크기) : %d\n", sizeof(str1));

    printf("str1 배열의 자료형(char)의 크기 : %d\n", sizeof(char));

    // str1 배열의 총길이(크기) / char 자료형이 차지하는 크기          

    printf("str1 배열의 개수 : %d\n", sizeof(str1) / sizeof(char));

    puts("---------------");

    ​

        // 1.strlen() 함수 : 배열의 총크기(길이)에 상관없이 순수한 문자개수만 반환한다.

        //->문자열 마지막의 공백'\0' 앞까지 순수한 문자 개수만 반환한다.

        //형식) strlen(배열명)

        printf("순수한 문자 개수만 반환 strlen(str1) = %d\n", strlen(str1));

    printf("순수한 문자 개수만 반환 strlen(str2) = %d\n", strlen(str2));

    puts("---------------");

    ​

        // 2.strcpy() 함수 : 문자열을 복사한다.(배열 전체를 통째로 복사 : '\0' 포함)

            //형식) strcpy(대상문자열, 원본문자열)

        strcpy(str2, str1); //str2배열에 str1배열을 통째로 복사한다.

    printf("str1 = %s\n", str1);

    printf("str2 = %s\n", str2);

    puts("---------------");

    ​

        strcpy(str3, "안녕하세요..!!!"); //안녕하세요..!!! -> 문자열을 str3배열에 통째로 복사한다.

    printf("str3 = %s\n", str3);

    puts("---------------");

    ​

        //3. strncpy : 문자열이 담긴 배열에서 일부분만 복사한다.('\0' 포함 안함)

        //형식)strncpy(대상문자열, 원본문자열, 복사할문자개수)

        strncpy(str3, str1, 3); //str3배열에 str1 배열내의 처음부터 3개만 복사한다)

    printf("str3 = %s\n", str3);

    puts("---------------");

    ​

        str3[3] = '\0';

    printf("str3 = %s\n", str3);

    puts("---------------");

    ​

        return 0;

}