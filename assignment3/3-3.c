// 3�� ����
#include <stdio.h>

int main(void) {
	int value, value2;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &value);
	value2 = ~value;
	value2 += 1;

	printf("\"%d\"�� 2�� ����(10����): %d\n", value, value2);
	printf("\"%d\"�� 2�� ����(16����): %#x\n", value, value2);

	return 0;
}