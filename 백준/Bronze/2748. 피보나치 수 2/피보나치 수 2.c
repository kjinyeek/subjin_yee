#include <stdio.h> 
long long D[91];
int main()
{
	int N;
	scanf("%d", &N);
	D[1] = 1;
	for(int i = 2; i <= N; i++) D[i] = D[i-1] + D[i-2];
	printf("%lld", D[N]);
	return 0;
}