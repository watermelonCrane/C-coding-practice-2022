//2������
#include <stdio.h>

enum shape_type {TRIANGLE, RECTANGLE, CIRCLE};

struct shape {
	int type;
	union {
		struct {
			int base, height;
		}tri;
		struct {
			int width, height;
		}rect;
		struct {
			int radius;
		}circ;
	} p;
};

int main() {
	struct shape s;
	enum shape_type type;

	printf("������ Ÿ���� �Է��Ͻÿ�(0-TRIANGLE, 1-RECTANGLE, 2-CIRCLE): ");
	scanf("%d", &type);

	switch (type) {
		case TRIANGLE: 
			printf("�غ��� �������� �Է��Ͻÿ�(���� �� 10 20): ");
			scanf("%d %d", &s.p.tri.base, &s.p.tri.height);
			printf("������ %d\n", s.p.tri.base * s.p.tri.height / 2);
			break;
		case RECTANGLE:
			printf("���ο� ������ ���̸� �Է��Ͻÿ�(���� �� 10 20): ");
			scanf("%d %d", &s.p.rect.width, &s.p.rect.height);
			printf("������ %d\n", s.p.rect.width * s.p.rect.height);
			break;
		case CIRCLE:
			printf("�������� �Է��Ͻÿ�(���� �� 10): ");
			scanf("%d", &s.p.circ.radius);
			printf("������ %d\n", (int)(s.p.circ.radius * s.p.circ.radius * 3.14));
			break;
		default:
			printf("������ Ÿ���� �߸� ���õǾ����ϴ�.\n");
			break;
	}

	return 0;
}