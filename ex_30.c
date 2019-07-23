#include <stdio.h>
main(){
	int a, i, max=0;
	printf("5개의 수를 입력해주세요 : ", a);
	for(i=1;i<=5;i++){
		scanf("%d", &a);
		if(a>max)
			max=a;
	}
	
	printf("가장 큰 값은 %d입니다. \n", max);
}

