#include <stdio.h>
main(){
	int a,b,c, max=0;
	
	printf("3개의 정수를 입력하세요 : ", a, b, c);
	fflush(stdin);
	scanf("%d %d %d", &a, &b, &c);
	
	if(a>b){ //AND연산 (a>b && a>c)
		max = a;
		if(max<c)
			max=c;
	}
	else{
		max = b;
		if(max<c)
			max=c;
	}
	printf("가장 큰 수는 %d \n", max);
}

