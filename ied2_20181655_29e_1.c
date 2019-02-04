#include <stdio.h>
void user_define(int max[][3][3]);
void main(void)
{
	int max[2][4][4];
	int i, j;
	int tmp;
	printf("First Matrix:\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &max[0][i][j]);
		}
	}
	printf("Second Matrix:\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &max[1][i][j]);
		}
	}
	user_define(max);
}
void user_define(int max[][4][4])
{
	int x, y, i, j;
	printf("Result: \n");
	for (x = 0; x < 4; x++)
	{
		for (y = 0; y < 4; y++)
		{
			max[2][x][y] = 0;
			for (i = 0; i < 4; i++)
			{
				max[2][x][y] += (max[0][x][i]) * (max[1][i][y]);
			}
		}
	}
	printf("Result: \n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", max[2][i][j]);
		}
		printf("\n");
	}
}