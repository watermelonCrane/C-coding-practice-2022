#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double i, j, k;
	double sum;
	double ave;


	printf("ù��° �Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &i);
	printf("�ι�° �Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &j);
	printf("����° �Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &k);

	sum = i + j + k;
	ave = sum / 3.0;

	printf("�հ�� %f�̰� ����� %f�Դϴ�.", sum, ave);
	

	return 0;
}