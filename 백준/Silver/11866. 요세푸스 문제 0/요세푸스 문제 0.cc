#include <stdio.h>
#include <deque>
using namespace std;

deque<int>de;
int main(void)
{
	int N, M;
	scanf("%d %d", &N, &M);
	for(int i = 1; i <= N; i++){
		de.push_back(i);//front로 모임 
	}
	
	printf("<");
	while(de.size() > 1){
		for(int i = 0; i < M - 1; i++){
			N = de.front();
			de.pop_front();
			de.push_back(N);
		}
		printf("%d, ", de.front());
		de.pop_front();
	}
	printf("%d>", de.front());
	return 0;
}