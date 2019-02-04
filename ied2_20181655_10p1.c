#include <stdio.h>
void swap(int *p, int*p2)
{
	int tmp;
	tmp = *p;
	*p = *p2;
	*p2 = tmp;
}
void main(void)
{
	int num, num2;
	int *p, *p2;
	p = &num;
	p2 = &num2;
	printf("Input two Number\n");
	printf("      x : ");
	scanf_s("%d", &num);
	printf("      y : ");
	scanf_s("%d", &num2);
	printf("--------------------------------------------------------------\n");
	printf("Before : x [%d] y [%d]\n", num, num2);
	printf("--------------------------------------------------------------\n");
	swap(p, p2);
	printf("After  : x [%d] y [%d]\n", num, num2);

}