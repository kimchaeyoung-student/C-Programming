#include <stdio.h>
main(){
	int a=10, b=20, result;
	char ch;
	
	printf("������ �Է�(+,-,*,/,%%) : ");
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
		default : printf("������ �Է� ���� \n");
	}
	
}
//����!!! 
