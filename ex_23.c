#include <stdio.h>
main(){
	char ch;
	
	do{
		fflush(stdin);
		printf("덧셈진행(y/n) : ");
		//scanf("%c", &ch);
		ch=getchar(); 
	
		if(ch=='y')
			quiz();
		else{
			printf("수고하셨습니다. \n");
			break;
		}
	} while(1);
}

quiz(){
	int a, b, answer, t=1;
	char ch;
	printf("두 수를 입력해주세요 : ");
	scanf("%d %d", &a, &b);
	
	re_answer:
	printf("두 수의 합 : ");
	scanf("%d", &answer);
	
	if(answer==(a+b)){
		printf("정답! \n");
	}
	else{
		printf("오답! \n");
		t=t+1; //오답 횟수 구하기, t 초기화 필수
		goto re_answer;
	}
	printf("정답률 : %.0f%% \n", 1/(float)t*100); //%d==%.0f
}

