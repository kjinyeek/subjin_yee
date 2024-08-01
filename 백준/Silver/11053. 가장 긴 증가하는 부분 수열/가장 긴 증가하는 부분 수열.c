#include <stdio.h>
int D[1001];
int ans[1001];
int main()
{
	int N, MAX = 1;
	scanf("%d", &N);
	
	scanf("%d", &D[0]);
	ans[0]=1;
	
	for(int i = 1; i < N; i++){
		MAX = -1;
		scanf("%d", &D[i]);
		for(int j=0; j < i; j++){
			if(ans[j] > MAX && D[j] < D[i]) {
				MAX = ans[j];
				ans[i] = ans[j];
			}
		}
		ans[i]++;
	}
	
	for(int i = 0; i < N; i++) if(ans[i] > MAX) MAX = ans[i];
	
	printf("%d", MAX);
	return 0;
}