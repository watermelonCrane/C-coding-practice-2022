#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double weight, mweight;

	printf("�����Ը� �Է��ϼ���(���� kg): ");
	scanf("%lf", &weight);
		
	mweight = weight * 17 / 100;
	printf("�޿����� �����Դ� %lf�Դϴ�\n", mweight);
	

	return 0;
}