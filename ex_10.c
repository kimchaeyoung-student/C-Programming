#include <stdio.h>
int main(){
	int num;
	printf("���ڸ� ���� �Է� : ");
	scanf("%d", &num);
	
	printf("100�� �ڸ� : %d \n", num / 100);
	printf("10�� �ڸ� : %d \n",(num % 100)/ 10);
	printf("1�� �ڸ� : %d \n",(num % 100)% 10);
}

