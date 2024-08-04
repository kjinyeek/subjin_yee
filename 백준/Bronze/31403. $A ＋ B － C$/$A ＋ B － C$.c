#include <stdio.h>
int main()
{
	long long a, b, c, k, B;
	scanf("%d %d %d", &a, &b, &c);
	
	k =a;
	B = b;
	while(b){
		k*=10;
		b/=10;
	}
	printf("%d\n%d", a+B-c, k+B-c);
	return 0;
}