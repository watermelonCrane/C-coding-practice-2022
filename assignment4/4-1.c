// 1������
#include<stdio.h>

int main(void) {
	int x, y, z;
	int min;	// �ּҰ�
	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d %d", &x, &y, &z);
	if (x < y) {
		if (x < z)
			min = x;
		else
			min = z;
	}
	else {
		if (y < z)
			min = y;
		else
			min = z;
	}
	printf("�ּҰ��� %d�Դϴ�.\n", min);

	return 0;
}