#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	int a, b;
	for(int i = 1; i<=N; i++){
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", i, a + b);
	}
	
	return 0;
}