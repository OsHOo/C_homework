#include <stdio.h>
void func_gcd(int a, int b, int*gcd);
void main(void)
{
	int gcd;
	int num1, num2;
	printf("Input first number: ");
	scanf("%d", &num1);
	printf("Input second number: ");
	scanf("%d", &num2);
	func_gcd(num1, num2, &gcd);
	printf("GCD: %d\n", gcd);
}
void func_gcd(int num1, int num2, int *gcd)
{
	int tmp = 1;
	int tmp2;
	while (tmp != 0)
	{
		tmp = num1 % num2;
		num1 = num2;
		num2 = tmp;
	}
	*gcd = num1;
}