#include <stdio.h>

int main(void){
	int a;
	int b;
	double div;
	
	scanf("%d %d",&a,&b);
	div = (double)a / (double)b;
	printf("%.9lf",div);
	
	return 0;
}
