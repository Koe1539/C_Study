#include <stdio.h>
//	���� ���� > ���� ���� - �켱 ����
//	���� ����
int num = 10; 

int SimpleFuncOne(void){
	//	���� ����
	int n1 = 20, n2 = 30;
	n1++;
	n2--;
	printf("n1 = %d, n2 = %d\n", n1, n2);
	return 0;
}

int SimpleFuncTwo(void) {
	//	���� ���� 
	int n = 10;
	n++;
	printf("SimpleFuncTwo n : %d\n", n);
	return 0;
}

int a(int n){
	static int sum = 0;
	if(n < 0) {
		return sum;
	}
	sum += n;
	//	����Լ� 
	a(n - 1);
}

int main(void) {
	//	���� ���� 
	int n = 17;
	SimpleFuncOne();
	SimpleFuncTwo();
	printf("main n : %d\n", n); 
	printf("sum = %d\n",a(6));
	return 0;
}
