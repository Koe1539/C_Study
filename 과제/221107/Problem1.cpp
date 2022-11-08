#include <stdio.h>

int Fibo(int num) {
	if(num < 1) {
		return 0;
	}
	else if((num == 1) || (num == 2)) {
		return 1;
	}
	
	return Fibo(num - 1) + Fibo(num - 2);
}

int main(void) {
	int num;
	
	scanf("%d", &num);
	for(int i = 1; i < num + 1; i++) {
		printf("%d ", Fibo(i));
	}
	
	return 0;
}
