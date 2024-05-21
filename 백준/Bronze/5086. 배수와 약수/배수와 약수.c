#include <stdio.h>
int main()
{
	int N, M;
	scanf("%d %d", &N, &M);
	while(N){
		if(N % M == 0){
			printf("multiple\n");	
		}
		else if(M % N == 0){
			printf("factor\n");
		}
		else{
			printf("neither\n");
		}
		scanf("%d %d", &N, &M);
	}
	
	
	return 0;
}