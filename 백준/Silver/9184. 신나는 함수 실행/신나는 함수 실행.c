#include <stdio.h>
int D[110][110][110];
int f(int a, int b, int c)
{
	if(D[a+50][b+50][c+50] != 0){
		return D[a+50][b+50][c+50];
	}
	
	if(a <= 0 || b <= 0 || c <= 0){
		D[a+50][b+50][c+50] = 1;
		return 1;
	}
	if(a > 20 || b > 20 || c > 20){
		D[20+50][20+50][20+50] = f(20, 20, 20);
		return D[20+50][20+50][20+50];
	}
	if(a < b && b < c){
		D[a+50][b+50][c+50] = f(a,b,c-1) + f(a,b-1,c-1) - f(a,b-1,c);
		return D[a+50][b+50][c+50];
	}
	D[a+50][b+50][c+50] = f(a-1,b,c) + f(a-1,b-1,c) + f(a-1,b,c-1) - f(a-1,b-1,c-1);
	return D[a+50][b+50][c+50];
}
int main()
{
	int a, b, c;
	while(1){
		scanf("%d %d %d", &a, &b, &c);
		if(a == -1 && b == -1 && c == -1) break;
		
		D[a+50][b+50][c+50] = f(a, b, c);
		printf("w(%d, %d, %d) = %d\n", a, b, c, D[a+50][b+50][c+50]);
	}
	
	return 0;
}