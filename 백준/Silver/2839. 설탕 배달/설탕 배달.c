#include <stdio.h>
int main()
{
	int N, cnt = 0;
	scanf("%d", &N);
	for(int i = 0;N > 0; i++){
		if(N % 5 == 0){
			cnt+= N/5;
			N = 0;
		}
		else if(N < 3){
			printf("-1");
			return 0;
		}
		else{
			cnt++;
			N-=3;
		}
	}
	printf("%d", cnt);
	
	
	return 0;
}