#include <stdio.h>
int rlt[10];
void merge(int arrA[5], int arrB[5]);
void main(void)
{
	int arrA[5], arrB[5];
	int i;
	printf("Input arrayA: ");
	for (i = 0; i < 5; i++) {

		scanf("%d", &arrA[i]);
	}
	printf("Input arrayB: ");
	for (i = 0; i < 5; i++) {

		scanf("%d", &arrB[i]);
	}
	merge(arrA, arrB);
	printf("Merged array: ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", rlt[i]);
	}
}
void merge(int arrA[5], int arrB[5])
{
	int i, k, tmp;
	for (i = 0; i < 5; i++)
	{
		rlt[i] = arrA[i];
		rlt[i + 5] = arrB[i];
	}
	for (i = 0; i < 10; i++)
	{
		for (k = 0; k < 9; k++)
		{
			if (rlt[k] > rlt[k+1])
			{
				tmp = rlt[k+1];
				rlt[k+1] = rlt[k];
				rlt[k] = tmp;
			}
		}
	}
}