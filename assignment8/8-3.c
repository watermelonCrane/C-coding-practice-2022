//3������
#include <stdio.h>

#define SIZE 10

void print_array(int* arr, int size);
int search(int* arr, int size, int x);

int main() {
	int data[SIZE] = { 10, 1, 24, 90, 5, 33, 44, 8, 77, 33 };
	printf("�迭 data: ");
	print_array(data, SIZE);

	while (1) {
		int value, index;
		printf("�˻��ϴ� ��: ");
		scanf("%d", &value);
		if (value == -1)
			break;
		else {
			index = search(data, SIZE, value);
			if (index != -1) {
				printf("�˻��ϴ� �� %d�� �迭�� ��ġ : %d\n", value, index);
			}
			else
				printf("�˻��ϴ� �� %d�� �迭���� ����\n", value);
		}

	}

	return 0;
}

void print_array(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", *(arr + i));
	}
	printf("\n");
}

int search(int* arr, int size, int x) {
	for (int i = 0; i < size; i++) {
		if (x == *(arr + i)) {
			return i;
		}
	}

	return -1;
}