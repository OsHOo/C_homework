#include <stdio.h>

void main(void)
{
	FILE *fp1, *fp2, *ofp;
	char filename_1[100], filename_2[100];
	int res, i, tmp, err;
	float ans;
	char word, word2;

	tmp = 0, err = 0;

	printf("Input first file name: ");
	scanf("%s", &filename_1);
	//printf("%s", filename_1);
	printf("Input second file name: ");
	scanf("%s", &filename_2);
	//printf("%s", filename_2);

	fp1 = fopen(filename_1, "r");
	fp2 = fopen(filename_2, "r");
	ofp = fopen("output.txt", "w");

	if (fp1 == NULL || fp2 == NULL)
	{
		printf("Input file open error!\n");
		return;
	}
	
	for (i = 0; i<1000; i++)
	{
		res = fscanf(fp1, "%c", &word);
		if (res == EOF)
			break;
		res = fscanf(fp2, "%c", &word2);
		if (res == EOF)
			break;
		if (word == word2)
			err++;
		tmp++;
	}
	printf("%d %d\n", tmp, err);
	//scanf("%d", &tmp);
	ans = 100 * (float)err / (float)tmp;
	fprintf(ofp, "Total character : %d\nSame character: %d\n%.3f%%", tmp, err, ans);
	fclose(fp1);
	fclose(fp2);
	fclose(ofp);
}