#include <stdio.h>
float x(int a, int b, int c, int d)
{
	return (float)(b - d) / (float)(a - c);
}
float y(float num,int a,int b)
{
	return a*num - b;
}
void main(void)
{
	int a, b, c, d;
	float tmp, tmp2;
	printf("1st equation: y = ax - b, input 'a' and 'b'\n");
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	printf("2nd equation: y = cx - d, input 'c' and 'd'\n");
	printf("c = ");
	scanf("%d", &c);
	printf("d = ");
	scanf("%d", &d);
	tmp = x(a, b, c, d);
	tmp2 = y(tmp, a, b);
	printf("result: \nx is %f\ny is %f", tmp, tmp2);
}