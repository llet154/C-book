#include <stdio.h>

int main(void)
{
	int dan = 0, num = 9;
	printf("���� �Է�: ");
	scanf_s("%d", &dan);

	while (num>0)
	{
		printf("%dx%d=%d \n", dan, num, dan * num);
		num--;
	}
	return 0;
}