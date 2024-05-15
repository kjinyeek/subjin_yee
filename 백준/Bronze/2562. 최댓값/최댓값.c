#include <stdio.h>
int max;
int main()
{
	int N = 9, cnt = 0, M;
	for(int i = 1 ; i<= N; i++){
		scanf("%d", &M);
		if(M > max){
			max = M;
			cnt = i;
		}
	}
	
	printf("%d\n%d", max, cnt);
	return 0;
}