#include <stdio.h>

int main(void){
	int a;
	int b;
	int sum;	// 더하기
	int sub;	// 빼기
	int mul;	// 곱하기 
	float div;	// 나누기 
	int rem;	// 나머지
	
	printf("정수 a, b를 입력하세요 : ");
	scanf("%d %d", &a, &b);
	
	sum = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;
	rem = a % b;
	
	printf("a + b = %d\n", sum);
	printf("a - b = %d\n", sub);
	printf("a * b = %d\n", mul);
	printf("a / b = %.2f\n", div);
	printf("a %% b = %d\n", rem);
	
	return 0;
}
