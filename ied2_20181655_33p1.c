#include <stdio.h>

void main(void) {
	FILE *ifp, *ofp;
	char name[100][10] = {0}, grade[100] = {0};
	double score1[100] = {0}, score2[100] = {0}, st_avg[100] = {0};
	int res, dx, i, max;
	double tot_avg= 0;

	tot_avg = 0;
	dx = 0;
	res = 1;
	ifp = fopen("student.txt", "r");
	ofp = fopen("output33.txt", "w");

	while(res != EOF) {
		res = fscanf(ifp, "%s %lf %lf", name[dx], &score1[dx], &score2[dx]);
		tot_avg += (score1[dx] + score2[dx]);
		dx++;
	}
	max = dx;
	tot_avg /= (max*2-2);
	dx = 0;
	res = 1;
	fclose(ifp);
	ifp = fopen("student.txt", "r");
	while(res != EOF) {
		res = fscanf(ifp, "%s %lf %lf", name[dx],&score1[dx], &score2[dx]);
		st_avg[dx] = (score1[dx] + score2[dx])/2;
		if(st_avg[dx] > tot_avg)
			grade[dx] = 'p';
		else
			grade[dx] = 'f';
		dx++;
	}
	fprintf(ofp, "student\t\t\t\taverage\tgrade\n");
	for(i=0;i<max-1;i++) {
		fprintf(ofp, "%s\t\t\t\t%.2f\t%c\n",name[i],st_avg[i],grade[i]);
	}
	fprintf(ofp,"total avg : %.2f",tot_avg);
	fclose(ifp);
	fclose(ofp);
	return;
}