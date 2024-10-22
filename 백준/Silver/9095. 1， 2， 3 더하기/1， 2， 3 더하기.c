#include <stdio.h>
int D[11];
int main()
{
	int T, k, N;
	scanf("%d", &T);
	D[1] = 1;	
	for(int i = 2; i <= 10; i++){
		k = 0;
		for(int j = i - 3; j <= i; j++) k+= D[j];
		if(i <= 3) k++;
		D[i] = k;
	}
	while(T--){
		scanf("%d", &N);
		printf("%d\n", D[N]);
	}
	
	
	return 0;
}