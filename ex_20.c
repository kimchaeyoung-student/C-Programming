#include <stdio.h>
main(){
	int a = 10, b = 30, answer;
	
	while(a+b!=answer){
		printf("%d + %d = ",a,b);
		scanf("%d", &answer);
	
		if (a+b==answer){
			printf("정답\n");
		}
		else{
			printf("오답\n");
		}
	}
}

