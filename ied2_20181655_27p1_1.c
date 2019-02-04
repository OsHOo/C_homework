#include <stdio.h>
void main(void)
{
	int dx, tmp, err;
	int num[5] = { 0 };
	err = 0;
	for (dx = 0; dx < 5; dx++)
	{
		scanf("%d", &num[dx]);
	}
	for (dx = 0; dx < 5; dx++)
	{
		scanf("%d", &tmp);
		if (tmp != num[dx])
			err++;
	}
	if (err == 0)
		printf("true\n");
	else
		printf("false\n");
}