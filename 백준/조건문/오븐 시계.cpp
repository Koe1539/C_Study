#include <stdio.h>
int main()
{
	int H, M, T;

	scanf("%d %d", &H, &M);
	scanf("%d", &T);

	H += T / 60;
	M += T % 60;

	if (M >= 60)
	{
		H++;
		M %= 60;
	}

	if (H >= 24)
		H %= 24;

	printf("%d %d\n", H, M);

	return 0;
}
