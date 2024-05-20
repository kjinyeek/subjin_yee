#include <stdio.h>
long long N, M = 1, cnt;
int main()
{
	scanf("%lld", &N);
		N -= 1;
		M = 6;
		cnt = 1;
		while(N){
			if(N >= M){
				N-=M;
				cnt++;
			}
			else{
				cnt++;
				N = 0;
			}
			M+=6;
		}
		printf("%lld\n", cnt);
	
	
	return 0;
}