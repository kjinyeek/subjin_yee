#include <stdio.h>
int max = -1000001;
int min = 1000001;
int main()
{
	int N, M;
	scanf("%d", &N);
	while(N--){
		scanf("%d", &M);
		if(M < min){
			min = M;
		}
		if(M > max){
			max = M;
		}
	}
	
	printf("%d %d", min, max);
	return 0;
}