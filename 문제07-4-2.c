#include <stdio.h>

int main(void)
{
	int n, num, total=1;
	printf("정수 입력: ");
	scanf_s("%d", &n);

	for (num = 1; num <= n; num++)
	{
		total *= num;
	}
	printf("합: %d", total);
	return 0;
}