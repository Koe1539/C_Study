#include <stdio.h>

int main(void){
	int mode;
	
	printf("��带 �����ϼ��� : ");
	scanf("%d", &mode);
	
	switch(mode){
		case 0:
			printf("start");
			break;
		case 1:
			printf("stop");
			break;
		case 2:
			printf("option");
			break;
		case 3:
			printf("setting");
			break;
		case 4:
			printf("invalid mode!");
			break; 
	}
	
	return 0;
}
