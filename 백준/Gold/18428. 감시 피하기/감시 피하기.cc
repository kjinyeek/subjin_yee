#include <stdio.h>
int D[10][10];//0은 없음 1은 학생 2는 선생 3은 감시망 4는장애물
int N; 
int find(){
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			if(D[i][j] == 2){
				for(int k = i+1; k < N; k++) {
					if(D[k][j] == 4) break;
					if(D[k][j] == 1) return 0;
				}
				for(int k = i-1; k >= 0; k--) {
					if(D[k][j] == 4) break;
					if(D[k][j] == 1) return 0;
				}
				for(int k = j+1; k < N; k++) {
					if(D[i][k] == 4) break;
					if(D[i][k] == 1) return 0;
				}
				for(int k = j-1; k >= 0; k--) {
					if(D[i][k] == 4) break;
					if(D[i][k] == 1) return 0;
				}
			}
		}
	}
	return 1;
}
int main()
{
	int ans;
	char c;
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			scanf(" %c", &c);
			if(c == 'S') D[i][j] = 1;
			else if(c == 'T')D[i][j] = 2;
		}
	}
//	printf("\n");
	
	for(int i = 0; i < N * N; i++){
		if(D[i/N][i%N] == 0){
			D[i/N][i%N] = 4;
			for(int j = i + 1; j < N * N; j++){
				if(D[j/N][j%N] == 0){
					D[j/N][j%N] = 4;
					for(int k = j + 1; k < N * N; k++){
						if(D[k/N][k%N] == 0){
							D[k/N][k%N] = 4;
//							
//							for(int i = 0; i < N; i++){
//								for(int j = 0; j < N; j++){
//									printf("%d ", D[i][j]);
//								}
//								printf("\n");
//							}
//							for(int i = 0; i < N; i++){
//								for(int j = 0; j < N; j++){
//									if(D[i][j] == 0)printf("X ");
//									else if(D[i][j] == 1)printf("S ");
//									else if(D[i][j] == 2)printf("T ");
//									else printf("O ");
//								}
//								printf("\n");
//							}
//							printf("\n");
//							
							ans = find();
							if(ans == 1){
								printf("YES");
								return 0;
							}
							D[k/N][k%N] = 0;
						}
					}
					D[j/N][j%N] = 0;
				}
			}
			D[i/N][i%N] = 0;
		}
	}
	printf("NO");
	return 0;
}