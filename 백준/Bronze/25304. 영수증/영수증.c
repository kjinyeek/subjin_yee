#include <stdio.h>
long long X, N;
long long a, b;
long long cnt;
int main()
{
	
	scanf("%lld %lld", &X, &N);
	
	for(int i = 1; i<= N;i++){
		scanf("%lld %lld", &a, &b);
		cnt += a * b;
	}
	if(X == cnt){
		printf("Yes");
	}
	else{
		printf("No");
	}
	
	
	return 0;
}