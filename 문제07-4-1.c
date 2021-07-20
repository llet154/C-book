#include <stdio.h>

int main(void)
{
	int n1, n2, total=0;
	printf("정수 입력: ");
	scanf_s("%d %d", &n1, &n2);

	for (; n1 <= n2; n1++)
	{
		total += n1;
	}
	printf("합: %d", total);
	return 0;
}