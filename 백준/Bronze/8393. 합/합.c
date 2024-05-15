#include <stdio.h>
int main()
{
	int N, cnt = 0;
	scanf("%d", &N);
	
	for(int i = 1; i<= N;i++){
		cnt += i;
	}
	printf("%d", cnt);
	
	return 0;
}