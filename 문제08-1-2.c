#include <stdio.h>

int main(void)
{
	int n1, n2;
	printf("두 개의 정수 입력: ");
	scanf_s("%d %d", &n1, &n2);

	if (n1 > n2)
		printf("두 수의 차는: %d", n1 - n2);
	else
		printf("두 수의 차는: %d", n2 - n1);
		return 0;
}