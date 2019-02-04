#include <stdio.h>
int isDivisor(int, int);
int isPrime(int);
void main(void)
{
	int num, dx;
	
	printf("Input : ");
	scanf("%d", &num);
	for (dx = 2; dx < num + 1; dx++)
	{
		if (isDivisor(dx, num) == 1 && isPrime(dx) == 1)
		{
			printf("%d ", dx);
		}
	}
	printf("\n");
}
int isDivisor(int dx, int num)
{
	if (num%dx == 0)
		return 1;
	else
		return 0;
}
int isPrime(int dx)
{
	int ix;
	int tmp = 1;
	for (ix = 2; ix < dx; ix++)
	{
		if (isDivisor(ix, dx) == 1)
		{
			tmp = 0;
			break;
		}
		else
			continue;
	}
	if (tmp == 0)
		return 0;
	else
		return 1;
	
}