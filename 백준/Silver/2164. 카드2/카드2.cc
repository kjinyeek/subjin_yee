#include <stdio.h>
#include <deque>
using namespace std;

deque <int> de;
int main(){
	int N, k;
	scanf("%d", &N);
	for(int i = 1; i <= N; i++){
		de.push_back(i);
	}
	while(de.size() !=1){
		de.pop_front();
		k = de.front();
		de.push_back(k);
		de.pop_front();
	}
	printf("%d", de.back());
	return 0;
}