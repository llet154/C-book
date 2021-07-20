#include <stdio.h>

int main(void)
{
	int num, n=0;
	printf("양의 정수 입력: ");
	scanf_s("%d", &num);
	
	while (n<num)
	{
		printf("Hello world! \n");
		n++;
	}
	return 0;
}