#include <stdio.h>

int main()
{
	int T;
	int H, W, N, count, count_1;
	
	scanf("%d",&T);
	
	for(int i = 0; i < T; i++){
		
		scanf("%d %d %d", &H, &W, &N);
		
		count = (N % H);
		if(count == 0){
			count = H;
			count_1 = N / H;
		}
		else{
			count_1 = N / H + 1;
		}
		
		if(count_1<10){
			printf("%d0%d\n", count, count_1);
		}
		
		else{
			printf("%d%d\n", count, count_1);
		}
	}
	
	
	
	return 0;
}