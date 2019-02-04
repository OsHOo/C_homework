#include <stdio.h>
int main(void) {
	FILE *ofp;
	int res,dx,tmp;
	char ch[400];
	int alp_n[27] = {0};
	res = 0;
	ofp = fopen("input_39.txt", "r");
	for(dx=0;res!=EOF;dx++) {
		res = fscanf(ofp,"%c", &ch[dx]);
		if((ch[dx] >= 'a') && (ch[dx] <= 'z')) {
			tmp = ch[dx] - 'a';
			alp_n[tmp]++;
		}
		else if((ch[dx] >= 'A') && (ch[dx] <= 'Z')) {
			tmp = ch[dx] - 'A';
			alp_n[tmp]++;
		}
	}
	for(dx=0;dx<26;dx++) {
		printf("%c:%d  ", dx+'A',alp_n[dx]);
	}

	fclose(ofp);

	return 0;
}