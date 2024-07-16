#include <stdio.h>
char D[51];
int main()
{
	int N, k = 0, YN;
	scanf("%d", &N);
	while(N--){
		YN = 0;
		k = 0;
		scanf("%s", D);
		for(int i = 0; D[i]; i++){
			if(D[i] == '('){
				k++;
			}
			else{
				k--;
				if(k < 0){
					printf("NO\n");
					YN = 1;
					break;
				}
			}
		}
		if(YN == 0){
			if(k == 0){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
		
	}
	
	
	return 0;
}