#include <stdio.h>
void divideRemainder(int *p, int*p2)
{
	int tmp;
	tmp = *p;
	*p = *p / *p2;
	*p2 = tmp % *p2;
}
void main(void)
{
	int num, num2;
	int *p, *p2;
	p = &num;
	p2 = &num2;
	printf("Input two Number : ");
	scanf_s("%d %d", &num, &num2);
	printf("--------------------------------------------------------------\n");
	divideRemainder(p, p2);
	printf("Output : divide [%d] remainder [%d]\n", num, num2);
}