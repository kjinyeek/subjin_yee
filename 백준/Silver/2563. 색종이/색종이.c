#include <stdio.h>
int D[101][101];
int cnt;
int main(){
	int T, N, M;
	scanf("%d", &T);
	while(T--){
		scanf("%d %d", &N, &M);
		for(int i = N; i < N + 10;i++){
			for(int j = M; j < M + 10; j++){
				if( i <= 100 && j <= 100){
					D[i][j] = 1;
				}
			}
		}
	}
	for(int i = 1; i <= 100;i++){
		for(int j = 1; j <=100; j++){
			if(D[i][j] == 1){
				cnt++;
			}
		}
	}
	printf("%d", cnt);
	
	return 0;
}
