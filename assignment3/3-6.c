// 6�� ����
#include <stdio.h>

int main(void) {
	char c1, c2, c3, c4;
	printf("ù��° ���ڸ� �Է��Ͻÿ�: ");
	scanf(" %c", &c1);
	printf("�ι�° ���ڸ� �Է��Ͻÿ�: ");
	scanf(" %c", &c2);
	printf("����° ���ڸ� �Է��Ͻÿ�: ");
	scanf(" %c", &c3);
	printf("�׹�° ���ڸ� �Է��Ͻÿ�: ");
	scanf(" %c", &c4);

	unsigned int value = 0;
	
	value |= c1;
	
	value |= c2 << 8;

	value |= c3 << 16;
	
	value |= c4 << 24;
	
	printf("��� ��(16����): %x\n", value);
	

	return 0;
}