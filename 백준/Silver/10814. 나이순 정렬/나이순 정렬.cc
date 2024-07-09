#include <stdio.h>
#include <algorithm>
using namespace std;

char D[100001][101];
pair <int, int> arr[100001];
int main()
{
	int N, K;
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++){
		scanf("%d %s", &K, D[i]);
		arr[i].first = K;
		arr[i].second = i;
	}
	
	sort(arr, arr + N);
	
	for(int i = 0; i < N; i++){
		printf("%d %s\n", arr[i].first, D[arr[i].second]);
	}
	return 0;
}