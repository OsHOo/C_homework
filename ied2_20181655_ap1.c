#include <stdio.h>
void ch_C_F(int deg)
{
	printf("Temperature in Fahrenhit %.2f", 1.8*deg + 32);
}
void main(void)
{
	int deg;
	printf("Enter Temperature in Celsius : ");
	scanf("%d", &deg);
	ch_C_F(deg);
}