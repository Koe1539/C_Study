#include <stdio.h>

int main(void){
	int num;
	
	printf("num���� �Է��ϼ��� : ");
	scanf("%d", &num);
	printf("����� �Է��� ���� %d�Դϴ�.\n", num);
	
	if(num>50){
		printf("50 �̻��Դϴ�.");
	}
	else if(num==50){
		printf("50�Դϴ�.");
	}else{
		printf("50 �̸��Դϴ�.");
	}
	
	return 0;
}
