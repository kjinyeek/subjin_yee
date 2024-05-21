#include<stdio.h>
int D[10001];
int L = -1;
int main()
{
	int N, M, cnt = 0;
	D[1] = 1;
	for(int i = 2; i <= 10000; i++){
		if(D[i] == 0){
			for(int j = i * 2; j <= 10000; j+=i){
				D[j] = 1;
			}
		}
	}
	
	scanf("%d %d", &N, &M);
	for(int i = N; i<=M; i++){
		if(D[i] == 0){
			if(cnt == 0){
				L = i;
			}
			cnt+=i;
		}
	}
	if(L == -1){
		printf("-1");
		return 0;
	}
	printf("%d\n%d", cnt, L);
	return 0;
}