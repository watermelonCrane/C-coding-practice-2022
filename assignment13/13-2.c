#include <stdio.h>
#include <stdlib.h>

struct list {
	char str[100];
};

int main() {
	int amount;
	struct list *str = NULL;

	printf("���ڿ��� ����: ");
	scanf("%d", &amount);

	str = (struct list*)malloc(amount * sizeof(struct list));
	if (str == NULL) {
		printf("���� �޸� �Ҵ� ����\n");
		exit(1);
	}

	for (int i = 0; i < amount; i++) {
		printf("���ڿ��� �Է��Ͻÿ�: ");
		scanf("%s", &str[i].str);
	}


	printf("[");
	for (int i = 0; i < amount; i++) {
		printf("\"%s\"", str[i].str);

		if (i == amount - 1) {
			printf("]\n");
		}
		else {
			printf(" ");
		}
	}

	free(str);

	return 0;
}