#include <stdio.h>
void main(void)
{
	int line;
	int dx, rx, ix;
	printf("Input : ");
	scanf("%d", &line);
	dx = 0;
	while (dx < line)
	{
		rx = 0;
		while (rx < line - dx)
		{
			printf(" ");
			rx++;
		}
		ix = 0;
		while (ix < dx * 2 +1)
		{
			printf("*");
			ix++;
		}
		printf("\n");
		dx++;
	}
}