#include <stdio.h>
main(){
	int i=1;
	int sum=0;
	
	while(i<=10)
	sum += i++;
	//sum=sum+i;
	//i=i+1;
	
	printf("1부터 10까지의 합은 %d 입니다.\n", sum);
}

