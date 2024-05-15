#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	int a, b;
	while(N--){
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	
	return 0;
}