#include <stdio.h>

int main(void)
{
	int k, e, m;
	double avg;
	printf("���� �Է�: ");
	scanf_s("%d %d %d", &k, &e, &m);
	avg = (k + e + m) / 3.0;
	printf("���: %f \n", avg);
	if (avg >= 90.0)
		printf("A \n");
	else if (avg >= 80.0)
		printf("B \n");
	else if (avg >= 70.0)
		printf("C \n");
	else if (avg >= 50.0)
		printf("D \n");
	else
		printf("F \n");
	return 0;
}