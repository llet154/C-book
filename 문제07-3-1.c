#include <stdio.h>

int main(void)
{
	int num = 1, total = 0;
	
	while (num != 0)
	{
		printf("���� �Է�(0 to quit): ");
		scanf_s("%d", &num);
		total += num;
	}
	printf("��: %d", total);
	return 0;
}