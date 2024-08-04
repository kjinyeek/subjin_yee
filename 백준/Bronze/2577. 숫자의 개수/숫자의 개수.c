#include <stdio.h>
int arr[10];
int main()
{
	int N, M;
	scanf("%d", &N);
	scanf("%d", &M);
	N*=M;
	scanf("%d", &M);
	N*=M;
	while(N){
		arr[N%10]++;
		N/=10;
	}
	
	for(int i = 0; i < 10; i++){
		printf("%d\n",arr[i]);
	}
	
	return 0;
}