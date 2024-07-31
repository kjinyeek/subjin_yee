#include <stdio.h>
int D[501][501];
int main()
{
	int N, MAX;
	scanf("%d", &N);
	scanf("%d", &D[0][0]);
	MAX = D[0][0];
	for(int i = 1; i < N; i++){
		for(int j = 0; j < i + 1; j++){
			scanf("%d", &D[i][j]);
			if(j == 0) D[i][j] += D[i-1][j];
			else if (j == i) D[i][j] += D[i-1][j-1];
			else D[i][j] += D[i-1][j-1] > D[i-1][j] ? D[i-1][j-1] : D[i-1][j];
		}
		if(i == N-1){
			MAX = D[i][0];
			for(int j=1; j < N; j++) MAX = D[i][j] > MAX ? D[i][j] : MAX;
		}
	}
	
	printf("%d", MAX);
	
	return 0;
}