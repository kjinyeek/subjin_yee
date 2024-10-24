#include <stdio.h>
#include <queue>
using namespace std;

queue <int> qu;
int D[1001][1001];
int visit[1001];
int N, M, V;
void DFS(int node){
	if(node > N) return;
	if(visit[node]) return;
	visit[node] = 1;
	printf("%d ", node);
	
	for(int i = 1; i<= 1000; i++){
		if(D[node][i] == 1){
			DFS(i);
		}
	}
}
int main()
{
	int a, b;
	scanf("%d %d %d", &N, &M, &V);
	for(int i = 0; i < M; i++){
		scanf("%d %d", &a, &b);
		D[a][b] = 1;
		D[b][a] = 1;
	}
	
	DFS(V);
	printf("\n");
	
	for(int i = 0; i <= 1000; i++) visit[i] = 0;
	visit[V] = 1;
	qu.push(V);
	while(!qu.empty()){
		printf("%d ", qu.front());
		for(int i = 1; i<= 1000; i++){
			if(D[qu.front()][i] == 1 && visit[i] == 0){
				qu.push(i);
				visit[i] = 1;
			}
		}
		qu.pop();
	}
	return 0;
}