//7�� ����
#include<stdio.h>

int main() {
	double r, result;
	int n;
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &r);
	result = r;
	printf("�ŵ����� Ƚ���� �Է��Ͻÿ�: ");
	scanf("%d", &n);
	for (int i = 0; i < n-1; i++) {
		result *= r;
	}
	printf("������� %f\n", result);
	

	return 0;
}