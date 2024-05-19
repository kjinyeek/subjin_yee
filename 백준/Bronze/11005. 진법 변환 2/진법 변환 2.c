#include <stdio.h>
#include <string.h>
char D[50];
int main()
{
	int N, M, i =0;
	scanf("%d %d", &N, &M);
	while(1){
			if(N % M <= 9){
				D[i] = N%M + '0';
			}
			else{
				D[i] = N%M +'A' -  10;
			}
		if(N/M == 0){
			break;
		}
		N-=N%M;
		N/=M;
		i++;
	}
	int k = strlen(D);
	for(i = k-1; i >= 0; i--){
		printf("%c", D[i]);
	}
	return 0;
}