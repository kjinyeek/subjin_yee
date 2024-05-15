#include <stdio.h>
int D[1001];
int main()
{
	int N, max =0;
	float ans = 0;
	scanf("%d", &N);
	for(int i = 0; i< N; i++){
		scanf("%d", &D[i]);
		if(D[i] > max){
			max = D[i];
			
		}
	}	
	for(int i = 0; i< N; i++){
//		if(D[i] == max){
//			ans += max;
//		}
//		else{
			ans += (float)D[i] / (float)max * 100;
//		}
		
//		printf("%f\n", ans);	
	}
	printf("%f", ans / N);
	return 0;
}