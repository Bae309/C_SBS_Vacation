#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define RATE 1200	   //��ũ�� ���

int main() {
	//���(Constant) : ������ �ʴ� ������ ���̴�.
	//��ȣ ���(Symbolic  Constant)
	//1. ��ũ�� ���(Macro Constant)

	/*
	int won = 1 * 1000;
	int won1 = 2 * 1000;
	int won2 = 3 * 1000;
	int won3 = 4 * 1000;
	int won4 = 5 * 1000;

	printf("won = %d\n", won);
	printf("won1 = %d\n", won1);
	printf("won2 = %d\n", won2);
	printf("won3 = %d\n", won3);
	printf("won4 = %d\n", won4);
	*/

	/*
	int won = 1 * RATE;
	int won1 = 2 * RATE;
	int won2 = 3 * RATE;
	int won3 = 4 * RATE;
	int won4 = 5 * RATE;

	printf("won = %d\n", won);
	printf("won1 = %d\n", won1);
	printf("won2 = %d\n", won2);
	printf("won3 = %d\n", won3);
	printf("won4 = %d\n", won4);
	printf("------------\n");
	*/

	//2.�ɺ��� ���(Symbolic  Constant):
	//������ �տ� constŰ���带 �ٿ��� ����ϴ� ���
	//�޸𸮰����� �����͸� �ʱ�ȭ���� ���� ���ο� ���� �������ϵ��� ���� ���

	/*
	const int RATE1 = 1000;	//�޸𸮰��� Ȯ���ϰ� 1000�̶�� ������ �־���� ����(�ʱ�ȭ)
	//RATE1 = 1200; //�̹� �޸𸮰����� �־��� �ִ� ���� ����(������ ���ο� �� ����)

	int won = 1 * RATE1;
	int won1 = 2 * RATE1;
	int won2 = 3 * RATE1;
	int won3 = 4 * RATE1;
	int won4 = 5 * RATE1;

	printf("won = %d\n", won);
	printf("won1 = %d\n", won1);
	printf("won2 = %d\n", won2);
	printf("won3 = %d\n", won3);
	printf("won4 = %d\n", won4);
	printf("------------\n");
	*/

	/*
	 //�ڷ��� ��ȯ
	//1.�ڵ� �ڷ��� ��ȯ : ū�ڷ����� ���� �ڷ����� ������ �� �ִ�.
	short number1 = 10000;
	int number2 = (int)number1;	//���� 60
	float number3 = number2;  // ���� 60 -> �Ǽ��� 60
	double number4 = number3;

	printf("%d\n", number1);
	printf("%d\n", number2);
	printf("%f\n", number3);
	printf("%lf\n", number4);
	printf("---------------\n");

	//2.������ �ڷ�����ȯ
	//����) (�ڷ���)������or �����Ͱ�
	printf("%d\n", (short)3.1425);
	printf("%d\n", (int)3.1425);
	printf("%f\n", (float)10);
	printf("%lf\n",(double)10);
	printf("---------------\n");
	 */

	 //ǥ�� �Է� : Ű����� �����͸� �Է� �޴� ���

	 //scanf()�Լ� : Ű���忡�� �Է¹��� ���� ������ �����ϴ� �Լ��̴�.
	 //����)scanf("���ĺ�ȯ��(���Ĺ���)", &������ ������);

	 /*
	 int num = 10;
	 printf("num ������ �� = %d\n", num);
	 printf("num ������ �޸𸮰����� ���� �ּҰ� = %x\n", &num); //num������ �޸� ���� �ּ�
	 printf("--------------\n");

	 //1.Ű����� �����Ͱ��� �Է¹޾� ������ ������(�޸� ����)�� �̸� Ȯ���ؾ� �Ѵ�.!!!
	 //2.������ ������(�޸� ����)�տ� �ּҿ�����(&)�� �ٿ� ���� �޸𸮰����� �ּҿ� �ִ´�.

	 int num1; //�޸𸮰����� Ȯ��

	 printf("���� ���ڸ� �Է��ϼ���..... : ");
	 scanf("%d", &num1);	//�޸𸮰����� ���� �ּҸ� ã�ư��� �־�� �Ѵ�.

	 printf("num1������ �Է¹����� ��� = %d\n", num1);
	 */

	char character;
	int inum;
	float fname;

	printf("���ڸ� �Է��ϼ���..... : ");
	scanf("%c", &character);

	printf("���� ���ڸ� �Է��ϼ���..... : ");
	scanf("%d", &inum);

	printf("�Ǽ� ���ڸ� �Է��ϼ���..... : ");
	scanf("%f", &fname);

	printf("character������ �Է¹����� ��� = %c\n", character);
	printf("inum ������ �Է¹����� ��� = %d\n", inum);
	printf("fname������ �Է¹����� ��� = %f\n", fname);


	return 0;
}