#include <stdio.h>
void main(void)
{
	int n0, n1, n2, n_0, n_1, n_2 = 0;
	int att = 0;
	int att2 = 0;
	int tmp = 0;

	printf("Enter 2 numbers: ");
	scanf("%1d%1d%1d %1d%1d%1d", &n0, &n1, &n2, &n_0, &n_1, &n_2);
	//printf("%d%d%d%d%d%d", n0, n1, n2, n_0, n_1, n_2);
	tmp = n2 + n_2;
	att = tmp >= 10 ? att + 1 : att;
	att2 = tmp >= 10 ? 1 : 0;
	tmp = n1 + n_1 + att2;
	att = tmp >= 10 ? att + 1 : att;
	att2 = tmp >= 10 ? 1 : 0;
	tmp = n0 + n_0 + att2;
	att = tmp >= 10 ? att + 1 : att;
	printf("%d carry operations.\n", att);
}