//5������
#include<stdio.h>

int main(void) {
	int x, y;
	printf("��ǥ�� �Է��Ͻÿ�(x y): ");
	scanf("%d %d", &x, &y);

	int coor;	//��и�
	if (x > 0) {
		if (y > 0) {
			coor = 1;
		}
		if (y < 0) {
			coor = 4;
		}
	}
	if (x < 0) {
		if (y > 0) {
			coor = 2;
		}
		if (y < 0) {
			coor = 3;
		}
	}

	printf("(%d, %d)�� %d��и�\n", x, y, coor);

	return 0;
}