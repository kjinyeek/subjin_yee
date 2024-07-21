#include <stdio.h>
#include <deque>
using namespace std;
deque <int> qu;
int D;
int main()
{
	int N, k;
	
	scanf("%d", &N);
	while(N--){
		scanf("%d", &D);
		if(D == 1){
			scanf("%d", &k);
			qu.push_front(k);
		}
		else if(D == 2){
			scanf("%d", &k);
			qu.push_back(k);
		}
		else if(D==3){
			if(!qu.empty()){
				printf("%d\n", qu.front());
				qu.pop_front();
			}
			
			else{
				printf("-1\n");
			}
		}
		else if(D==4){
			if(!qu.empty()){
				printf("%d\n", qu.back());
				qu.pop_back();
			}
			
			else{
				printf("-1\n");
			}
		}
		else if(D== 5){
			printf("%d\n", qu.size());
		}
		else if(D==6){
			printf("%d\n", qu.empty());
		}
		else if(D == 7){
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