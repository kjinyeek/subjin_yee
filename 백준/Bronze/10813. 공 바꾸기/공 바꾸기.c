#include <stdio.h>
int D[102];
int main()
{
	int N, M, k;
	int a, b;
	scanf("%d %d", &N, &M);
	for(int i =1 ;i <= N; i++){
		D[i] = i;
	}
	while(M--){
		scanf("%d %d", &a, &b);
		k = D[a];
		D[a] = D[b];
		D[b] = k;
	}
	for(int i =1 ;i <= N; i++){
		printf("%d ",D[i]);
	}
	
	
	
	return 0;
}