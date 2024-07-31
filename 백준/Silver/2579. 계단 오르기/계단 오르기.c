#include <stdio.h>
int D[10001];
int ans[10001][2];//p[][0] 연속 한칸 밟음,  p[][1]두칸째;
int main(void)
{
	int N;
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++){
		scanf("%d", &D[i]);
	}
	
	for(int i = 0; i < N; i++){
		ans[i][0] = D[i];
		ans[i][1] = D[i];
		
		if(i-2>=0) ans[i][0] += ans[i-2][0] > ans[i-2][1] ? ans[i-2][0] : ans[i-2][1];
		if(i-1>=0) ans[i][1] += ans[i-1][0];
//		printf("--%d %d--\n", ans[i][0], ans[i][1]);
	}
	
	printf("%d", ans[N-1][0] > ans[N-1][1] ? ans[N-1][0] : ans[N-1][1]);
	return 0;
}