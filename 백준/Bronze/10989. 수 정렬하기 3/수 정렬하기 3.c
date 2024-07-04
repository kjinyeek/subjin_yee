#include <stdio.h>
int D[10001];
int main(){
	int N, k;
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		scanf("%d", &k);
		D[k]++;
	}
	
	for(int i = 1; i <= 10000; i++){
		while(D[i] != 0){
			printf("%d\n", i);
			D[i]--;
		}
	}
}