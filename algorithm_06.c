//�ϳ���ž ���α׷�
#include<stdio.h>
int count = 0;
int hanoi_tower(int n, char from, char tmp, char to){
	++count;
	if(n==1){
		printf("���� 1�� %c���� %c�� �ű��.\n", from,to);
	}
	else{
		hanoi_tower(n-1, from, tmp, tmp);
		printf("���� %d�� %c���� %c�� �ű��.\n", n, from, to);
		
		hanoi_tower(n-1, tmp, from, to);
	}
	return count;
}
main(){
	int count;
	count = hanoi_tower(4,'A','B','C');
	printf("�ű�Ƚ�� : %dȸ", count);
}
