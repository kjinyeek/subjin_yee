#include <stdio.h>
int main()
{
	long long N, M = 0;
	scanf("%lld", &N);
	for(long long i = 1; i < N; i++){
		M+=i;
	}
	printf("%lld\n2",M);
	
	return 0;
}
