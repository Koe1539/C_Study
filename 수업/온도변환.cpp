/*
���� (C) �µ��� ȭ��(F) �µ��� ��ȯ�ϴ� �Լ� �ۼ�
F = 1.8 x C + 32

���� �µ��� �Է¹����� ȭ�� �µ��� ����ϴ� ���α׷�
<�Է�>
20

<���>
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
