#include <stdio.h>

int main(void)
{
	int result, num1, num2, num3;
	printf("세 개의 정수를 입력 : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	result = num1 * num2 + num3;
	printf("%dx%d+%d=%d \n", num1, num2, num3, result);
	return 0;
}