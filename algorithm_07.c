//���丮�� 
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
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &n);
	result = factorial(n,a);
	printf("%d\n", result);
}
