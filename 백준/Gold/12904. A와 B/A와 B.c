#include <stdio.h>
char fst[1001];
char sec[1001];
int start, end, way;

void f(int now)
{
	if(sec[now] == 'A'){
		if(way == 0){
			end--;
		}
		else{
			start++;
		}
	}
	else if(sec[now] == 'B'){
		if(way == 0){
			end--;
			way = 1;
		}
		else{
			start++;
			way = 0;
		}
	}
	else{
		way = 2;
	}
}
int main()
{
	int fstlen = 0;
	scanf("%s %s", fst, sec);
	for(int i = 0; fst[i]; i++){
		fstlen++;
	}
	for(int i = 0; sec[i]; i++){
		end++;
	}
	end--;
	while(end - start + 1!=fstlen){
		if(way == 0){
			f(end);
		}
		else{
			f(start);
		}
		
		if(way == 2){
			printf("0");
			return 0;
		}
	}
	int cnt = 0;
	if(way == 0){
		for(int i = start; i <= end; i++){
		if(fst[cnt] != sec[i]){
			printf("0");
			return 0;
		}
		cnt++;
		}
	}
	else{
		for(int i = end ;i >= start; i--){
		if(fst[cnt] != sec[i]){
			printf("0");
			return 0;
		}
		cnt++;
		}
	}
	printf("1");
	
	return 0;
}