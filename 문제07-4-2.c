#include <stdio.h>

int main(void)
{
	int n, num, total=1;
	printf("���� �Է�: ");
	scanf_s("%d", &n);

	for (num = 1; num <= n; num++)
	{
		total *= num;
	}
	printf("��: %d", total);
	return 0;
}