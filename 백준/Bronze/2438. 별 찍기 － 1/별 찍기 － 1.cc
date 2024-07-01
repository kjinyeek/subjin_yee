#include <stdio.h>
int main ()
{
	int N, a, b;
	scanf("%d", &N);
	for(a=1; a<=N; a++) {
		for(b=1; b<=a; b++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}