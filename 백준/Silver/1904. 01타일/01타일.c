#include <stdio.h>
int D[1000001];
void fibo(int N)
{
	for(int i = 3; i <= N; i++){
		D[i] = (D[i-1] + D[i-2])%15746;
	}
}
int main()
{
	int N;
	scanf("%d", &N);
	D[1] = 1;
	D[2] = 2;
	
	fibo(N);
	printf("%d", D[N]);
	return 0;
}