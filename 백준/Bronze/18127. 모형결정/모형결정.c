#include <stdio.h>
int main()
{
	long long A, B, cnt = 0, k;
	scanf("%lld %lld", &A, &B);
	
	k = 1;
	for(int i = 0; i <= B; i++){
		cnt+=k;
		k+=A-2;
	}
	
	printf("%lld", cnt);
	return 0;
}