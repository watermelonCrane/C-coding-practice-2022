//1�� ����

#include <stdio.h>
#include <string.h>

#define SIZE 100

void change_space(char s[]);

int main() {
	char str[SIZE];
	printf("���ڿ��� �Է�: ");
	scanf("%[^\n]s", str);
	change_space(str);
	printf("%s\n", str);

	return 0;
}

void change_space(char s[]) {
	char tmp[SIZE];
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == ' ')
			tmp[i] = ',';
		else
			tmp[i] = s[i];
	}
	for (int i = 0; i < strlen(s); i++) {
		s[i] = tmp[i];
	}
}

