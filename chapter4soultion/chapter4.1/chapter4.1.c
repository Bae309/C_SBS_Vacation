#include <stdio.h>

int main(void) {
	//���(���ǹ�)

	//1. if�� : ���ǿ� ���� ��쿡�� �����Ѵ�.
	//���� �ۼ� ��� 
	//����) �񱳴�� �񱳿����� ���ұ��ذ� -> ������� �� or ����
	char alpha = 'F';

	// 'A' == 'A' -> ��
	// 'A' == 'F' -> ����
	if (alpha == 'F') { //
		printf("%c\n", alpha);
	}
	printf("-------------------\n");

	//2. if ~ else�� : ������ �������� ���� ����° ���� �����ϴ� ������ �����Ѵ�.
	// 'A' == 'F' -> ����
	if (alpha == 'A') {
		printf("%c\n", alpha);
	}
	else {
		printf("alpha ������ ���� ��µ��� �ʽ��ϴ�.!!!\n");
	}

	//3. if ~ else if ~ else�� : ������ �������϶� ���� ���ǿ� �ش��ϸ� �´� ���ǿ� 
	//�ش��ϴ� ������ �����ϰ� ����� ���� ������ else�������� ó���ϵ��� �����
	if (alpha == 'A') {
		printf("%c\n", alpha);
	}
	else if (alpha == 'B') {
		printf("%c\n", alpha);
	}
	else if (alpha == 'C') {
		printf("%c\n", alpha);
	}
	else {
		printf("alpha ������ ���� A, B, C�� �ƴ� �ٸ� ���Դϴ�.!!!\n");
	}
	return 0;
}