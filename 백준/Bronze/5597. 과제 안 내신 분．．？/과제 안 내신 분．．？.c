#include <stdio.h>
int D[31];
int main()
{
	int N;
	for(int i = 1; i <= 28; i++){
		scanf("%d", &N);
		D[N] = 1;
	}
	for(int i = 1; i <= 30; i++){
		if(!D[i]){
			printf("%d\n", i);
		}	
	}
	
	return 0;
}