/*
int �� ���� num1, num2�� ����� ���ÿ� 10, 20���� �ʱ�ȭ
int �� ������ ���� ptr1, ptr2�� �����Ͽ� num1�� num2�� ����Ű�� �ϱ�
ptr1�� ptr2�� �̿��ؼ� num1�� ���� 10 ������Ű��, num2�� ���� 10 ����
ptr1�� ptr2�� �⸮Ű�� �ִ� ����� ���� �ٲٱ�
ptr1�� ptr2�� ����Ű�� �ִ� ������ ���� ���
(����, ptr1�� ptr2�� �̿��ؼ�^^) 
*/

#include <stdio.h>

int main(void) {
	int num1 = 10, num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	
	(*ptr1) += 10;
	(*ptr2) -= 10;
	
	ptr1 = &num2;
	ptr2 = &num1;	
	
	printf("num1 = %d, num2 = %d", *ptr2, *ptr1);
	
	return 0;
} 
