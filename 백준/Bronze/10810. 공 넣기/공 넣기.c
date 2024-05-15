#include <stdio.h>
int D[101];
int main()
{
	int N, M;
	int a, b, c;
	scanf("%d %d", &N, &M);
	while(M--){
		scanf("%d %d %d", &a, &b, &c);
		for(int i = a; i <= b; i++){
			D[i] = c;
		}
	}
	for(int i = 1; i <= N; i++){
		printf("%d ", D[i]);
	}
	
	return 0;
}