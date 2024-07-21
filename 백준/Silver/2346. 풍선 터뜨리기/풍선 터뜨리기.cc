#include <stdio.h>
#include <deque>
using namespace std;
deque <pair <int, int > > de;
int main(void){
	int N, M;
	scanf("%d", &N);
	for(int i = 1; i <= N; i++){
		scanf("%d", &M);
		de.push_back({i, M});
	}
	while(de.size() > 1){
		N = de.front().second;
		printf("%d ", de.front().first);
		de.pop_front();
		if(N < 0){
			de.push_front({de.back().first, de.back().second});
			de.pop_back();
		}
		if(N > 0){
			N--;
			while(N--){
				de.push_back({de.front().first, de.front().second});
				de.pop_front();
			}
		}
		else{
			N*=-1;
			N--;
			while(N--){
				de.push_front({de.back().first, de.back().second});
				de.pop_back();
			}
		}
	}
	printf("%d", de.front());
	
	return 0;
}