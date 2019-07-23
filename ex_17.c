#include <stdio.h>
main(){
	int a = 10, b = 30, answer;
	printf("%d + %d = ",a,b);
	scanf("%d", &answer);
	
	if (a+b==answer){
		printf("정답");
	}
	else{
		printf("오답");
	}
}

