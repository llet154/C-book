#include <stdio.h>

int main(void)
{
	int num;
	printf("���� ���� �Է�: ");
	scanf_s("%d", &num);
	printf("��ȣ ���� ��: %d \n", ~num + 1);
	return 0;
}