#include <stdio.h>

int main(void)
{
	int dan, n;
	for (dan = 1; dan < 10; dan++)
	{
		if (dan == 2)
			for (n = 1; n < 3; n++)
				printf("%d x %d = %d \n", dan, n, dan * n);
		else if(dan == 4)
			for (n = 1; n < 5; n++)
				printf("%d x %d = %d \n", dan, n, dan * n);
		else if(dan == 6)
			for (n = 1; n < 7; n++)
				printf("%d x %d = %d \n", dan, n, dan * n);
		else if(dan == 8)
			for (n = 1; n < 9; n++)
				printf("%d x %d = %d \n", dan, n, dan * n);
	}
	return 0;
}