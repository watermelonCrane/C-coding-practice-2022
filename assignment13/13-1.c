#include <stdio.h>
#include <stdlib.h>

int main() {
	int amount;
	int* list = NULL;

	printf("������ ����: ");
	scanf("%d", &amount);

	list = (int*)malloc(amount * sizeof(int));
	if (list == NULL) {
		printf("���� �޸� �Ҵ� ����\n");
		exit(1);
	}

	for (int i = 0; i < amount; i++) {
		int tmp;
		printf("���� ������ �Է��Ͻÿ�: ");
		scanf("%d", &list[i]);
	}
	
	int sum = 0;

	printf("�Էµ� ����: ");
	for (int i = 0; i < amount; i++) {
		printf("%d ", list[i]);
		sum += list[i];
	}

	printf("\n�Էµ� �������� ���� %d�Դϴ�.\n", sum);

	free(list);

	return 0;
}