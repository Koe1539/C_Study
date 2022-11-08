#include <stdio.h>


int main(void)
{
	for (int i = 0; i < 3; i++) 
	{
		for (int j=i; j < 3; j++) {
			printf(" ");
		}
		for (int k = 0; k <=(i*2); k++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 3-1; i > 0; i--)
	{
		for (int j = i; j <= 3; j++) {
			printf(" ");
		}

		for (int k = 0; k <= ((i-1) * 2); k++) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
}
