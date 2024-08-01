#include <stdio.h>
char D[1001];
int main()
{
	int N;
	scanf("%d", &N);
	while(N--){
		scanf("%s", D);
		for(int i = 0; D[i]; i++){
			if(D[i] == 'S'){
				printf("%s", D);
				break;
			}
		}
	}
	
	
	return 0;
}