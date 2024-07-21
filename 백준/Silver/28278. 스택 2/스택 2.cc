#include <stdio.h>
#include <stack>
using namespace std;
stack <int> qu;
int D;
int main()
{
	int N, k;
	
	scanf("%d", &N);
	while(N--){
		scanf("%d", &D);
		if(D == 1){
			scanf("%d", &k);
			qu.push(k);
		}
		else if(D== 2){
			if(!qu.empty()){
				printf("%d\n", qu.top());
				qu.pop();
			}
			
			else{
				printf("-1\n");
			}
		}
		else if(D== 3){
			printf("%d\n", qu.size());
		}
		else if(D==4){
			printf("%d\n", qu.empty());
		}
		else{
			if(!qu.empty()){
				printf("%d\n", qu.top());
			}
			else{
				printf("-1\n");
			}
		}
	}
	
	return 0;
}