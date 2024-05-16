#include <stdio.h>
int arr[30];
char D[1000001];
int max = -1;
int maxchar;
int main()
{
	int visit = 1;
	scanf("%s", D);
	for(int i = 0;D[i]; i++){
		if(D[i] >= 'A' && D[i] <= 'Z'){
			arr[D[i] - 'A']++;
		}
		else{
			arr[D[i] - 'a']++;
		}
	}
	for(int i = 0; i <= -'A' + 'Z'; i++){
		if(arr[i] > max){
			visit = 0;
			max = arr[i];
			maxchar = i;
		}
		else if(arr[i] == max){
			visit = 1;
		}
	}
	if(visit == 1){
		printf("?");
		return 0;
	}
	printf("%c", maxchar + 'A');
	return 0;
}