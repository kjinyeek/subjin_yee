#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	if(N == 1){
		for(int i=2; i <= 8; i++){
			scanf("%d", &N);
			if(N!=i){
				printf("mixed");
				return 0;
			}
		}
		printf("ascending");
	}
	else if(N == 8){
		for(int i=7; i >= 1; i--){
			scanf("%d", &N);
			if(N!=i){
				printf("mixed");
				return 0;
			}
		}
		printf("descending");
	}
	else printf("mixed");
	return 0;
}