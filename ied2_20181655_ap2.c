#include <stdio.h>
void print_ASC(char ch)
{
	printf("ASCII code of [%c] is [%d]\n", ch, ch);
}
void main(void)
{
	char ch;
	printf("Enter 1 character : ");
	scanf("%c", &ch);
	print_ASC(ch);
}