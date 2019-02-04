#include <stdio.h>
void swap(int *, int *);
void main(void)
{
	int num1, num2;
	int num;
	int ix;
	int rlt =0;
	printf("Input first number: ");
	scanf("%d", &num1);
	printf("Input second number: ");
	scanf("%d", &num2);
	if (num1 == 0 || num2 == 0)
	{
		printf("Input is less than 1\n");
	}
	else
	{
		swap(&num1, &num2);
		num = num2 - num1;
		for (ix = num1; ix < num2 + 1; ix++)
		{
			if (ix % 2 == 0 || ix % 3 == 0)
			{
				rlt += ix;
			}
		}
		printf("Result : %d\n", rlt);
	}
}
void swap(int *num1, int *num2)
{
	int tmp;
	if (*num1 > *num2)
	{
		tmp = *num1;
		*num1 = *num2;
		*num2 = tmp;
	}
}