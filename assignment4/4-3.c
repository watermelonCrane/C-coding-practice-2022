//3������

#include<stdio.h>

int main(void) {
	double height, weight;

	printf("Ű�� ü���� �Է��Ͻÿ�: ");
	scanf("%lf %lf", &height, &weight);
	
	double std_weight = (height - 100) * 0.9;
	
	if (weight < std_weight)
		printf("��ü���Դϴ�.\n");
	else if (weight > std_weight)
		printf("��ü���Դϴ�.\n");
	else
		printf("ǥ��ü���Դϴ�.\n");
	

	return 0;
}