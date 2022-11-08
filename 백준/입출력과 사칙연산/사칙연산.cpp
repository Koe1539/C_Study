#include <stdio.h>

int main(void){
	int a;
	int b;
	int sum;
	int sub;
	int mul;
	double div;
	int rem;
	
	scanf("%d %d",&a, &b);
	
	sum = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;
	rem = a % b;
	
	printf("%d\n%d\n%d\n%.0lf\n%d\n", sum, sub, mul, div, rem);
	
	return 0;
}
