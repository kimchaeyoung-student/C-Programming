#include <stdio.h>
main(){
	int a,b,c; //3개의 정수 입력 (그 중 제일 큰 값)
	
	printf("3개의 정수를 입력하세요 : ", a, b, c);
	fflush(stdin);
	scanf("%d %d %d", &a, &b, &c);
	
	if(a>b){
		if(a>c){
			printf("가장 큰 수는 %d입니다. \n", a);
		}
		else{
			printf("가장 큰 수는 %d입니다. \n", c);
		}
	}
	else{
		if(b>c){
			printf("가장 큰 수는 %d입니다. \n", b);
		}
		else{
		printf("가장 큰 수는 %d입니다. \n", c);
		}
	}
}

