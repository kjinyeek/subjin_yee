#include <stdio.h>
#include <string.h>
char D[30];
int main()
{
	int T, N, M;
	scanf("%d", &T);
	while(T--){
		scanf("%d %s", &N, D);
		M = strlen(D);
		for(int i = 0; i< M; i++){
			for(int j = 0 ; j < N; j++){
				printf("%c", D[i]);
			}
		}
		printf("\n");
	}
	
	return 0;
}