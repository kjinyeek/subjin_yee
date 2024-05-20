#include <stdio.h>
int main()
{
	int N, cnt = 1;
	scanf("%d", &N);
	for(int i = 1; N; i++){
		if(N > i){
			N -= i;
			cnt++;
		}
		else{
			if(cnt % 2 == 0){
				printf("%d/%d",N,cnt - N + 1);
			}
			else{
				printf("%d/%d",cnt - N + 1,N);
			}
			
			N = 0;
		}
	}
	return 0;
}