#include <stdio.h>

int main(void)
{
	int total = 0;
	int	num = 1;

	while (num!=0)
	{
		printf("���� �Է�: ");
		scanf_s("%d", &num);
		total += num;
	}
	printf("%d \n", total);
	return 0;
}