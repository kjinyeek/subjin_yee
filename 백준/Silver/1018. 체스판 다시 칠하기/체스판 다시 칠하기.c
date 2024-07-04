#include <stdio.h>// w 0 /b 1
int D[51][51];
int f(int x, int y, int first)
{
	int ans = 0;
	for(int i = x; i < x + 8; i++){
		for(int j = y; j < y + 8; j++){
			if(D[i][j] != first){
				ans++;
//				printf("!!!");
			}
//			printf("first::%d  i::%d  j::%d\n", first, i, j);
			first = (first+1) % 2;
		}
		first = (first+1) % 2;
	}
	return ans;	
}
int main()
{
	int N, M, ans = 65, now;
	char k;
	
	scanf("%d %d", &N, &M);
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			scanf(" %c", &k);
//			printf("i::%d  j::%d  k:::%c\n", i, j,k);
			if(k == 'W'){
				D[i][j] = 0;
				continue;
			}
			D[i][j] = 1;
		}
	}
	
	for(int i = 0; i <= N - 8; i++){
		for(int j = 0; j <= M - 8; j++){
			now = f(i, j, 0);
//			printf("ans0:%d  ", now);
			if(now < ans) ans = now;
//			printf("________________\n");
			now = f(i, j, 1);
//			printf("ans1:%d\n", now);
			if(now < ans) ans = now;
		}
	}
	
	printf("%d", ans);
	return 0;
}