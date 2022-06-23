//4������
#include <stdio.h>

#define GET_BIT(n, pos) (((n) >> (pos)) & 0x01)

void display_bit(int value) {
	for (int i = 31; i >= 0; i--) {
		printf("%d", GET_BIT(value, i));
	}
	printf("\n");
}

int main() {
	int n;
	int shift, number;
	printf("�������� �Է��Ͻÿ�: ");
	scanf("%d", &n);
	printf("���� �̵��� 0, ������ �̵��� 1�� �Է��Ͻÿ�: ");
	scanf("%d", &shift);
	printf("�� ��Ʈ �̵���ų ������ �Է��Ͻÿ�: ");
	scanf("%d", &number);
	printf("�̵� ��: ");
	display_bit(n);
	printf("�̵� ��: ");
	if (shift == 0) {
		n = n << number;
	}
	else {
		n = n >> number;
	}
	display_bit(n);

	return 0;
}