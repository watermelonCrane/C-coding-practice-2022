//6������
#include<stdio.h>

int main() {
	int x, n = 0, sum = 0;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);

	while (sum < x) {
		n++;
		sum += n;
		if (sum + n + 1 >= x) {
			printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);
			break;
		}
	}
	return 0;
}