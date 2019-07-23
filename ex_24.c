#include <stdio.h>
main(){
	int a=10, b=20, result;
	char ch;
	
	while(1){
	//a:
	printf("연산자 입력(+,-,*,/,%%) : ");
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
		printf("연산자 입력 오류\n");
		exit(1); //빠져나오기
		}
	printf("결과 : %d \n", result);
	//goto a;
	}
}
//경고!! 
