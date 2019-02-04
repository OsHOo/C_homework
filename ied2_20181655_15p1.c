#include <stdio.h>
void main(void)
{
	int num;
	printf("Input : ");
	scanf("%d", &num);
	num%2==0 ? printf("%d is even number.\n", num) : printf("%d is odd number.\n",num);
}