#include <stdio.h>

int main(void){
	int a, even = 0, odd = 0;
	
	for(int i=1; i<=10; i++){
		scanf("%d",&a);
		if(a%2 == 0){
			even++;
		}
		else if(a%2 == 1){
			odd++;
		}
	}
	
	printf("even = %d, odd = %d\n", even, odd);
	
	return 0;
}
