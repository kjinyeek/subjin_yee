#include <stdio.h>
long long k = 1;
int main()
{
	int N;
	scanf("%d", &N);
	for(int i = 1; i <= N; i++){
		k *= i;
	}
	printf("%lld", k);
	
	
	return 0;
}