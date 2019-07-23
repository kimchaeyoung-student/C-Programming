#include <stdio.h>
main(){
	int i, j;
	
	for(i=2;i<=9;i++){
		for(j=1;j<=9;j++){
			printf("%d*%d=%d \t", i, j, i*j); //t는 가로로 띄어쓰기
		}
		printf("\n");
	}
}
//구구단의 순서가 가로순 

