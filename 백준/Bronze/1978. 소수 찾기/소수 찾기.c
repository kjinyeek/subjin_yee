#include<stdio.h>
int D[1001];
int main()
{
	int N, M, cnt = 0;
	D[1] = 1;
	for(int i = 2; i <= 1000; i++){
		if(D[i] == 0){
			for(int j = i * 2; j <= 1000; j+=i){
				D[j] = 1;
			}
		}
	}
	
	scanf("%d", &N);
	while(N--){
		scanf("%d", &M);
		if(D[M] == 0){
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}