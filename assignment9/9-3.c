//3������

#include <stdio.h>
#include <string.h>

int main() {
	char s[200];					//���ڿ�
	char find[30];					//ã�� �ܾ�
	char replace[30];				//�ٲ� �ܾ�
	char target[200] = { '\0' };	//��ȯ�� ���ڿ�
	

	printf("���ڿ��� �Է�: ");
	scanf(" %[^\n]s", s);
	printf("ã�� �ܾ�: ");
	scanf(" %[^\n]s", find);
	printf("�ٲ� �ܾ�: ");
	scanf(" %[^\n]s", replace);

	char seps[] = " ";
	
	
	char* token = strtok(s, seps);

	while (token != '\0') {
		if (strcmp(find, token) != 0) {
			strcat(target, token);
			strcat(target, " ");
		}
		else {
			strcat(target, replace);
			strcat(target, " ");
		}

		token = strtok(NULL, seps);
	}

	printf("��ȯ�� ���ڿ�: %s\n", target);

	return 0;
}