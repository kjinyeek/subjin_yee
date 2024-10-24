#include <stdio.h>
#include <deque>
using namespace std;
char D[100001];
int dir, flag;//0일때 front 1일때 back 
deque <int> de;
int main()
{
	int T, N, k;
	char temp;
	scanf("%d", &T);
	while(T--){
		scanf("%s", D);
		scanf("%d", &N);
		scanf(" %c", &temp);
		if(N == 0) scanf("%c", &temp);
		else{
			for(int i = 0; i < N; i++){
				scanf("%d", &k);
				
				scanf("%c", &temp);
				de.push_back(k);
			}
		}
		
		for(int i = 0; D[i]; i++){
			if(D[i] == 'D'){
				if(de.empty()){
					printf("error\n");
					flag = 1;
					break;
				}
				if(dir == 0) de.pop_front();
				else de.pop_back();
			}
			else dir = (dir + 1) % 2;
		}
		//출력 
		if(!flag){
			printf("[");
			k = de.size() - 1;
			if(k == -1) printf("]\n");
			else{
				if(dir == 0){
					for(int i = 0; i < k; i++){
						printf("%d,", de.front());
						de.pop_front();
					}
				}
				else{
					for(int i = 0; i < k; i++){
						printf("%d,", de.back());
						de.pop_back();
					}
				}
				printf("%d]\n",de.front());
				de.pop_front();
			}
			
		}
		flag = 0;
		dir = 0;
	}
	
	return 0;
}
