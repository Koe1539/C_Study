#include <stdio.h>

int main()
{
	int T, A=0, B=0, SUM;
	scanf("%d", &T);

	for (int i = 1; i <= T; i++)
	{
		scanf("%d%d", &A,&B);
		SUM = A + B;
		printf("Case #%d: %d\n", i, SUM);
	}

	return 0;
}
