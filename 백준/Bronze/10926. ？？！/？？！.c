#include <stdio.h>
char D[51];
int main()
{
	scanf("%s", D);
	for(int i = 0; D[i] != '\0'; i++){
		printf("%c", D[i]);
	}
	printf("??!");
	
	return 0;
}