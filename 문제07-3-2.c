#include <stdio.h>

int main(void)
{
	int total = 0, num = 1;
	do
	{
		total += 2 * num;
		num++;
	} while (num<=50);
	printf("гу: %d", total);
	return 0;
}