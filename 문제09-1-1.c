#include <stdio.h>

int A(int n1, int n2, int n3)
{
	if (n1 < n2)
		if (n1 < n3)
			return n1;
		else
			return n3;
	else
		if (n2 < n3)
			return n2;
		else
			return n3;
}
int B(int n1, int n2, int n3)
{
	if (n1 < n2)
		if (n2 < n3)
			return n3;
		else
			return n2;
	else
		if (n1 < n3)
			return n3;
		else
			return n1;
}
int main(void)
{
	int n1, n2, n3;
	printf("���� �Է�: ");
	scanf_s("%d %d %d", &n1, &n2, &n3);
	printf("���� ���� ������: %d \n", A(n1, n2, n3));
	printf("���� ū ������: %d \n", B(n1, n2, n3));
	return 0;
}