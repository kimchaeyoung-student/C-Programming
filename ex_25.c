#include <stdio.h>
main(){
	int a=10, b=20, result;
	char ch;
	
	printf("연산자 입력(+,-,*,/,%%) : ");
	fflush(stdin);
	ch = getchar();
	
	switch(ch){
		case '+' : result = a+b;
		break;
		case '-' : result = a-b;
		break;
		case '*' : result = a*b;
		break;
		case '/' : result = a/b;
		break;
		case '%' : result = a%b;
		break;
		default : printf("연산자 입력 오류 \n");
	}
	
}
//오류!!! 
