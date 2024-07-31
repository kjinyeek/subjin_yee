#include <stdio.h>//3을 곱한다 2를 곱한다 1을 더한다
int D[1000001];
int N;
void f(int now, int nowTimes)
{
	if(now < 1) return;
	if(D[1] != 0 && nowTimes > D[1]) return;
	if(D[now] != 0 && D[now] <= nowTimes) return;
	if(now == 2){
		if(D[1] == 0 || D[1] > nowTimes + 1){
			D[1] = nowTimes + 1;
			return;
		}
	} 
	
	D[now] = nowTimes;
	
	f((now-(now%3))/3, nowTimes + 1 + now % 3 );
	f((now-(now%2))/2, nowTimes + 1 + now % 2 );
}
int main()
{
	scanf("%d", &N);
	
	for(int i = 1; i<= N; i++){
		
	}
	f(N, 0);
	printf("%d", D[1]);
	return 0;
}
