#include <stdio.h>

int main(void)
{
	char n1;
	printf("아스키 문자: ");
	scanf_s("%c", &n1);
	printf("정수 값: %d", n1);
	return 0;
}