#include <stdio.h>
int main()
{
	int T, N;
	int Qu, Di, Ni, Pe;
	scanf("%d", &T);
	while(T--){
		Qu = 0;
		Di = 0;
		Ni = 0;
		Pe = 0;
		scanf("%d", &N);
		while(N > 0){
			if(N  >= 25){
				Qu++;
				N-=25;
			}
			else if(N >= 10){
				Di++;
				N-=10;
			}
			else if(N >= 5){
				Ni++;
				N-=5;
			}
			else{
				Pe = N;
				N = 0;
			}
		}
		printf("%d %d %d %d\n", Qu, Di, Ni, Pe);
	}
	
	
	
	return 0;
}