//���հ��� ���ϴ� ���α׷��� (���װ��) 
#include<stdio.h>
main(){
	int n=5, k=3;
	int dp[100][100];
	int i,j;
	
	//scanf("%d %d", &n, &k);
	for(i=1;i<=n;i++){
		dp[i][0] = dp[i][i] = 1;
		for(j=1;j<i;j++){
			dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
		}
	}
	printf("%d\n", dp[n][k]);	//5C3 = 10;(?)
}
