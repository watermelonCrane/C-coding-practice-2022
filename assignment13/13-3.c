#include <stdio.h>
#include <stdlib.h>

typedef struct addr{
	char name[100];
	char phone[100];
} ADDR;

int main() {
	ADDR* addrs = NULL;
	int amount;

	printf("�ּ��� ����: ");
	scanf("%d", &amount);

	addrs = (ADDR*)malloc(amount * sizeof(ADDR));
	if (addrs == NULL) {
		printf("���� �޸� �Ҵ� ����\n");
		exit(1);
	}

	for (int i = 0; i < amount; i++) {
		printf("�̸��� �Է��Ͻÿ�: ");
		scanf("%s", &addrs[i].name);
		printf("�޴��� ��ȣ�� �Է��Ͻÿ�: ");
		scanf("%s", &addrs[i].phone);
	}
	printf("==========================\n");
	printf("�̸�	�޴��� ��ȣ\n");
	printf("==========================\n");
	for (int i = 0; i < amount; i++) {
		printf("%s	%s\n", addrs[i].name, addrs[i].phone);
	}
	printf("==========================\n");
	free(addrs);

	return 0;
}