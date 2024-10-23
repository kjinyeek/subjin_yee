#include <stdio.h>
#include <stack>
using namespace std;
stack <char> left;
stack <char> right;
char D[100001];
int main()
{
	int N;
	char c;
	scanf("%s", D);
	scanf("%d", &N);
	for(int i = 0; D[i]; i++) left.push(D[i]);
	
	while(N--){
		scanf(" %c", &c);
		if(c == 'L' && !left.empty()){
			right.push(left.top());
			left.pop();
		}
		else if(c == 'D' && !right.empty()){
			left.push(right.top());
			right.pop();
		}
		else if(c == 'B' && !left.empty()) left.pop();
		else if(c == 'P'){
			scanf(" %c", &c);
			left.push(c);
		}
	}
	while(!left.empty()){
		right.push(left.top());
		left.pop();
	}
	while(!right.empty()){
		printf("%c", right.top());
		right.pop();
	}
	return 0;
}