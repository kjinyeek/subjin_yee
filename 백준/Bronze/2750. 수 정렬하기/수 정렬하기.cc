#include <stdio.h>
#include <algorithm>
using namespace std;

int D[1001];
int main()
{
	int N;
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		scanf("%d", &D[i]);
	}
	
	sort(D, D + N);
	
	for(int i = 0; i <N; i++){
		printf("%d\n", D[i]);
	}
	return 0;
}