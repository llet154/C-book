#include <stdio.h>

int main(void)
{
	int num = 0;
	int n = 0;
	int total = 0;
	while (n < 5)
	{
		while (num<=0)
		{
			printf("���� �Է�: ");
			scanf_s("%d", &num);
			total += num;
		}
		num = 0;
		n++;
	}
	printf("�� ��: %d", total);
	return 0;
}