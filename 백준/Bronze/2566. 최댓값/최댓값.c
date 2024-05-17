#include <stdio.h>
int max = -1;
int X, Y;
int main()
{
	int N;
	for(int i = 0; i < 9; i++){
		for(int j = 0; j < 9; j++){
			scanf("%d", &N);
			if(max < N){
				max = N;
				
				X = i;
				Y = j;
			}
		}
	}
	printf("%d\n", max);
	printf("%d %d", X + 1, Y + 1);
	
	
	return 0;
}