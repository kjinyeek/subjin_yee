#include<stdio.h>
#include<string.h>
char D[50];
int ans;
int main()
{
	int N, len, cnt = 1;;
	scanf("%s %d", D, &N);
	len = strlen(D);
	for(int i = len - 1; i >=0; i--){
		if(D[i] >='0' && D[i] <= '9'){
			ans += (D[i] - '0') * cnt;
		}
		else{
			ans += (D[i] - 'A' + 10) * cnt;
		}
		cnt*=N;
	}
	printf("%d", ans);
	return 0;
}