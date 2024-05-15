#include <stdio.h>
int D[101];
int visit[101];
int main()
{
	int N, M;
	int a, b;
	scanf("%d %d", &N, &M);
	for(int i = 1; i <= N; i++){
		D[i]  =i;
	}
	while(M--){
		scanf("%d %d", &a, &b);
		for(int i = 1; i <=b-a + 1; i++){
			visit[i] = D[a + i - 1];
		}
		for(int i = 1; i <=b-a + 1; i++){
			D[a + i - 1] = visit[b-a - i + 2];
		}
	}
	for(int i = 1; i <= N; i++){
		printf("%d ", D[i]);
	}
	
	return 0;
}