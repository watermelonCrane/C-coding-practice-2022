//5������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char character;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &character);
	printf("3���� �ļ� ���ڵ�: %c, %c, %c\n", character + 2, character + 4, character + 6);

	return 0;
}