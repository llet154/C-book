#include <stdio.h>

int main(void)
{
	int n1, n2, total=0;
	printf("���� �Է�: ");
	scanf_s("%d %d", &n1, &n2);

	for (; n1 <= n2; n1++)
	{
		total += n1;
	}
	printf("��: %d", total);
	return 0;
}