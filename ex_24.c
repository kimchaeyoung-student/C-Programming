#include <stdio.h>
main(){
	int a=10, b=20, result;
	char ch;
	
	while(1){
	//a:
	printf("������ �Է�(+,-,*,/,%%) : ");
	fflush(stdin);
	ch = getchar();
	//scanf("%c", &ch);
	
	if(ch=='+')
		result = a+b;
	else if(ch=='-')
		result = a-b;
	else if(ch=='*')
		result = a*b;
	else if(ch=='/')
		result = a/b;
	else if(ch=='%')
		result = a%b;
	else{
		printf("������ �Է� ����\n");
		exit(1); //����������
		}
	printf("��� : %d \n", result);
	//goto a;
	}
}
//���!! 
