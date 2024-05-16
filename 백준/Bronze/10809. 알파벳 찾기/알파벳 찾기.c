#include <stdio.h>
#include <string.h>
char D[30];
int arr[101];
int main()
{
	int N;
	scanf("%s", D);
	N = strlen(D);
	
	for(int i = 0; i<= 'z' - 'a'; i++){
		arr[i] = -1;
	}
	
	for(int i = 0; i< N; i++){
		if(arr[D[i] - 'a'] == -1){
			arr[D[i] - 'a'] = i;
		}
	}
	for(int i = 0 ; i <= 'z' - 'a';i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}