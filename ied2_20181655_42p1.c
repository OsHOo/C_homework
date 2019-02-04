#include <stdio.h>
int check (char binary[]) {
	int dx,tmp;
	for(dx=0;dx<100;dx++) {
		if(binary[dx] == NULL)
			break;
		if((binary[dx] != '1') && (binary[dx] != '0')) {
			tmp = 0;
			break;
		}
		else
			tmp = 1;
		
	}
	return tmp;
}
int exp(int num) {
	int dx;
	int tmp = 1;
	for(dx=0;dx<num-1;dx++) {
		tmp *= 2;
	}
	return tmp;
}
int biToDec(char binary[]) {
	int tmp,dx,num;
	num = 0;
	tmp = 0;
	for(dx = 0; binary[dx] != NULL;dx++)
		tmp++;
	for(dx=0;binary[dx] != NULL;dx++) {
		num += (binary[dx]-'0') * exp(tmp-dx);
	}
	return num;
}

int main(void) {
	char binary[100];
	int chk, num, dx;
	printf("Enter binary number : ");
	scanf("%s", binary);
	chk = check(binary);
	if(chk == 0) {
		printf("Invalid binary number.");
		return 0;
	}
	else if(chk == 1) {
		for(dx = 0; binary[dx] != NULL;dx++) {
		   num = biToDec(binary);
		}
		printf("Decimal number : %d\n",num);
	}
	return 0;
}
