#include <stdio.h>
int D[16][16];
int N, cnt;
void zeroOne(int X, int Y, int num)//1또느0으로 배열 만드는 친구 
{
	int i, j;
	for(i = 1; i <= N; i++){
		D[i][Y] += num;
	}
	i = X;
	j = Y;
	while(i <= N && j <= N){
		D[i][j] += num;
		i++;
		j++;
	}
	i = X;
	j = Y;
	while(i <= N && j >= 1){
		D[i][j] += num;
		i++;
		j--;
	}
}
void f(int X, int Y)//[X+1][?]작동 
{
	
	if(X == N){
		cnt++;
		return;
	}
	zeroOne(X, Y, 1);
	
	for(int j = 1; j <= N; j++){
		if(D[X+1][j] == 0){
			f(X+1, j);
		}
	}
	zeroOne(X, Y, -1);
}
int main()
{
	scanf("%d", &N);
	
	for(int i = 1; i <= N / 2; i++){
		f(1, i);
	}
	cnt *= 2;
	if(N%2 == 1) f(1, N/2 + 1);
	printf("%d", cnt);
	
	return 0;
}
