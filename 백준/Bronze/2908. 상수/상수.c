#include <stdio.h>
char A[5];
char B[5];
int N, M;
int main()
{
	scanf("%s", A);
	scanf("%s", B);
	for(int i = 2; i >=0;i--){
		if(i == 0){
			N+=(A[i] - '0');
			M+=(B[i] - '0');
		}
		else if(i == 1){
			N+=(A[i] - '0') * 10;
			M+=(B[i] - '0') * 10;
		}
		else{
			N+=(A[i] - '0') * 100;
			M+=(B[i] - '0') * 100;
		}
	}
	if(N > M){
		printf("%d", N);
		return 0;
	}
	printf("%d", M);
	return 0;
}