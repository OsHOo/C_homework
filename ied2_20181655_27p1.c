#include <stdio.h>
void swap(int*, int*);
void main(void)
{
	int num[10];
	int dx, max, min, tmp;
	printf("Input (10 numbers): ");
	for (dx = 0; dx < 10; dx++)
	{
		scanf("%d", &num[dx]);
		if (dx == 0)
		{
			max = num[dx];
			min = num[dx];
		}
		tmp = num[dx];
		if (max < tmp)
			max = tmp;
		if (min > tmp)
			min = tmp;
	}
	for (dx = 0; dx < 5; dx++)
	{
		swap(&num[dx], &num[9 - dx]);
	}
	for (dx = 0; dx<10; dx++)
	{
		printf("%d ", num[dx]);
	}

	printf("\nMax : %d, Min : %d\n", max, min);

}
void swap(int *num1, int *num2)
{
	int tmp;
	tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}