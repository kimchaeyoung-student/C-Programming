#include <stdio.h>
main(){
	int num1, num2;
	printf("num1 입력 : ");
	scanf("%d", &num1);
	printf("num2 입력 : ");
	scanf("%d", &num2);
	
	printf("결 과 : %d \n", num1+num2);
	printf("결 과 : %d \n", num1-num2);
	printf("결 과 : %d \n", num1*num2);
	printf("결 과 : %.2f \n", num1/(float)num2);
	// .2 는 소수점이 두자리까지만 출력되게 하는 것  
} 

