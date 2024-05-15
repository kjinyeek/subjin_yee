#include <stdio.h>
int main()
{
	int N, k, q;
	int cnt = 0;
	scanf("%d %d", &N, &k);
	for(int i = 0; i< N; i++){
		scanf("%d", &q);
		if(q < k){
			printf("%d ", q);
		}
	}
	
	return 0;
}