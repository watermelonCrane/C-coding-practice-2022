#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double x, result;

	printf("�Ǽ��� �Է��ϼ���: ");
	scanf("%lf", &x);

	result = 3 * x * x + 7 * x + 11;

	printf("���׽��� ���� %lf\n", result);

	return 0;
}