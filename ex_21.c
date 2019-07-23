#include <stdio.h>
main(){
	int a, b, answer, t=1, ch;
	
	re_quiz:
	printf("두 수를 입력해주세요 : ");
	scanf("%d %d", &a, &b);
	//printf("%d+%d=%d \n", a,b,a+b);
	
	re_answer:
	printf("두 수의 합 : ");
	scanf("%d", &answer);
	if(answer==(a+b)){
		printf("정답! \n");
		printf("계속 진행하시겠습니까?(y/n) : ");
		fflush(stdin); //메모리를 비워준다 
		scanf("%c", ch);
		if(ch=='y')
			goto re_quiz;
	}
	else{
		printf("오답! \n");
		t=t+1; //오답 횟수 구하기, t 초기화 필수
		goto re_answer;
	}
	printf("정답률 : %.0f%% \n", 1/(float)t*100); //%d==%.0f
}
//오류!!
