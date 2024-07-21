#include <stdio.h>
#include <stack>
#include <queue>
using namespace std;
int main()
{
	int N, k, now = 1;
	queue <int> in;
	stack <int> stay;
	
	scanf("%d", &N);
	while(N--){
		scanf("%d", &k);
		in.push(k);
	}
	
	while(!in.empty()){
//		printf("%d ",in.front());
		if(in.front() == now){
//			printf("in pop\n");
			in.pop();
			now++;
		}
		else if(!stay.empty() && stay.top() == now){
//			printf("stay pop\n");
			stay.pop();
			now++;
		}
		else{
//			printf("stay push\n");
			stay.push(in.front());
			in.pop();
		}
	}
	while(!stay.empty()){
//		printf("!%d ",stay.top());
		if(stay.top() == now){
			stay.pop();
		}
		else{
			break;
		}
		now++;
	}
	if(stay.empty()){
		printf("Nice");
	}
	else{
		printf("Sad");
	}
	return 0;
}
