#include <stdio.h>
int plus;
int MAX(int x, int y)
{
	if(x > y){
		plus += y;
		return x;
	}
	plus += x;
	return y;
}
int main()
{
	int a, b, c;
	int max;
	scanf("%d %d %d", &a, &b, &c);
	max = MAX(MAX(a, b), c);
	
	while(max >= plus){
		max--;
	}
	
	printf("%d", max + plus);
	return 0;
}