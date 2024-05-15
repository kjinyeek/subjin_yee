#include <stdio.h>
int main()
{
	int H, M, cnt;
	scanf("%d %d",&H, &M);
	cnt = H * 60 + M - 45;
	if(cnt < 0){
		cnt = 24 * 60 + cnt;
	}
	printf("%d %d", (cnt / 60) % 24, cnt % 60);
	
	return 0;
}