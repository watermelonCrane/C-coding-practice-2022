//1번문제
#include <stdio.h>

#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define GET_MIN(x, y, z) (MIN(x, y) < (z) ? MIN(x, y) : (z))

int main() {
	int x, y, z;
	printf("3개의 정수를 입력하시오: ");
	scanf("%d %d %d", &x, &y, &z);
	
	printf("최소값은 %d입니다.\n", GET_MIN(x, y, z));

	return 0;
}