#include <stdio.h>
main(){
	int i=1;
	int sum=0;
	
	while(i<=10)
	sum += i++;
	//sum=sum+i;
	//i=i+1;
	
	printf("1���� 10������ ���� %d �Դϴ�.\n", sum);
}

