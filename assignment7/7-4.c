//4������
#include <stdio.h>

void show_binary(int n);

int main() {
	int num;
	while (1) {
		printf("10������ �Է��Ͻÿ�: ");
		scanf("%d", &num);
		if (num == -1)
			break;
		else
			show_binary(num);
	}
	return 0;
}

void show_binary(int n) {
	int binary[32] = { 0 }, temp = n, count = 0;
	for (int i = 31; i >= 0; i--) {
		binary[i] = temp % 2;
		temp /= 2;
		count++;
		if (temp == 0)
			break;
	}
	printf("%d�� 2���� ǥ��: ", n);
	
	for (int i = (32 - count); i < 32; i++) {
		printf("%d", binary[i]);
	}


	printf("\n");
}