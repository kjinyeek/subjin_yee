#include<stdio.h>
int main()
{
	int N, M, cnt = 1;
	scanf("%d %d", &N, &M);
	for(int i = 1; i<= N; i++){
		if(N%i == 0){
			if(cnt == M){
				printf("%d", i);
				return 0;
			}
			cnt++;
		}
	}
	printf("0");
	
	
	
	
	
	return 0;
}