#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
void main(void)
{
	int scale, dx, ix;
	float rlt;
	float axis;
	int ax;
	
	scanf("%d", &scale);
	axis = (float)scale / 2;
	ax = (int)axis;
	for (dx = -(scale/2); dx < (int)axis+1; dx++)
	{
		rlt = (float)sin(((float)dx / axis)*M_PI);
		printf("% 3d/%2dpi % 10.3f     ",dx,(int)axis,rlt);
		if (dx < 0 && dx != -(int)axis)
		{
			for (ix = 0; ix <(int)((rlt+0.01) * ax) + ax; ix++)
				printf(" ");
			printf("*");
			for (ix = (int)((rlt+0.01) * ax) + ax+1; ix < ax-1;ix++)
				printf(" ");
			printf("|");
			printf("\n");
		}
		else if (dx > 0 && dx != (int)axis)
		{
			for (ix = 0; ix < ax-1; ix++)
				printf(" ");
			printf("|");
			for (ix = ax+2; ix < (int)((rlt-0.01) * ax) + ax; ix++)
				printf(" ");
			printf("*");
			printf("\n");
		}
		else if (dx == (int)axis || dx == -(int)axis)
		{
			for (ix = 0; ix < ax-1; ix++)
				printf(" ");
			printf("*");
			printf("\n");
		}
		else
		{
			if (dx == 0)
			{
				for (ix = 0; ix < ax-1; ix++)
					printf("-");
				printf("*");
				for (ix = ax; ix < ax*2; ix++)
					printf("-");
				printf("\n");
			}
			else
			{
				for (ix = 0; ix < ax-1; ix++)
					printf(" ");
				printf("*");
				printf("\n");
			}
		}
	}
}