#include <stdio.h>

int main()
{
  int N, v, arr[100], i, j, cnt = 0;

  scanf("%d", &N);

  for (i = 0; i < N; i++)
  {
    scanf("%d", &arr[i]);
  }

  scanf("%d", &v);

  for (j = 0; j < N; j++)
  {
    if (arr[j] == v)
    {
      cnt++;
    }
  }

  printf("%d", cnt);
}