#include <stdio.h>

int main(void){
	int a;
	int b;
	int sum;	// ���ϱ�
	int sub;	// ����
	int mul;	// ���ϱ� 
	float div;	// ������ 
	int rem;	// ������
	
	printf("���� a, b�� �Է��ϼ��� : ");
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
