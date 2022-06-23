#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
	int data;
	struct NODE* link;
} NODE;

int get_integer();
void print_list(NODE* plist);
void free_list(NODE* plist);

int main() {
	NODE* plist = NULL;
	NODE* head = NULL;

	while (1) {
		int data = get_integer();
		if (data < 0) break;

		NODE* p = (NODE*)malloc(sizeof(NODE));
		if (p == NULL) {
			printf("�޸� �����Ҵ� ����\n");
			exit(1);
		}

		p->data = data;
		if (head == NULL) {
			head = p;
		}
		else {
			plist->link = p;
		}
		plist = p;
		plist->link = NULL;
		
	}

	plist = head;
	print_list(plist);
	plist = head;
	free_list(plist);

	return 0;
}

int get_integer() {
	int tmp;
	printf("���� ������ �Է��Ͻÿ� (�����Ϸ��� -1�� �Է�): ");
	scanf("%d", &tmp);
	return tmp;
}

void print_list(NODE* plist) {
	while (1) {
		if (plist == NULL) {
			printf("NULL\n");
			break;
		}
		else {
			printf("%d->", plist->data);
			plist = plist->link;
		}
	}
}

void free_list(NODE* plist) {
	while (1) {
		if (plist == NULL) {
			break;
		}
		else {
			NODE* p = plist;
			plist = p->link;
			free(p);
		}
	}
}