//3������
#include <stdio.h>

void set_proverb(char** q, int n);

int main() {
	int n;
	char* s;
	printf("���° �Ӵ��� �����Ͻðڽ��ϱ�? ");
	scanf("%d", &n);

	set_proverb(&s, n);
	printf("���õ� �Ӵ�: %s\n", s);

	return 0;
}

void set_proverb(char** q, int n) {
	char* array[10] = {
		"A bad workman always blames his tools.",
		"A bird in hand is worth two in the bush.",
		"Absence makes the heart grow fonder.",
		"A cat has nine lives.",
		"A chain is only as strong as its weakest link.",
		"Actions speak louder than words.",
		"A drowning man will clutch at a straw.",
		"All good things come to an end.",
		"All��s well that ends well.",
		"All that glitters is not gold."
	};
	*q = array[n];
}