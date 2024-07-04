#include <stdio.h>
#include <queue>
using namespace std;
char D[15];
int main()
{
	priority_queue <int> pq;
	
	scanf("%s", D);
	for(int i = 0; D[i]; i++){
		pq.push(D[i] - '0');
	}
	while(!pq.empty()){
		printf("%d", pq.top());
		pq.pop();
	}
	
	return 0;
}