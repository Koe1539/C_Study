#include <stdio.h>

int miin(void) {
	for(int i=0; i<5; i++) {
		for(int j=0; j<=i; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
} 
