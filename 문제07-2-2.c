#include <stdio.h>

int main(void)
{
	int c = 0, n=0;
	while (n < 5)
	{
		while (c < n)
		{
			printf("o ");
			c++;
		}
		c = 0;
		printf("* \n");
		n++;
	}
	return 0;
}