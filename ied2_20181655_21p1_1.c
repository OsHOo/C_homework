#include <stdio.h>
int comb(int, int);
int pact(int);
void main(void)
{
	int line;
	int dx = 0, rx = 0, ix = 0;
		
	scanf("%d", &line);
	
	while (dx < line)
	{
		rx = 0;
		ix = 0;
		while (rx < (line-1-dx))
		{
			printf("  ");
			rx++;
		}//rx = 3 / 2 / 1
		while (ix < dx + 1)
		{
			printf("%3d ", comb(dx, ix));
			ix++;
		}
		printf("\n");
		dx++;
	}
}
int pact(int a)
{
	int att = 1;
	int rlt = 1;
	while (att < a+1)
	{
		rlt *= att;
		att++;
	}
	return rlt;

}
int comb(int a, int b)
{
	return pact(a) / (pact(a - b)*pact(b));
}