// 1�� ����

#include<stdio.h>

int main() {
	int a, sum = 0, times = 1;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &a);
	while (times <= a) {
		sum += times;
		times += 2;
	}
	printf("1���� %d������ ��� Ȧ���� ���� %d�Դϴ�.\n", a, sum);

	return 0;
}