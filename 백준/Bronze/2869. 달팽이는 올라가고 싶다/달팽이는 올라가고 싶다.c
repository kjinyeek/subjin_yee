#include <stdio.h>
int main()
{
	int A, B, V;
	int cnt = 1;
	int now = 0;
	scanf("%d %d %d", &A, &B, &V);
	cnt = (V - A) / (A - B) + 1;
	if((V - A) % (A - B) != 0){
		cnt++;
	}
	printf("%d", cnt);
	
	return 0;
}