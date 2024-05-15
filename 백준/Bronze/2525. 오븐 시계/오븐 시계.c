#include <stdio.h>
int main()
{
	int H, M, cnt;
	scanf("%d %d %d",&H, &M, &cnt);
	cnt += H * 60 + M;
	printf("%d %d", (cnt / 60) % 24, cnt % 60);
	
	return 0;
}