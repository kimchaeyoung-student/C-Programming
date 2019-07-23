#include <stdio.h>
main(){
	int a = 123, b = 34, answer;
	answer = a + b;
	
	printf("결과값을 입력하시오 : ");
	scanf("%d", &answer);
	
	(answer == 157)? printf("정답!!!") : printf("오답!!!");
	
}

