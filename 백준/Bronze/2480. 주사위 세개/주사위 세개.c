#include <stdio.h>
int MAX(int a, int b, int c){
	if(a > b){
		if(a > c){
			return a;	
		}
	}
	else{
		if(b > c){
			return b;	
		}
	}
	return c;
}
int same(int A, int B, int C)
{
	if(A == B){
		return A;
	}
	else if(B == C){
		return B;
	}
	return C;
}
int main()
{
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	
	if(A == B && B == C){
		printf("%d", 10000 + A * 1000);
	}
	else if(A != B && B != C && C != A){
		printf("%d", MAX(A, B, C) * 100);
	}
	else{
		printf("%d", same(A, B, C)*100 + 1000);
	}
	
	return 0;
}	