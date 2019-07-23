#include <stdio.h>
main(){
	
	int i=1, sum=0, sum_0=0, sum_1=0;
	while(i<=10){
		if(i%2==0){
			sum_0=sum_0+i;
		}
		else{
			sum_1=sum_1+i;
		}
		i=i+1;
	}
	sum=sum_0+sum_1;
	printf("1~10의 전체합: %d \n", sum);
	printf("1~10의 홀수합: %d \n", sum_1);
	printf("1~10의 짝수합: %d \n", sum_0);
}

