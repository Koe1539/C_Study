#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int chulsu, yonghui;
	srand(time(NULL));
	
	chulsu = rand()%3;
	yonghui = rand()%3;
	
	if(chulsu == 0 && yonghui == 0) {
		printf("Ã¶¼ö : °¡À§, ¿µÈñ : °¡À§\n");
		printf("ºñ±è\n");
	}
	else if(chulsu == 0 && yonghui == 1) {
		printf("Ã¶¼ö : °¡À§, ¿µÈñ : ¹ÙÀ§\n");
		printf("¿µÈñ ½Â¸®\n");
	}
	else if(chulsu == 0 && yonghui == 2) {
		printf("Ã¶¼ö : °¡À§, ¿µÈñ : º¸\n");
		printf("Ã¶¼ö ½Â¸®\n");
	}
	else if(chulsu == 1 && yonghui == 0) {
		printf("Ã¶¼ö : ¹ÙÀ§, ¿µÈñ : °¡À§\n");
		printf("Ã¶¼ö ½Â¸®\n");
	}
	else if(chulsu == 1 && yonghui == 1) {
		printf("Ã¶¼ö : ¹ÙÀ§, ¿µÈñ : ¹ÙÀ§\n");
		printf("ºñ±è\n");
	}
	else if(chulsu == 1 && yonghui == 2) {
		printf("Ã¶¼ö : ¹ÙÀ§, ¿µÈñ : º¸\n");
		printf("¿µÈñ ½Â¸®\n");
	}
	else if(chulsu == 2 && yonghui == 0) {
		printf("Ã¶¼ö : º¸, ¿µÈñ : °¡À§\n");
		printf("¿µÈñ ½Â¸®\n");
	}
	else if(chulsu == 2 && yonghui == 1) {
		printf("Ã¶¼ö : º¸, ¿µÈñ : ¹ÙÀ§\n");
		printf("Ã¶¼ö ½Â¸®\n");
	}
	else if(chulsu == 2 && yonghui == 2) {
		printf("Ã¶¼ö : º¸, ¿µÈñ : º¸\n");
		printf("ºñ±è\n");
	}
	
	return 0;
}
