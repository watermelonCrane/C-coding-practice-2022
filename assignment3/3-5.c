// 5�� ����
#include <stdio.h>

int main(void) {
	int x, y, result = 0;
	printf("x ��ǥ�� �Է��Ͻÿ�: ");
	scanf("%d", &x);
	printf("y ��ǥ�� �Է��Ͻÿ�: ");
	scanf("%d", &y);

	x > 0 && y > 0 ? (result = 1) : (result = result);
	x < 0 && y > 0 ? (result = 2) : (result = result);
	x < 0 && y < 0 ? (result = 3) : (result = result);
	x > 0 && y < 0 ? (result = 4) : (result = result);


	printf("(%d, %d)�� %d��и�\n", x, y, result);
	
	
	return 0;
}