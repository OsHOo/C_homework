#include <stdio.h>
int checky(int);
void main(void)
{
	int size, i, j, tmp, check;
	printf("Input Height! : ");
	scanf("%d", &size);

	check = checky(size);
	tmp = (size+check)/2;
	for (j = 0; j < size/2; j++)
	{
		for (i = 0; i < tmp-j; i++)
		{
			printf("*");
		}
		for (i = 0; i < 2*j - check; i++)
		{
			if (i > size - 2)
				break;
			printf(" ");

		}
		for (i = 0; i < tmp - j; i++)
		{
			if (check == 1 && i == tmp - 1)
				break;
			printf("*");
		}
		printf("\n");
	}
	for (j = (size-1)/2; j > -1; j--)
	{
		for (i = 0; i < tmp - j; i++)
		{
			printf("*");
		}
		for (i = 0; i < 2 * j - check; i++)
		{
			printf(" ");
		}
		for (i = 0; i < tmp - j; i++)
		{
			if (check == 1 && i == tmp - 1)
				break;
			printf("*");
		}
		printf("\n");
	}

	scanf("%d", &size);
}
int checky(int num)
{
	if (num % 2 == 0)
		return 0;
	else
		return 1;
}