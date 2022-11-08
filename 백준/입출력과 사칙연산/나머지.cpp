#include <stdio.h>

int main(void){
	int a,b,c,fir,sec,thr,four;
	
	scanf("%d %d %d", &a, &b, &c);
	
	fir = (a+b)%c;
	sec = ((a%c)+(b%c))%c;
	thr = (a*b)%c;
	four = ((a%c)*(b%c))%c;
	
	printf("%d\n%d\n%d\n%d\n", fir, sec, thr, four);
	
	return 0;
}
