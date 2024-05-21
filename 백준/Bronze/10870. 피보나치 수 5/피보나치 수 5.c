#include <stdio.h>
int D[21];
int main()
{
	int N;
	scanf("%d", &N);
	D[1] = 1;
	D[2] = 1;
	for(int i = 3; i <= 20; i++){
		D[i] = D[i - 1] + D[i - 2];;
	}
	printf("%d", D[N]);
	return 0;
}