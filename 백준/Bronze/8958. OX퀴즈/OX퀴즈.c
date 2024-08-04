#include <stdio.h>
int main()
{
	int N, ans, cnt;
	char D[81];
	scanf("%d", &N);
	while(N--){
		ans = 0;
		cnt = 0;
		scanf("%s", D);
		for(int i = 0; D[i]; i++){
			if(D[i] == 'O'){
				cnt++;
				ans+=cnt;
			}
			else{
				cnt = 0;
			}
		}
		printf("%d\n",ans);
	}
	
	return 0;
}