#include <stdio.h>
int a[10001];
int main()
{
	int N;
	int cc;
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		scanf("%d", &cc);
		a[cc] += 1;
	}
	
	for(int i = 1; i <= 10000; i++){
		if(a[i] >= 1){
			for(int j = 0; j < a[i]; j++){
				printf("%d\n", i);
			}
		}
	}
	return 0;
}