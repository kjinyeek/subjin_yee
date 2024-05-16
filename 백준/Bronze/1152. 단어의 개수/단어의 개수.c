#include <stdio.h>
#include <string.h>
char D[1000001];
int main()
{
	int N, M, cnt = 0;
	int first, second;
	gets(D);
	N = strlen(D);
	if(D[0] !=' '){
		cnt++;
	}
	for(int i = 0; i < N; i++){
		if(D[i] == ' '){
			if(D[i + 1] != ' ' && D[i + 1] != '\0'){
				cnt++;
			}
		}
	}
	printf("%d", cnt);
	return 0;
}