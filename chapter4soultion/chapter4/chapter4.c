#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	/*
	//������ Ű����κ��� �����͸� �Է¹޾Ƽ� �����ϴ� ���
	//���� > scanf("���� ��ȯ��", &������(�Է����)

	char character;
	int inum; //������ 100�� �����ϰ� ���
	float fnum; //105.25�� �����ϰ� ���

	printf("���ڸ� �Է��ϼ��� >>> ");
	scanf("%c", &character);
	printf("�Է¹��� �� = %c\n", character);
	printf("-----------------\n");

	printf("������ �Է��ϼ��� >>> ");
	scanf("%d", &inum);
	printf("�Է¹��� �� = %d\n", inum);
	printf("-----------------\n");

	printf("�Ǽ��� �Է��ϼ��� >>> ");
	scanf("%f", &fnum);
	printf("�Է¹��� �� = %.2f\n", fnum);
	printf("-----------------\n");
	*/

	//2���� ������ �Է¹޾Ƽ� ���Ѱ�, ����, ���Ѱ�, ������, �������� ����ؼ� ���
	/*
	int num = 100;
	int num1 = 3;

	int result = num + num1;
	int result1 = num - num1;
	int result2 = num * num1;
	int result3 = num / num1;
	int result4 = num % num1;

	printf("result = %d\n", result);
	printf("result1 = %d\n", result1);
	printf("result2 = %d\n", result2);
	printf("result3 = %d\n", result3);
	printf("result4 = %d\n", result4);
	printf("-----------------\n");

	printf("num + num1 = %d\n", num + num1);
	printf("num - num1 = %d\n", num - num1);
	printf("num * num1 = %d\n", num * num1);
	printf("num / num1 = %d\n", num / num1);
	printf("num %% num1 = %d\n", num % num1);
	printf("-----------------\n");

	printf("%d %d %d %d %d \n", num + num1, num - num1, num * num1, num / num1, num % num1);
	*/

	//2���� ������ �Է¹޾Ƽ� ���Ѱ�, ����, ���Ѱ�, ������, �������� ����ؼ� ���
	int num2;
	int num3;

	/*printf("ù��° ������ �Է��ϼ��� >>>");
	scanf("%d", &num2);

	printf("�ι�° ������ �Է��ϼ��� >>>");
	scanf("%d", &num3);

	printf("num2 + num3 = %d\n", num2 + num3);
	printf("num2 - num3 = %d\n", num2 - num3);
	printf("num2 * num3 = %d\n", num2 * num3);
	printf("num2 / num3 = %d\n", num2 / num3);
	printf("num2 %% num3 = %d\n", num2 % num3);
	printf("-----------------\n");*/

	printf("ù��° ������ �ι�° ������ �Է��ϼ��� >>>");
	scanf("%d %d", &num2, &num3);//100 Enter, 3 Enter

	printf("%d + %d = %d\n", num2, num3, num2 + num3);
	printf("num2 + num3 = %d\n", num2 + num3);
	printf("num2 - num3 = %d\n", num2 - num3);
	printf("num2 * num3 = %d\n", num2 * num3);
	printf("num2 / num3 = %d\n", num2 / num3);
	printf("num2 %% num3 = %d\n", num2 % num3);
	printf("-----------------\n");
	return 0;
}