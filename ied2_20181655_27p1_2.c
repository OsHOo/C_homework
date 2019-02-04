#include <stdio.h>
void main(void)
{
	int num, dx;
	int sqr[100], tri[100];
	scanf("%d", &num);
	for (dx = 0; dx < num; dx++)
	{
		sqr[dx] = (dx+1) * (dx+1);
		tri[dx] = (dx + 1) * (dx + 1) * (dx + 1);
	}
	for (dx = 0; dx < num; dx++)
	{
		printf("%d ", dx + 1);
	}
	printf("\n");
	for (dx = 0; dx < num; dx++)
	{
		printf("%d ", sqr[dx]);
	}
	printf("\n");
	for (dx = 0; dx < num; dx++)
	{
		printf("%d ", tri[dx]);
	}
	printf("\n");
	
}