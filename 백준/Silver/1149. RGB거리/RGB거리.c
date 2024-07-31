#include <stdio.h>
int D[1001][3];//R G B
int ans[1001][3];//R G B
int main()
{
	int N;
	scanf("%d", &N);
	scanf("%d %d %d", &D[0][0], &D[0][1], &D[0][2]);
	ans[0][0] = D[0][0];
	ans[0][1] = D[0][1];
	ans[0][2] = D[0][2];
	for(int i = 1; i< N; i++){
		scanf("%d %d %d", &D[i][0], &D[i][1], &D[i][2]);
		ans[i][0] = ans[i-1][1] < ans[i-1][2] ? ans[i-1][1] + D[i][0] : ans[i-1][2] + D[i][0];
		ans[i][1] = ans[i-1][0] < ans[i-1][2] ? ans[i-1][0] + D[i][1] : ans[i-1][2] + D[i][1];
		ans[i][2] = ans[i-1][1] < ans[i-1][0] ? ans[i-1][1] + D[i][2] : ans[i-1][0] + D[i][2];
	}
	
	printf("%d", ans[N-1][0] < (ans[N-1][1] < ans[N-1][2] ? ans[N-1][1] : ans[N-1][2]) ? ans[N-1][0] : (ans[N-1][1] < ans[N-1][2] ? ans[N-1][1] : ans[N-1][2]));
	
	return 0;
} 