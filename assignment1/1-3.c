#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double base, height, area;
	
	printf("�ﰢ���� �غ�: ");
	scanf("%lf", &base);
	printf("�ﰢ���� ����: ");
	scanf("%lf", &height);	
	
	area = base * height / 2;
	printf("�ﰢ���� ����: %lf\n", area);
	
	return 0;
}