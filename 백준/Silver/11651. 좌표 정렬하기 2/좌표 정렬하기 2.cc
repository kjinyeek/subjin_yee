#include <stdio.h>
#include <algorithm>
using namespace std;

pair <int, int> D[100001];
int main()
{
	int N, x, y;
	scanf("%d", &N);	
	
	for(int i = 0; i < N; i++){
		scanf("%d %d", &x, &y);
		D[i].first = y;
		D[i].second = x;
	}
	
	sort(D, D + N);
	
	for(int i = 0; i < N; i++){
		printf("%d %d\n", D[i].second, D[i].first);
	}	
	return 0;
}