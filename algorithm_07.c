//팩토리얼 
#include<stdio.h>
int factorial(int n, int a){
		if(n==0){
			return a;
		}
		else{
			return factorial(n-1, n*a);
		}
	}

main(){
	int result, n, a=1;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &n);
	result = factorial(n,a);
	printf("%d\n", result);
}
