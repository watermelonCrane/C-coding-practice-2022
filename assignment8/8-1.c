//1�� ����

#include <stdio.h>

void get_sum_mult(int x, int y, int* psum, int* pmult);

int main() {
	int num1, num2;
	int sum, mult;
	printf("ù��° ����: ");
	scanf("%d", &num1);
	printf("�ι�° ����: ");
	scanf("%d", &num2);
	get_sum_mult(num1, num2, &sum, &mult);

	printf("�� ������ ��= %d\n", sum);
	printf("�� ������ ��= %d\n", mult);

	return 0;
}

void get_sum_mult(int x, int y, int* psum, int* pmult) {
	*psum = x + y;
	*pmult = x * y;
}