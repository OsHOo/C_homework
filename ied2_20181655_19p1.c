#include <stdio.h>
void absValue(int *, int *, int *);
void swap(int *, int *);
void main(void)
{
	int a, b, c;
	int n1, n2, n3;
	printf("Input : ");
	scanf("%d %d %d", &a, &b, &c);
	absValue(&a, &b, &c);
	n1 = a > b ? a > c ? swap(a) : swap(c) : c > b ? swap(c) : swap(b);
	n3 = a < b ? a < c ? swap(a) : swap(c) : c < b ? swap(c) : swap(b);
	if (a != n1 && a != n3)
		n2 = a;
	if (b != n1 && b != n3)
		n2 = b;
	if (c != n1 && c != n3)
		n2 = c;
	printf("Output : %d %d %d\n", n1, n2, n3);
}
void absValue(int *a, int *b, int *c)
{
	*a = *a < 0 ? -*a : *a; 
	*b = *b < 0 ? -*b : *b;
	*c = *c < 0 ? -*c : *c;
}
int swap(int a)
{
	return a;
}