#include <stdio.h>
#include <stack>
using namespace std;

stack <int> st;
int main()
{
	int N, M, k = 0;
	scanf("%d", &N);
	while(N--){
		scanf("%d", &M);
		if(M == 0 && st.size() > 0){
			st.pop();
		}
		else{
			st.push(M);
		}
	}
	
	while(!st.empty()){
		k += st.top();
		st.pop();
	}
	
	printf("%d", k);
	return 0;
}