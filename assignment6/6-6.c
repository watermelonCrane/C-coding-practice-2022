//6������

#include<stdio.h>

int sum(int num);

int main() {
	int n;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	printf("1���� %d������ ��=%d\n", n, sum(n));
	
	return 0;
}

int sum(int num) {
	
	if (num <= 1)
		return 1;
	else
		return num + sum(num - 1);
	

}