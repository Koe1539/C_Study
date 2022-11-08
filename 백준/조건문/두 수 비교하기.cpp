#include <stdio.h>

int main()
{
	int A, B;

	scanf("%d %d", &A, &B);

	if (-10000 <= A && B <= 10000)
	{
		if (A > B)
		{
			printf(">\n");
		}
			
		else if (A < B)
		{
			printf("<\n");
		}
		else
		{
			printf("==\n");
		}
	}

	return 0;
}
