#include <stdio.h>
#include <string.h>
int main()
{
	char D[101];
	scanf("%s",D);
	
	int N = strlen(D);
//	if(N%2 == 0){
		for(int i = 0; i < N / 2; i++){
			if(D[i] != D[N - 1 - i]){
				printf("0");
				return 0;
			}
		}
		printf("1");
//		return 0;
//	}
	
	return 0;
}