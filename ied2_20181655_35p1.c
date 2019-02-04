#include <stdio.h>
void main(void)
{
	int size, i, j, max;
	int num[20][20];
	printf("Input size of triangle : ");
	scanf("%d", &size);
	max = 2;
	for (i = 0; i < size; i++)
	{
		num[i][0] = 1;
		num[i][i] = 1;
	}
	for (i = 2; i < size; i++)
	{
		for (j = 1; j < max; j++)
		{
			num[i][j] = num[i - 1][j - 1] + num[i - 1][j];
		}
		max++;
	}
	max = 1;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < max; j++)
		{
			printf("%d ", num[i][j]);
		}
		printf("\n");
		max++;
	}
}