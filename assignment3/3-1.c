// 1�� ����
#include <stdio.h>

int main(void) {
	
	int x, y, z, max;
	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d %d", &x, &y, &z);

	(x > y) ? (max = x) : (max = y);
	(z > max) ? (max = z) : (max = max);

	printf("�ִ밪: %d\n", max);

	return 0;
}