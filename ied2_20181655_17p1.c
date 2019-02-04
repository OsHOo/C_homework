#include <stdio.h>
float avgFunc(float a, float b, float c);
void gradeFunc(float a);
void main(void)
{
	float score, score2, score3;
	printf("Input: ");
	scanf("%f %f %f", &score, &score2, &score3);
	gradeFunc(avgFunc(score, score2, score3));
}
float avgFunc(float a, float b, float c)
{
	return (a + b + c) / 3;
}
void gradeFunc(float a)
{
	if (a >= 50)
	{
		if (a >= 70)
		{
			if (a >= 80)
			{
				if (a >= 90)
					printf("Grade : A\n");
				else
					printf("Grade : B\n");
			}
			else
				printf("Grade : C\n");
		}
		else
			printf("Grade : D\n");
	}
	else
		printf("Grade : F\n");
}