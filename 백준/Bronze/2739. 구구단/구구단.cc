#include <stdio.h>
int main()
{
	int N, a=1;
	scanf("%d", &N);
	while(a<10) {
		printf("%d * %d = %d\n", N, a, N*a);
		a = a + 1;
	}
	return 0;
}