#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double mile, km;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%lf", &mile);

	km = mile * 1.609;
	printf("%lf������ %lfų�ι����Դϴ�.", mile, km);


	return 0;
}