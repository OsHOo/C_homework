#include <stdio.h>
int fibo(int);
void main(void)
{
	int num;
	printf("Input n : ");
	scanf("%d", &num);
	if (num < 0)
		printf("n cannot be negative number.\n");
	else
	{
		printf("Fibo(%d) = %d\n", num, fibo(num));
	}
}
int fibo(int num)
{
	
	int a = 0;
	int b = 1;
	int tmp;
	do
	{
		if (num == 0)
			break;
		tmp = b;
		b += a;
		a = tmp;
		num--;
	} while (num != 0);
	return a;
}