#include <stdio.h>

int main(void) {
	int age;
	int pay=1000;
	
	printf("철수의 나이 : ");
	scanf("%d", &age);
	
	if(age<=6 || age>=60) {
		printf("무료");
	}
	else {
		printf("%d",pay);
	}
	
	return 0;
}
