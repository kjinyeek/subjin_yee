#include <stdio.h>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;

priority_queue <pair <int, int> > pq;
int main()
{
	int N, X, Y;
	stack <pair <int, int> > st;
	scanf("%d", &N);
	
	while(N--){
		scanf("%d %d", &X, &Y);
		pq.push({X, Y});
	}
	
	while(!pq.empty()){
		st.push({pq.top().first, pq.top().second});
		pq.pop();
	}
	while(!st.empty()){
		printf("%d %d\n", st.top().first, st.top().second);
		st.pop();
	}
	return 0;
}