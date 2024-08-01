#include <stdio.h>
int D[1001];
int ans[1001][2];//증가 감소 
int main()
{
	int N, inMAX = 0, deMAX = 0, changeMAX = 0, MAX = 1;
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		scanf("%d", &D[i]);
	}
	
	ans[0][0] = 1;
	ans[0][1] = 1;
	for(int i = 1; i < N; i++){
		inMAX = 0;
		deMAX = 0;
		changeMAX = 0;
//		printf("!!!!!i::%d!!!!\n", i);
		for(int j = 0; j < i; j++){
			if(ans[j][0] > inMAX && D[j] < D[i]){//증가하는 수열  
				inMAX = ans[j][0]; 
			}
			if(ans[j][1] > deMAX && D[j] > D[i]){//감소하는 수열 
				deMAX = ans[j][1];
			}
			if(ans[j][0] > changeMAX && D[j] > D[i]){//변환되는 시점 
				changeMAX = ans[j][0];
			}
//			printf("in %d, de %d, change %d\n", inMAX, deMAX, changeMAX);
		}
		ans[i][0] = inMAX + 1;
		ans[i][1] = deMAX > changeMAX ? deMAX+1 : changeMAX+1;
//		printf("[0]%d   [1]%d\n\n", ans[i][0], ans[i][1]);
	}
	
	
	for(int i = 0; i < N; i++){
		if(ans[i][0] > MAX) MAX = ans[i][0];
		if(ans[i][1] > MAX) MAX = ans[i][1];
	}
	printf("%d", MAX);
	return 0;
} 