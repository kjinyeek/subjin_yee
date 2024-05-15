#include <stdio.h>
int D[50];
int main()
{
	int N, cnt = 0;
	for(int i = 1; i <= 10; i++){
		scanf("%d", &N);
		D[N % 42] = 1;
	}
	for(int i = 0; i <= 42; i++){
		if(D[i] == 1){
			cnt++;
		}	
	}
	printf("%d", cnt);
	return 0;
}