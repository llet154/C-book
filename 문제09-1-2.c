#include <stdio.h>

double CelToFah(cel)
{
	return 1.8 * cel + 32;
}

double FahToCel(fah)
{
	return (fah - 32) / 1.8;
}

int main(void)
{
	int sel;
	double num;
	printf("1.����->ȭ�� 2.ȭ��->���� \n");
	printf("����>>");
	scanf_s("%d", &sel);

	if (sel == 1)
	{
		printf("���� �Է�: ");
		scanf_s("%lf", &num);
		printf("��ȭ�� ȭ��: %f \n", CelToFah(num));
	}
	else if (sel == 2)
	{
		printf("ȭ�� �Է�: ");
		scanf_s("%lf", &num);
		printf("��ȭ�� ����: %f \n", FahToCel(num));
	}
	else
		printf("���� ���� \n");

	return 0;
}