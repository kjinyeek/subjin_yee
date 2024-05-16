#include <stdio.h>
#include <string.h>
char D[1001];
int main()
{
	int T;
	scanf("%d", &T);
	while(T--){
		scanf("%s", D);
		printf("%c%c\n", D[0],D[strlen(D) - 1]);
	}
	
	
	
	return 0;
}