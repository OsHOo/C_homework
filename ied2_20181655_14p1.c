#include <stdio.h>
#include <stdlib.h>
void main(void) 
{
	int yr;
	printf("Enter the year to be tested: ");
	scanf("%d", &yr);
	if(yr%4==0 && yr%100!=0)
		printf("It is a leap year.\n");
	else if(yr%400 == 0)
		printf("It is a leap year.\n");
	else
		printf("It is not a leap year.\n");

	system("pause");
}