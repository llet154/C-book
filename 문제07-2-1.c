#include <stdio.h>

int main(void)
{
	int num = 0;
	int n = 0;
	int total = 0;
	while (n < 5)
	{
		while (num<=0)
		{
			printf("정수 입력: ");
			scanf_s("%d", &num);
			total += num;
		}
		num = 0;
		n++;
	}
	printf("총 합: %d", total);
	return 0;
}