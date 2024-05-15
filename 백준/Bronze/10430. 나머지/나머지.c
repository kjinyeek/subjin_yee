#include<stdio.h>
int main()
{
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	
	printf("%d %d %d %d",(A+B)%C, (A+B)%C, (A*B)%C, (A*B)%C);
	
	
	
	
	return 0;
}