#include <stdio.h>

int main(void)
{
	int num, n=1;
	printf("양의 정수 입력: ");
	scanf_s("%d", &num);
	
	while (n <= num)
	{
		printf("%d ", 3 * n);
		n++;
	}
	return 0;
}