#include <stdio.h>

int main(void)
{
	int n = 0, a, b, c;
	a = 0 <= n && n < 10;
	b = 10 <= n && n < 20;
	c = 20 <= n && n < 30;
	printf("�Է�: ");
	scanf_s("%c", &n);
	switch (n)
	{
	case 'a':
		printf("0�̻� 10�̸� \n");
		break;
	case 'b':
		printf("10�̻� 20�̸� \n");
		break;
	case 'c':
		printf("20�̻� 30�̸� \n");
		break;
	default:
		printf("30�̻� \n");
		break;
	}
}