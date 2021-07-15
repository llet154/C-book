#include <stdio.h>

int main(void)
{
	double n1, n2;
	printf("µÎ °³ÀÇ ½Ç¼ö ÀÔ·Â: ");
	scanf_s("%lf %lf", &n1, &n2);

	printf("µÎ ¼öÀÇ µ¡¼À: %f \n", n1 + n2);
	printf("µÎ ¼öÀÇ »¬¼À: %f \n", n1 - n2);
	printf("µÎ ¼öÀÇ °ö¼À: %f \n", n1 * n2);
	printf("µÎ ¼öÀÇ ³ª´°¼À: %f \n", n1 / n2);
	return 0;
}