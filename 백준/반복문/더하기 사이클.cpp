#include <stdio.h>

int main()
{
    int A, B, C, D = -1, result, N, i = 0;

    scanf("%d", &N);
    result = N;

    while (D != result) {
        A = N / 10;
        B = N % 10;
        C = (A + B) % 10;
        D = (B * 10) + C;
        N = D;
        i++;
    }
    printf("%d", i);
	return 0;
}
