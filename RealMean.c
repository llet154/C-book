#include <stdio.h>

int main(void)
{
	double total = 0.0;
	double input = 0.0;
	int num = 0;

	for (; input >= 0.0; num++)
	{
		total += input;
		printf("�Ǽ� �Է�(minus to quit): ");
		scanf_s("%lf", &input);
	}
	printf("���: %f \n", total / (num - 1));
	return 0;
}