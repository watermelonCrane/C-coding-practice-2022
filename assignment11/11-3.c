//3�� ����

#include <stdio.h>
#include <stdlib.h>

#define SIZE 20

struct student {
	char name[100];
	double korean, english, math;
};

int main() {
	FILE* fp = NULL;
	char fname[100];
	struct student s;			//�л� ����
	double ksum = 0, esum = 0, msum = 0;	//��ü �л� ���� �հ�

	printf("���ϸ��� �Է��ϼ���: ");
	scanf("%s", fname);

	fp = fopen(fname, "rb");

	if (fp == NULL) {
		printf("������ �� �� �����ϴ�.\n");
		exit(1);
	}

	for (int i = 0; i < SIZE; i++) {
		fread(&s, sizeof(struct student), 1, fp);
		printf("�̸� = %s, ���� = %.1f, ���� = %.1f, ���� = %.1f\n", s.name, s.korean, s.english, s.math);
		ksum += s.korean;
		esum += s.english;
		msum += s.math;
	}
	fclose(fp);
	printf("���: ����= %.2f, ���� = %.2f, ���� = %.2f\n", ksum / SIZE, esum / SIZE, msum / SIZE);

	return 0;
}