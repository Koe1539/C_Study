#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int chulsu, yonghui;
	srand(time(NULL));
	
	chulsu = rand()%3;
	yonghui = rand()%3;
	
	if(chulsu == 0 && yonghui == 0) {
		printf("ö�� : ����, ���� : ����\n");
		printf("���\n");
	}
	else if(chulsu == 0 && yonghui == 1) {
		printf("ö�� : ����, ���� : ����\n");
		printf("���� �¸�\n");
	}
	else if(chulsu == 0 && yonghui == 2) {
		printf("ö�� : ����, ���� : ��\n");
		printf("ö�� �¸�\n");
	}
	else if(chulsu == 1 && yonghui == 0) {
		printf("ö�� : ����, ���� : ����\n");
		printf("ö�� �¸�\n");
	}
	else if(chulsu == 1 && yonghui == 1) {
		printf("ö�� : ����, ���� : ����\n");
		printf("���\n");
	}
	else if(chulsu == 1 && yonghui == 2) {
		printf("ö�� : ����, ���� : ��\n");
		printf("���� �¸�\n");
	}
	else if(chulsu == 2 && yonghui == 0) {
		printf("ö�� : ��, ���� : ����\n");
		printf("���� �¸�\n");
	}
	else if(chulsu == 2 && yonghui == 1) {
		printf("ö�� : ��, ���� : ����\n");
		printf("ö�� �¸�\n");
	}
	else if(chulsu == 2 && yonghui == 2) {
		printf("ö�� : ��, ���� : ��\n");
		printf("���\n");
	}
	
	return 0;
}
