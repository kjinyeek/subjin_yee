#include <stdio.h>
int visit[10];
int print[10];
int N, M;
void f(int now, int now_cnt)
{
	if(visit[now] == 1 || now > N || now_cnt > M)return;
	print[now_cnt] = now;
	if(now_cnt == M){
		for(int i = 1; print[i]; i++) printf("%d ", print[i]);
		printf("\n");
		print[now_cnt] = 0;
		return;
	}
	
	visit[now] = 1;
	
	for(int i = now+1; i <= N; i++){
		f(i, now_cnt+1);
	}
	
	visit[now] = 0;
	print[now_cnt] = NULL;
}
int main()
{
	scanf("%d %d", &N, &M);
	if(M == 1){
		for(int i = 1; i <= N; i++)printf("%d\n", i);
	}
	for(int i = 1; i <= N; i++){
		visit[i] = 1;
		print[1] = i;
		for(int j = i+1; j <= N; j++){
			f(j, 2);
		}
		visit[i] = 0;
		print[1] = NULL;
	}
	
	return 0;
}