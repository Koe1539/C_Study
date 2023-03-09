#include <stdio.h>

int main()
{
	int score;
	scanf("%d", &score);

	if (0 <= score && score <= 100)
	{
		if (score >= 90)
		{
			printf("A\n");
		}
		else if (90 > score && score >= 80)
		{
			printf("B\n");
		}
		else if (80 > score && score >= 70)
		{
			printf("C\n");
		}
		else if (70 > score && score >= 60)
		{
			printf("D\n");
		}
		else
		{
			printf("F\n");
		}
	}
	

	return 0;
}
