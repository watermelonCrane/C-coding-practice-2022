//5������
#include<stdio.h>

int main() {
	int n;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);
	printf("2���� %d������ �Ҽ�: ", n);
	for (int i = 2; i <= n; i++) {
		int sign = 1;
		for (int k = 2; k < i; k++) {
			if (i % k == 0) {
				sign = 0;
				break;
			}
			
		}
		if (sign)
			printf("%d ", i);
	}
	printf("\n");

	return 0;
}