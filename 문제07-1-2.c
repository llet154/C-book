#include <stdio.h>

int main(void)
{
	int num, n=1;
	printf("���� ���� �Է�: ");
	scanf_s("%d", &num);
	
	while (n <= num)
	{
		printf("%d ", 3 * n);
		n++;
	}
	return 0;
}