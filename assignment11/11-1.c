//1������

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	FILE* fp1 = NULL;
	FILE* fp2 = NULL;

	char fname1[100], fname2[100];

	printf("ù��° ����: ");
	scanf("%s", fname1);

	fp1 = fopen(fname1, "r");
	if (fp1 == NULL) {
		printf("������ ���� �����ϴ�.\n");
		exit(1);
	}

	printf("�ι�° ����: ");
	scanf("%s", fname2);

	fp2 = fopen(fname2, "w");
	if (fp2 == NULL) {
		printf("������ �� �� �����ϴ�.");
		exit(1);
	}

	int c;
	while ((c = fgetc(fp1)) != EOF) {
		if (islower(c) > 0) {
			c = toupper(c);
		}
		fputc(c, fp2);
	}

	fclose(fp2);
	fp2 = fopen(fname2, "r");
	while ((c = fgetc(fp2)) != EOF) {
		putchar(c);
	}

	fclose(fp1);
	fclose(fp2);
	
	return 0;
}