#include <stdio.h>

int main(void)
{
	int num = 0;
	double total = 0;
	int n = 0;
	int nu = 0;
	printf("�Է� ��: ");
	scanf_s("%d", &num);

	while (nu < num)
	{
		printf("���� �Է�: ");
		scanf_s("%d", &n);
		total += n;
		nu++;
	}
	total = total / num;
	printf("��� ��: %f", total);
	return 0;
}