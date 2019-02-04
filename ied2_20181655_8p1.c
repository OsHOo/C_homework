#include <stdio.h>
float avg(int num, int num2, int num3, int num4)
{
	return (float)(num + num2 + num3 + num4) / (float)4;
}
float pye(int num, float avg)
{
	return (float)num - avg;
}
void main(void)
{
	int num, num2, num3, num4;
	float avge;
	printf("Enter the first Number : ");
	scanf_s("%d", &num);
	printf("Enter the second Number : ");
	scanf_s("%d", &num2);
	printf("Enter the third Number : ");	
	scanf_s("%d", &num3);
	printf("Enter the fourth Number : ");
	scanf_s("%d", &num4);
	avge = avg(num, num2, num3, num4);
	printf("************* avreage is %.2f *************\n", avge);

	printf("first number :                     %d -- deviation :                  %.2f\n", num, pye(num , avge));
	printf("second number :                    %d -- deviation :                  %.2f\n", num2, pye(num2 , avge));
	printf("third number :                     %d -- deviation :                  %.2f\n", num3, pye(num3 , avge));
	printf("fourth number :                    %d -- deviation :                  %.2f\n", num4, pye(num4 , avge));
}