#include <stdio.h>
char D[5][16];
int main()
{
	int flag = 0;
	for(int i = 0; i < 5; i++){
		scanf("%s", D[i]);
	}
	for(int j = 0; 1; j++){
		flag = 0;
		for(int i = 0; i < 5; i++){
			if(D[i][j] != 0){
				flag = 1;
				printf("%c",D[i][j]);
			}
		}
		if(flag == 0){
			break;
		}
	}
	
	return 0;
}