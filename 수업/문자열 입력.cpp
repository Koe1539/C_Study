/*
최대 길이가 5인 문자열을 계속 입력받다가 'q'를 입력하면 종료되는 프로그램

<입력>
hello
hi
and
quit

<출력>
hello
hi
and 
*/

#include <stdio.h>

int main(void) {
	char str[6];
	
	while(true){
		scanf("%s", str);
		
		if(str[0] == 'q' && str[1] == 'u' && str[2] == 'i' && str[3] == 't'){
			break;
		}
		
		printf("%s\n",str);
	}
	
	return 0;
}
