#include <stdio.h>
int palindrome(int, int);
int check_digit(int);
void main(void)
{
	int num, digit;
	int rlt;
	printf("Input : ");
	scanf("%d", &num);
	if (num < 0)
	{
		printf("Input number cannot be negative.\n");
	}
	else
	{
		digit = check_digit(num);
		
		rlt = palindrome(num, 1);

		if (rlt == 1)
			printf("%d is palindrome number. \n", num);
		else
			printf("%d is not a palindrome number. \n", num);
	}
}
int check_digit(int num)
{
	int dx, rlt;
	if (0<=num && num <=9)
		return 1;
	else
	{
		for (dx = 1; dx < num; dx *= 10)
		{
			if (dx*dx <= num)
				rlt = dx;
			else
				break;
		}
		return rlt;
	}
}
int palindrome(int num, int dx)
{
	int num1 = 0, num2 = 0;
	int tmp;
	int digit = check_digit(num);
	tmp = digit * digit;
	if (num < 10)
		return 1;
	else
	{
		if (num < tmp * 10)
		{
			num1 = (num % (dx * 10) - num % (dx)) / dx;
			num2 = (num % (tmp / dx * 10) - num % (tmp / dx)) / (tmp / dx);

			if (dx <= digit)
			{
				dx *= 10;
				if (num1 == num2)
				{
					palindrome(num, dx);
				}
				else
					return 0;
			}
			else
				return 1;
		}
		else
		{
			num1 = (num % (dx * 10) - num % dx) / dx;
			num2 = (num % (tmp * 10 / dx * 10) - num % (tmp * 10 / dx)) / (tmp * 10 / dx);
			if (dx <= digit)
			{
				dx *= 10;
				if (num1 == num2)
				{
					palindrome(num, dx);
				}
				else
					return 0;
			}
			else
				return 1;
		}
	}
}