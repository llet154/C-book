#include <stdio.h>

int main(void)
{
	int num = 0;
	double total = 0;
	int n = 0;
	int nu = 0;
	printf("입력 수: ");
	scanf_s("%d", &num);

	while (nu < num)
	{
		printf("정수 입력: ");
		scanf_s("%d", &n);
		total += n;
		nu++;
	}
	total = total / num;
	printf("평균 값: %f", total);
	return 0;
}