#include <stdio.h>
main(){
	//1~10 ��ü��
	int i=1, sum=0;
	while(i<=10){
		sum=sum+i;
		i=i+1;
	}
	printf("1~10�� ��ü��: %d \n", sum);
	
	//1~10 Ȧ����
	i=1, sum=0;
	while(i<=10){
		sum=sum+i;
		i=i+2;
	}
	printf("1~10�� Ȧ����: %d \n", sum);
	
	//1~10 ¦����
	i=0, sum=0;
	while(i<=10){
		sum=sum+i;
		i=i+2;
	}
	printf("1~10�� ¦����: %d \n", sum);
}

