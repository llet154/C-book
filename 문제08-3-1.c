#include <stdio.h>

int main(void)
{
	int n = 0, a, b, c;
	a = 0 <= n && n < 10;
	b = 10 <= n && n < 20;
	c = 20 <= n && n < 30;
	printf("입력: ");
	scanf_s("%c", &n);
	switch (n)
	{
	case 'a':
		printf("0이상 10미만 \n");
		break;
	case 'b':
		printf("10이상 20미만 \n");
		break;
	case 'c':
		printf("20이상 30미만 \n");
		break;
	default:
		printf("30이상 \n");
		break;
	}
}