#include <stdio.h>

//	�Լ� ���� 
int Add(int num1, int num2);

//	�Լ� ȣ�� 
int main(void) {
	int a = 4, b = 5;
	
	printf("%d\n", Add(a, b));
	
	return 0;
}

//	�Լ� ���� 
int Add(int num1, int num2) {
	int result = num1+num2;
	return result;
}
