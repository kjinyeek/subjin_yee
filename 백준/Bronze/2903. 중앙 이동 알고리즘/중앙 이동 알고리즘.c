#include <stdio.h>
int main()
{
	int N, M = 3, K = 1;
	scanf("%d", &N);
	for(int i = 1; i < N; i++){
		K *= 2;
		M += K;
	}
	printf("%d", (M) * (M));
	
	
	return 0;
}