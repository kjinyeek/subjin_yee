#include<stdio.h>
char D[101];
char now;
int main()
{
	int T, last, cnt = 0, k;
	scanf("%d", &T);
	while(T--){
		scanf("%s", D);
		k = 0;
		for(int i = 0; D[i]; i++){
			now = D[i];
			last = i;
			for(int j = i + 1; D[j]; j++){
				if(D[j] == now){
					if(last == j - 1){
						last = j;
					}
					else{
						k = 1;
						break;
					}
				}
			}
			i = last;
			if(k == 1){
				break;
			}
		}
		if(k == 0){
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}