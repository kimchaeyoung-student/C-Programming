//하노이탑 프로그램
#include<stdio.h>
int count = 0;
int hanoi_tower(int n, char from, char tmp, char to){
	++count;
	if(n==1){
		printf("원판 1을 %c에서 %c로 옮긴다.\n", from,to);
	}
	else{
		hanoi_tower(n-1, from, tmp, tmp);
		printf("원판 %d을 %c에서 %c로 옮긴다.\n", n, from, to);
		
		hanoi_tower(n-1, tmp, from, to);
	}
	return count;
}
main(){
	int count;
	count = hanoi_tower(4,'A','B','C');
	printf("옮긴횟수 : %d회", count);
}
