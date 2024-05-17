#include <stdio.h>
int D1[101][101];
int D2[101][101];
int ans[101][101];
 int main()
 {
 	int N, M;
 	scanf("%d %d", &N, &M);
	for(int i = 0; i< N; i++){
		for(int j = 0 ; j < M; j++){
			scanf("%d", &D1[i][j]);
		}
	} 	
 	for(int i = 0; i< N; i++){
		for(int j = 0 ; j < M; j++){
			scanf("%d", &D2[i][j]);
		}
	}
	for(int i = 0; i< N; i++){
		for(int j = 0 ; j < M; j++){
			printf("%d ", D1[i][j] + D2[i][j]);
		}
		printf("\n");
	}
	
 	return 0;
 }	