#include <stdio.h>
main(){
	int num1, num2, num3, num4;
	
	num1 = 100;
	
	printf("Enter 1st number : ");
	scanf("%d", &num2);
	
	printf("Enter 2nd number : ");
	scanf("%d", &num3);
	
	num4 = num1<num2 && num1<num3;
	printf("논리곱 : %d \n", num4);
	
	num4 = num1<num2 || num1<num3;
	printf("논리합 : %d \n", num4);
	
}

