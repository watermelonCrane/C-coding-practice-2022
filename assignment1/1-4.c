#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	
	float f, c;

	printf("ȭ������ �Է��Ͻÿ�: ");
	scanf("%f", &f);

	c = (f - 32) * 5 / 9;

	printf("�������� %f���Դϴ�.\n", c);
	

	return 0;
}