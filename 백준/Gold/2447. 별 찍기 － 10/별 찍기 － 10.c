#include <stdio.h>
int D[7000][7000];
void f(int X, int Y, int N)
{
	int cnt = 1;
	if(N == 3){
		for(int i = X; i <= X + 2; i++){
			for(int j = Y; j <= Y + 2; j++){
				if(cnt!=5){
					D[i][j] = 1;
				}
				cnt++;
			}
		}
		return;
	}
	cnt = 1;
	for(int i = X; i <= N / 3 * 2 + X + 1; i+=N/3){
		for(int j = Y; j <= N / 3 * 2 + Y + 1; j+=N/3){
			if(cnt != 5){
				f(i, j, N / 3);
			}
			cnt++;
		}
	}
	
}
int main()
{
	int N, cnt = 1;
	scanf("%d", &N);
	
	if(N == 3){
		for(int i = 1; i <= 3; i++){
			for(int j = 1; j <= 3; j++){
				if(cnt!=5){
					D[i][j] = 1;
				}
				cnt++;
			}
		}
	}
	else{
		for(int i = 1; i <= N / 3 * 2 + 1; i+=N/3){
			for(int j = 1; j <= N / 3 * 2 + 1; j+=N/3){
				if(cnt != 5){
					f(i, j, N / 3);
				}
				cnt++;
			}
		}
	}
	
	
	for(int i = 1; i <= N; i++){
		for(int j = 1; j <= N; j++){
			if(D[i][j] == 1){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}