#include <stdio.h>

int main(void){
//  ���� 
//	int a;
	
//	a = 10;
//	printf("%d\n",++a);
	
//	a = 10;
//	printf("%d\n",a++);

//	�������
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

//	if��
//	int a;
//	printf("������ �Է��Ͻÿ�. : ");
//	scanf("%d",&a);
	
//	if(a>10){
//		printf("ũ��");
//	}

// if~else
//	if(a>30){
//		printf("30���� ũ��.\n");
//	}
//	else{
//		printf("30���ϴ�.\n");
//	}
	
//else if
//	int a;
//	int b;
//	
//	scanf("%d %d",&a,&b);
//	
//	if(a==b){
//		printf("a�� b�� ����.\n");
//	}
//	else if(a>b){
//		printf("a�� b���� ũ��.\n"); 
//	}
//	else{
//		printf("a�� b���� �۴�.\n"); 
//	}

// switch case
	int mode;
	printf("��带 �Է��ϼ���. : ");
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
