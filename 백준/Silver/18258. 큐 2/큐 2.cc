#include <stdio.h>
#include <queue>
using namespace std;
queue <int> qu;
char D[10];
int main()
{
	int N, k;
	
	scanf("%d", &N);
	while(N--){
		scanf("%s", D);
		if(D[0] == 'p' && D[1] == 'u'){
			scanf("%d", &k);
			qu.push(k);
		}
		else if(D[0] == 'p'){
			if(!qu.empty()){
				printf("%d\n", qu.front());
				qu.pop();
			}
			
			else{
				printf("-1\n");
			}
		}
		else if(D[0] == 's'){
			printf("%d\n", qu.size());
		}
		else if(D[0] == 'e'){
			printf("%d\n", qu.empty());
		}
		else if(D[0] == 'f'){
			if(!qu.empty()){
				printf("%d\n", qu.front());
			}
			else{
				printf("-1\n");
			}
		}
		else{
			if(!qu.empty()){
				printf("%d\n", qu.back());
			}
			else{
				printf("-1\n");
			}
		}
	}
	
	return 0;
}