#include <stdio.h>
#include <algorithm>
using namespace std;

int D[1001];
int main()
{
	int T, N;
	scanf("%d", &T);
	for(int i = 0; i < T; i++){
		scanf("%d", &N);
		D[i] = N;
	}
	sort(D, D + T);
	for(int i = 0; i < T; i++){
	}
	int cnt = 0;
	
	for(int i = 0; i < T; i++){
		for(int j = 0; j <= i; j++){
			cnt += D[j];
		}
	}
	printf("%d", cnt);
	return 0;
}