#include <stdio.h>
main(){
	int grade;
	
	printf("점수를 입력하세요 : ");
	fflush(stdin);
	scanf("%d", &grade);
	
	if(grade>=95){
		printf("A+");
	}
	else if(grade>=90){
		printf("A");
	}
	else if(grade>=85){
		printf("B+");
	}
	else if(grade>=80){
		printf("B");
	}
	else if(grade>=75){
		printf("C+");
	}
	else if(grade>=70){
		printf("C");
	}
	else if(grade>=65){
		printf("D+");
	}
	else if(grade>=60){
		printf("D");
	}
	else
		printf("F");
}

