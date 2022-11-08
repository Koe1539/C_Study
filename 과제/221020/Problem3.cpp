#include <stdio.h>

int main(void){
	int num;
	
	printf("num값을 입력하세요 : ");
	scanf("%d", &num);
	printf("당신이 입력한 값은 %d입니다.\n", num);
	
	if(num>50){
		printf("50 이상입니다.");
	}
	else if(num==50){
		printf("50입니다.");
	}else{
		printf("50 미만입니다.");
	}
	
	return 0;
}
