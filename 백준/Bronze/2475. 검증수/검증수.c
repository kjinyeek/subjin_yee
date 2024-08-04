#include <stdio.h>
int main()
{
	int mult, cnt = 0;
	int N;
	for(int i = 0; i < 5; i++){
		scanf("%d", &N);
		cnt += N * N;
	}
	printf("%d", cnt%10);
	
	return 0;
}