#include <stdio.h>
void main(void)
{
	int num, cut, dx, tmp, fail;
	float sum = 0;
	fail = 0;

	printf("Number of class : ");
	scanf("%d", &num);
	printf("Cutline: ");
	scanf("%d", &cut);
	dx = 0;
	while (dx < num)
	{
		printf("Input score #%d: ", dx);
		scanf("%d", &tmp);
		if (tmp < cut)
			fail++;
		sum += tmp;
		dx++;
	}
	printf("Average score : %.2f\n", sum / num);
	printf("Number of failures: %d\n", fail);
}