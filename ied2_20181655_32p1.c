#include <stdio.h>

void main(void)
{
	FILE *ifp, *ofp;
	float num1[100], num2[100];
	float rls[100];
	char cal[100];
	int res, i;
	char tmp;

	ifp = fopen("input32.txt", "r");
	ofp = fopen("output32.txt", "w");

	if (ifp == NULL || ofp == NULL)
	{
		printf("File Error\n");
		return;
	}
	while (1)
	{
		i = 0;
		res = fscanf(ifp, "%f %c %f %c %f", &num1[i], &cal[i], &num2[i], &tmp, &rls[i]);
	
		if (cal[i] == '+')
		{
			if (num1[i] + num2[i] == rls[i])
				fprintf(ofp, "%.2f %c %.2f = %.2f correct\n", num1[i], cal[i], num2[i], rls[i]);
			else
				fprintf(ofp, "%.2f %c %.2f = %.2f incorrect\n", num1[i], cal[i], num2[i], rls[i]);
		}
		else if (cal[i] == '-')
		{
			if (num1[i] - num2[i] == rls[i])
				fprintf(ofp, "%.2f %c %.2f = %.2f correct\n", num1[i], cal[i], num2[i], rls[i]);
			else
				fprintf(ofp, "%.2f %c %.2f = %.2f incorrect\n", num1[i], cal[i], num2[i],  rls[i]);
		}
		else if (cal[i] == '*')
		{
			if (num1[i] * num2[i] == rls[i])
				fprintf(ofp, "%.2f %c %.2f = %.2f correct\n", num1[i], cal[i], num2[i], rls[i]);
			else
				fprintf(ofp, "%.2f %c %.2f = %.2f incorrect\n", num1[i], cal[i], num2[i], rls[i]);
		}
		else if (cal[i] == '/')
		{
			if (num1[i] / num2[i] == rls[i])
				fprintf(ofp, "%.2f %c %.2f = %.2f correct\n", num1[i], cal[i], num2[i], rls[i]);
			else
				fprintf(ofp, "%.2f %c %.2f = %.2f incorrect\n", num1[i], cal[i], num2[i], rls[i]);
		}
		if (res == EOF)
			break;
		i++;
	}
	fclose(ifp);
	fclose(ofp);
}