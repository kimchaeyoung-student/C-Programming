#include <stdio.h>
main(){
	int i, n;
	printf("구구단 몇단? : ", n);
	scanf("%d", &n);
	
	for(i=1;i<=9;i++){
		printf("%d * %d = %d \n", n, i, i*n);
	}
}

