//3������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, temp;
	printf("2���� ����(x, y)�� �Է��Ͻÿ�: ");
	scanf("%d %d", &x, &y);
	printf("�Էµ� ����: x = %d, y = %d\n", x, y);

	temp = x;
	x = y;
	y = temp;

	printf("��ȯ�� ���: x = %d, y = %d\n", x, y);

	return 0;
}