#include <stdio.h>
void check(char *word, int dx);
void main(void)
{
	int dx, ix=0;
	char word[50] = { 0 };
	for (dx = 0; dx < 50; dx++)
	{
		scanf("%c", &word[dx]);
		ix++;
		if (word[dx] == '\n')
			break;
	}
	for (dx = 0; dx < ix+1; dx++)
	{
		check(&word[dx], dx);
		printf("%c", word[dx]);
	}
	printf("\n");
}
void check(char *word, int dx)
{
	if ('a' <= *word && *word <= 'z')
		*word = *word - 'a' + 'A';
}