//2������
#include<stdio.h>

int main() {
	int a;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &a);
	printf("%d�� ���: ", a);
	for (int i = 1; i <= a; i++) {
		if (a % i == 0)
			printf("%d ", i);
	}
	printf("\n");

	return 0;
}