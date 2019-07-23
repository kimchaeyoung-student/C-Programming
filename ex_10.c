#include <stdio.h>
int main(){
	int num;
	printf("세자리 정수 입력 : ");
	scanf("%d", &num);
	
	printf("100의 자리 : %d \n", num / 100);
	printf("10의 자리 : %d \n",(num % 100)/ 10);
	printf("1의 자리 : %d \n",(num % 100)% 10);
}

