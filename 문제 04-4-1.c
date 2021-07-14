#include <stdio.h>

int main(void)
{
	int num;
	printf("정수 값을 입력: ");
	scanf_s("%d", &num);
	printf("부호 반전 값: %d \n", ~num + 1);
	return 0;
}