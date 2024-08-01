#include <stdio.h>
int D[10001];
int ans[10001][3];//지금 선택 X, 지금 선택 1개쨰, 지금 선택 2개째 
int big(int a, int b)
{
	if(a > b) return a;
	return b;
}
int main()
{
	int N;
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++){
		scanf("%d", &D[i]);
	}
	
	ans[0][1] = D[0];
	ans[0][2] = D[0];
	for(int i = 1; i < N; i++){
		ans[i][0] = big(ans[i-1][0], big(ans[i-1][1], ans[i-1][2]));
		ans[i][1] = ans[i-1][0] + D[i];
		ans[i][2] = ans[i-1][1] + D[i];
	}
	printf("%d", big(ans[N-1][0], big(ans[N-1][1], ans[N-1][2])));
	return 0;
}