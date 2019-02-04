#include <stdio.h>
void dec2oct(int*, int*, int*, int*, int);//10진수 수를 4자리의 8진수로 변환하는 함수
void dec2hex(char*, char*, char*, int);//10진수 수를 3자리의 16진수로 변환하는 함수
char digit2hex(int);//10진수를 한자리의 16진수로 변환하는 함수
void main(void)
{
	int num;
	int a, b, c, d;
	char e, f, g;
	
	scanf("%d", &num);
	printf("%o\n", num);
	dec2oct(&a, &b, &c, &d, num);
	printf("%d%d%d%d\n",a, b, c, d);
	printf("%X\n", num);
	dec2hex(&e, &f, &g, num);
	printf("%c%c%c\n", e, f, g);
}
void dec2oct(int*a, int*b, int*c, int*d, int num)
{
	*a = num / (8 * 8 * 8);
	*b = (num - *a * (8 * 8 * 8)) / (8 * 8);
	*c = (num - *a * (8 * 8 * 8) - *b * (8 * 8)) / 8;
	*d = (num - *a * (8 * 8 * 8) - *b * (8 * 8) - *c * 8);
}
void dec2hex(char* e, char*f, char*g, int num)
{
	int a, b, c;
	a = num / (16 * 16);
	b = (num - a * (16 * 16)) / 16;
	c = num - a * (16 * 16) - b * 16;
	*e = digit2hex(a);
	*f = digit2hex(b);
	*g = digit2hex(c);
}
char digit2hex(int num)
{
	if (num > 9)
		return num + 55;
	else
		return num + 48;
}
