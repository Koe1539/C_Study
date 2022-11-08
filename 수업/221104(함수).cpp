#include <stdio.h>

//	함수 선언 
int Add(int num1, int num2);

//	함수 호출 
int main(void) {
	int a = 4, b = 5;
	
	printf("%d\n", Add(a, b));
	
	return 0;
}

//	함수 정의 
int Add(int num1, int num2) {
	int result = num1+num2;
	return result;
}
