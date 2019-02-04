#include <stdio.h>
int fibo(int);
void main(void)
{
	int num;
	scanf("%d", &num);
	num = fibo(num);
	printf("%d\n", num);
}
int fibo(int num)
{
	int tmp, dx, num1, num2;
	num1 = 1, num2 = 1;
	if (num == 1 || num == 1)
		return 1;
	else
	{
		for (dx = 2; dx < num; dx++)
		{
			tmp = num1 + num2;
			num1 = num2;
			num2 = tmp;
		}
		return tmp;
	}

}