#include <stdio.h>
int D[100001];
int ans[100001];
int main()
{
	int N, MAX;
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		scanf("%d", &D[i]);
	}
	ans[0] = D[0];
	MAX = D[0];
	for(int i = 1;i < N; i++){
		if(ans[i - 1] > 0) ans[i] = ans[i-1];
		ans[i] += D[i];
		
		if(ans[i] > MAX) MAX = ans[i];
	}
	
	printf("%d", MAX);
	return 0;
}