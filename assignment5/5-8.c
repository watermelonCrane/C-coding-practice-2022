//8������
#include<stdio.h>

int main() {
	int a;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &a);
	do {
		printf("%d", a % 10);
		a /= 10;
	} while (a);
	printf("\n");

	return 0;
}