#include <stdio.h>
int D[101];
int main()
{
	int N, k;
	int cnt = 0;
	scanf("%d", &N);
	for(int i = 0; i< N; i++){
		scanf("%d", &D[i]);
	}
	scanf("%d", &k);
	
	for(int i = 0; i< N; i++){
		if(D[i] == k){
			cnt++;
		}
	}
	printf("%d", cnt);
	
	return 0;
}