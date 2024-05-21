#include<stdio.h>
int main()
{
	int N, M, cnt;
	int D[100002];
	
	scanf("%d", &N);
	while(N != -1){
		for(int i = 1; i < N; i++){
			D[i] = 0;
		}
		cnt = 1;
		M = N / 2;
		if(N % 2 == 1){
			M++;
		}
		for(int i = 2; i <= M; i++){
			if(N % i == 0){
				if(D[i] == 0){
					D[i] = 1;
					D[N/i] = 1;
					cnt+=i;
					if(N/i != i){
						cnt+=N/i;
					}
				}
				else{
					break;
				}
			}
		}
		if(cnt == N){
			printf("%d = 1", N);
			for(int i = 1; i < N; i++){
				if(D[i] == 1){
					printf(" + %d", i);
				}
			}
		}
		else{
			printf("%d is NOT perfect.", N);
		}
		
		printf("\n");
		scanf("%d", &N);
	}
	
	return 0;
}