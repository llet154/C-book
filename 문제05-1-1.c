#include <stdio.h>

int main(void)
{
	int lx, rx, ly, ry;
	printf("좌 상단의 x,y좌표: ");
	scanf_s("%d %d", &lx, &ly);
	printf("우 상단의 x,y좌표: ");
	scanf_s("%d %d", &rx, &ry);
	printf("두 점이 이루는 직사각형의 넓이는 %d입니다.", (rx - lx) * (ry - ly));
	return 0;
}