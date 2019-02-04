#include <stdio.h>

float user_define(int j, int num[][100], int num1);
void main(void)
{
	int num[100][100];
	int i, j;
	int num1;
	scanf("%d", &num1);
	for (i = 0; i < num1; i++)
	{
		for (j = 0; j < num1; j++)
		{
			scanf("%d", &num[i][j]);
		}
	}
	for (j = 0; j < num1; j++)
	{
		printf("%.2f " ,user_define(j, num, num1));
	}
	printf("\n");
	
}
float user_define(int j, int num[][100], int num1)
{
	int i;
	float tmp = 0;
	for (i = 0; i < num1; i++)
	{
		tmp += num[i][j];
	}
	return tmp / num1;
}