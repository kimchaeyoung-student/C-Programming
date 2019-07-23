#include <stdio.h>
main(){
	//1~10 전체합
	int i=1, sum=0;
	while(i<=10){
		sum=sum+i;
		i=i+1;
	}
	printf("1~10의 전체합: %d \n", sum);
	
	//1~10 홀수합
	i=1, sum=0;
	while(i<=10){
		sum=sum+i;
		i=i+2;
	}
	printf("1~10의 홀수합: %d \n", sum);
	
	//1~10 짝수합
	i=0, sum=0;
	while(i<=10){
		sum=sum+i;
		i=i+2;
	}
	printf("1~10의 짝수합: %d \n", sum);
}

