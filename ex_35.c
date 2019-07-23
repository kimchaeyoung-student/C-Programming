#include <stdio.h>
main(){
	int sum=0, i;
	for(i=0;i<100;i++){
		if(i%2==0)
			continue;
		else if(sum>100)
			break;
		sum += i;
	}
	printf("i : %d,\t summary : %d\n", i, sum);
}

