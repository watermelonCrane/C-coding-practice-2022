// 2������
#include<stdio.h>

int main(void) {
	int height, age;

	printf("Ű�� �Է��Ͻÿ�(cm): ");
	scanf("%d", &height);
	printf("���̸� �Է��Ͻÿ�: ");
	scanf("%d", &age);

	if(height >= 140 && age >= 10)
		printf("ž���� �� �ֽ��ϴ�.\n");
	else
		printf("ž���� �� �����ϴ�.\n");

	return 0;
}