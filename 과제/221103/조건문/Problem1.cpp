#include <stdio.h>

int main(void) {
	int age;
	int pay=1000;
	
	printf("ö���� ���� : ");
	scanf("%d", &age);
	
	if(age<=6 || age>=60) {
		printf("����");
	}
	else {
		printf("%d",pay);
	}
	
	return 0;
}
