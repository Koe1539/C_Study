/*
섭씨 (C) 온도를 화씨(F) 온도로 변환하는 함수 작성
F = 1.8 x C + 32

섭씨 온도를 입력받으면 화씨 온도를 출력하는 프로그램
<입력>
20

<출력>
68
*/

#include <stdio.h>
float temp(int c);

int main(void) {
	int c;
	
	scanf("%d", &c);
	
	float f = temp(c);
	
	printf("%.1f\n",f);
	return 0;
}

float temp(int c) {
	int f = 1.8 * c +32;
	return f;
}
