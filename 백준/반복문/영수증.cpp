#include <stdio.h>

int main(void) {
	int X,N,a,b,sum = 0;
	
	scanf("%d %d", &X, &N);
	for(int i = 1; i<=N; i++) {
		scanf("%d %d", &a, &b);
		sum = sum + (a * b);
	}
	if(sum==X) {
		printf("Yes");
	}
	else {
		printf("No");
	}
	
	return 0;
}
