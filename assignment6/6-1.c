//1������

#include<stdio.h>

int check_alpha(char c);

int main() {
	char c;
	int temp;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &c);
	temp = check_alpha(c);

	if (temp == 1) {
		printf("%c�� ���ĺ� �����Դϴ�.\n", c);
	}
	else if (temp == 0) {
		printf("%c�� ���ĺ� ���ڰ� �ƴմϴ�.\n", c);
	}

	return 0;
}

int check_alpha(char c) {
	if (c >= 65 && c <= 90)
		return 1;
	else if (c >= 97 && c <= 122)
		return 1;
	else
		return 0;

}