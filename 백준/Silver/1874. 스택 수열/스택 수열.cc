#include <stdio.h>
#include <stack>
using namespace std;

int N;
int D[100001];
int ans[200001];//1+  0-
stack <int> st;
int main()
{
	int k = 1, l = 0;
	scanf("%d", &N);
	for(int i = 0; i < N; i++) scanf("%d", &D[i]);
	
	for(int i = 0; i < N; i++) {
		while(k <= D[i]){
			st.push(k++);
			ans[l++] = 1;
		}
		if(st.empty()) break;
		if(st.top() == D[i]){
			ans[l++] = 0;
			st.pop();
		}
		else{
			printf("NO");
			return 0;
		}
	}
	
	for(int i = 0; i < l; i++) {
		if(ans[i] == 1) printf("+\n");
		else printf("-\n");
	}
	return 0;
}