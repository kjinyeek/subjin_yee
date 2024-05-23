#include <stdio.h>
int D[11];
int main()
{
	int N, K, M, cnt = 0;
	scanf("%d %d", &N, &K);
	for(int i = 0; i < N; i++){
		scanf("%d", &M);
		D[i] = M;
	}
	
	while(K > 0){
		for(int i = 0; D[i] <= K; i++){
			if(D[i + 1] <= K && D[i + 1] != 0){
				continue;
			}
			cnt++;
			K-=D[i];
			break;
		}
	}
	printf("%d", cnt);
	
	return 0;
}