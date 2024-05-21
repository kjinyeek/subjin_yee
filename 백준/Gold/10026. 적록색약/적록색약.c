#include <stdio.h>
int D[101][101];
int flag_norm[101][101];
int flag[101][101];
void DFS_norm(int X, int Y, int now)
{
 	if(D[X][Y] != now){
 		return;
	}
	flag_norm[X][Y] = 1;
	if(flag_norm[X][Y + 1] == 0){
 		DFS_norm(X, Y + 1, now);
	}
	if(flag_norm[X + 1][Y] == 0){
		DFS_norm(X + 1, Y, now);
	}
	if(Y > 0){
		if(flag_norm[X][Y - 1] == 0){
	 		DFS_norm(X, Y - 1, now);
		}
	}
	if(X > 0){
		if(flag_norm[X - 1][Y] == 0){
			DFS_norm(X - 1, Y, now);
		}
	}
}
void DFS(int X, int Y, int now)
{
	if(D[X][Y] == 1 || D[X][Y] == 2){
		if(now != 1 && now != 2){
			return;
		}
	}
	else{
		if(D[X][Y] != now){
	 		return;
		}
	}
	flag[X][Y] = 1;
	if(flag[X][Y + 1] == 0){
 		DFS(X, Y + 1, now);
	}
	if(flag[X + 1][Y] == 0){
		DFS(X + 1, Y, now);
	}
	if(Y > 0){
		if(flag[X][Y - 1] == 0){
	 		DFS(X, Y - 1, now);
		}
	}
	if(X > 0){
		if(flag[X - 1][Y] == 0){
			DFS(X - 1, Y, now);
		}
	}
	
}
int main()
{
	int N;
	int cnt = 0;
	int cnt_norm = 0;
	char C;
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			scanf(" %c", &C);
			if(C == 'R'){
				D[i][j] = 1;
			}
			else if(C == 'G'){
				D[i][j] = 2;
			}
			else{
				D[i][j] = 3;
			}
		}
	}
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			if(flag_norm[i][j] == 0){
				cnt_norm++;
				DFS_norm(i, j, D[i][j]);
			}
			if(flag[i][j] == 0){
				cnt++;
				DFS(i, j, D[i][j]);
			}
		}
	}
	printf("%d %d", cnt_norm, cnt);
	
	return 0;
}