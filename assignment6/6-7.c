//7������

#include<stdio.h>

int power(int base, int powerRaised);

int main() {
	int base, powerRaised;
	printf("�ؼ�: ");
	scanf("%d", &base);
	printf("����: ");
	scanf("%d", &powerRaised);

	printf("%d^%d=%d\n", base, powerRaised, power(base, powerRaised));

	return 0;
}

int power(int base, int powerRaised) {
	if (powerRaised == 1)
		return base;

	return base * power(base, powerRaised - 1);

}