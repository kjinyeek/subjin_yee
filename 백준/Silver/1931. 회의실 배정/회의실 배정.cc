#include <stdio.h>
#include <queue>
using namespace std;

priority_queue<pair <long long,long long> >pq;
long long D[100001][2];
long long T, N, M, cnt = 1;
long long now;
int main()
{
	scanf("%lld", &T);
	for(int i = 0; i < T; i++){
		scanf("%lld %lld", &N, &M);
		pq.push(make_pair(M,N));
	}
	for(int i = T - 1; i >= 0; i--){
		D[i][0] = pq.top().second;
		D[i][1] = pq.top().first;
		pq.pop();
	}
	now = D[0][1];
	for(int i = 1; i < T; i++){
		if(D[i][0] >= now){
			cnt++;
			now = D[i][1];
		}
	}
	printf("%lld", cnt);
	return 0;
}