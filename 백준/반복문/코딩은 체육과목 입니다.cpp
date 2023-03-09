#include <stdio.h>

int main() {
  int N;

  scanf("%d",&N);

  if(4<=N && N<=1000) {
    for(int i = 1; i <= N / 4; i++) {
      printf("long ");
    }
    printf("int");
  }
}