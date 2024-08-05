#include <stdio.h>
int print[10];
int N, M;
void f(int now, int now_cnt)
{
	if(now > N || now_cnt > M )return;
	print[now_cnt] = now;
	if(now_cnt == M){
		for(int i = 1; print[i]; i++) printf("%d ", print[i]);
		printf("\n");
		print[now_cnt] = 0;
		return;
	}
	
	
	for(int i = now; i <= N; i++){
		f(i, now_cnt+1);
	}
	
	print[now_cnt] = NULL;
}
int main()
{
	scanf("%d %d", &N, &M);
	if(M == 1){
		for(int i = 1; i <= N; i++)printf("%d\n", i);
	}
	for(int i = 1; i <= N; i++){
		print[1] = i;
		for(int j = i; j <= N; j++){
			f(j, 2);
		}
		print[1] = NULL;
	}
	
	return 0;
}