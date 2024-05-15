#include<stdio.h>
char D[4];
int main()
{
	int N, cnt = 1, ans = 0;;
	scanf("%d", &N);
	scanf("%s", D);
	
	for(int i = 2; i >= 0; i--){
		ans += (D[i] - '0') * N * cnt;
		printf("%d\n", (D[i] - '0') * N);
		cnt *= 10;
	}
	printf("%d", ans);
	return 0;
}