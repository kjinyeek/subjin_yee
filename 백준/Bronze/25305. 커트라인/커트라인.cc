#include <stdio.h>
#include <queue>
using namespace std;

priority_queue <int> pq;
int main()
{
	int N, M, k;
	scanf("%d %d", &N, &M);
	for(int i = 0; i < N; i++){
		scanf("%d", &k);
		pq.push(k);
	}
	
	for(int i = 1; i < M; i++){
		pq.pop();
	}
	printf("%d", pq.top());
	return 0;
}