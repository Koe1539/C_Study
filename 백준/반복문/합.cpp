#include <stdio.h>

int main()
{
  int N;
  int SUM = 0;
  scanf("%d", &N);
  for(int i = 1; i <= N; i++)
    SUM += i;
  printf("%d",SUM);
}
