/*
�ִ� ���̰� 5�� ���ڿ��� ��� �Է¹޴ٰ� 'q'�� �Է��ϸ� ����Ǵ� ���α׷�

<�Է�>
hello
hi
and
quit

<���>
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
