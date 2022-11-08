#include <stdio.h>

int main(void){
	int k, q, l, b, kn, p;
	
	scanf("%d %d %d %d %d %d", &k, &q, &l, &b, &kn, &p);
	
	k = 1 - k;
	q = 1 - q;
	l = 2 - l;
	b = 2 - b;
	kn = 2 - kn;
	p = 8 - p;
	
	printf("%d %d %d %d %d %d", k, q, l, b, kn, p);
	
	return 0;
}
