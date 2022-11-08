#include <stdio.h>

int main(void){
//  단항 
//	int a;
	
//	a = 10;
//	printf("%d\n",++a);
	
//	a = 10;
//	printf("%d\n",a++);

//	산술연산
//	int a;
//	int b;
//	
//	a = 10;
//	b = 5;
//	
//	int sum = a + b;
//	int minus = a - b;
//	int mul = a * b;
//	float div = a / b;
//	float mod = a & b;
//	
//	printf("%d + %d = %d\n",a,b,sum);
//	printf("%d - %d = %d\n",a,b,minus);
//	printf("%d * %d = %d\n",a,b,mul);
//	printf("%d / %d = %.0f\n",a,b,div);
//	printf("%d %% %d = %d\n",a,b,mod);

//	if문
//	int a;
//	printf("정수를 입력하시오. : ");
//	scanf("%d",&a);
	
//	if(a>10){
//		printf("크다");
//	}

// if~else
//	if(a>30){
//		printf("30보다 크다.\n");
//	}
//	else{
//		printf("30이하다.\n");
//	}
	
//else if
//	int a;
//	int b;
//	
//	scanf("%d %d",&a,&b);
//	
//	if(a==b){
//		printf("a와 b는 같다.\n");
//	}
//	else if(a>b){
//		printf("a가 b보다 크다.\n"); 
//	}
//	else{
//		printf("a는 b보다 작다.\n"); 
//	}

// switch case
	int mode;
	printf("모드를 입력하세요. : ");
	scanf("%d",&mode);
	
	switch(mode){
		case 1:
			printf("Attack!\n");
			break;
		case 2:
			printf("Defence!\n");
			break;
		case 3:
			printf("Heal!\n");
			break;
		default:
			printf("Invalid Number!");
	} 
	
	return 0;
}
