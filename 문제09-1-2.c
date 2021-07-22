#include <stdio.h>

double CelToFah(cel)
{
	return 1.8 * cel + 32;
}

double FahToCel(fah)
{
	return (fah - 32) / 1.8;
}

int main(void)
{
	int sel;
	double num;
	printf("1.¼·¾¾->È­¾¾ 2.È­¾¾->¼·¾¾ \n");
	printf("¼±ÅÃ>>");
	scanf_s("%d", &sel);

	if (sel == 1)
	{
		printf("¼·¾¾ ÀÔ·Â: ");
		scanf_s("%lf", &num);
		printf("º¯È­µÈ È­¾¾: %f \n", CelToFah(num));
	}
	else if (sel == 2)
	{
		printf("È­¾¾ ÀÔ·Â: ");
		scanf_s("%lf", &num);
		printf("º¯È­µÈ ¼·¾¾: %f \n", FahToCel(num));
	}
	else
		printf("¼±ÅÃ ¿À·ù \n");

	return 0;
}