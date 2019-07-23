#include <stdio.h>
main(){
	int i, j;
	
	for(i=1;i<=9;i++){
		for(j=2;j<=9;j++){
			printf("%d*%d=%d \t", j, i, j*i); //t는 가로로 띄어쓰기
		}
		printf("\n");
	}
}
//구구단의 순서가 세로순 

