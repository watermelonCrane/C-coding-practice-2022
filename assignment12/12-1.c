//1������
#include <stdio.h>

#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define GET_MIN(x, y, z) (MIN(x, y) < (z) ? MIN(x, y) : (z))

int main() {
	int x, y, z;
	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d %d", &x, &y, &z);
	
	printf("�ּҰ��� %d�Դϴ�.\n", GET_MIN(x, y, z));

	return 0;
}