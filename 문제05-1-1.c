#include <stdio.h>

int main(void)
{
	int lx, rx, ly, ry;
	printf("�� ����� x,y��ǥ: ");
	scanf_s("%d %d", &lx, &ly);
	printf("�� ����� x,y��ǥ: ");
	scanf_s("%d %d", &rx, &ry);
	printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�.", (rx - lx) * (ry - ly));
	return 0;
}