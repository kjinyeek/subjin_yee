#include <stdio.h>
char D[101];
int cnt;
int main()
{
	int N, M;
	scanf("%d", &N);
	scanf("%s", D);
	
	for(int i = 0; i < N; i++){
		cnt += D[i] - '0';
	}
	printf("%d", cnt);	
	
	return 0;
}