//2������

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	FILE* fp1 = NULL;
	FILE* fp2 = NULL;
	char fname1[100], fname2[100];
	char buffer1[1024], buffer2[1024];

	printf("ù��° ����: ");
	scanf("%s", fname1);

	fp1 = fopen(fname1, "r");

	if (fp1 == NULL) {
		printf("������ �� �� �����ϴ�.\n");
		exit(1);
	}

	printf("�ι�° ����: ");
	scanf("%s", fname2);


	fp2 = fopen(fname2, "r");

	if (fp2 == NULL) {
		printf("������ �� �� �����ϴ�.\n");
		exit(1);
	}

	while (fgets(buffer1, 1024, fp1) != NULL && fgets(buffer2, 1024, fp2) != NULL) {
		if (strcmp(buffer1, buffer2) != 0) {
			printf("<< %s", buffer1);
			printf(">> %s", buffer2);
		}
	}

	fclose(fp1);
	fclose(fp2);

	return 0;
}