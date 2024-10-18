#include <stdio.h>
int D[51][51];
int N, M, K, T;
void find(int x, int y)
{
	D[x][y] = 0;
	if(D[x+1][y] == 1 && x + 1 < N) find(x+1,y);
	if(D[x-1][y] == 1 && x - 1 >= 0) find(x-1,y);
	if(D[x][y+1] == 1 && y + 1 < M) find(x,y+1);
	if(D[x][y-1] == 1 && y - 1 >= 0) find(x,y-1);
}
int main()
{
	int X, Y;
	int cnt;
	scanf("%d", &T);
	while(T--){
		cnt = 0;
		scanf("%d %d %d", &N, &M, &K);
		for(int i = 0; i < K; i++){
			scanf("%d %d", &X, &Y);
			D[X][Y] = 1;
		}
		for(int i = 0; i < N; i++){
			for(int j = 0; j < M; j++){
				if(D[i][j] == 1) {
					find(i, j);
					cnt++;
				}
			}
		}
		printf("%d\n", cnt);
	}
	
	
	
	return 0;
}