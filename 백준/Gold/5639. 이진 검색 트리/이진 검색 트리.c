#include <stdio.h>
int D[10001];
int point[10001][2];//[0]왼쪽D값 [1]오른쪽D값 
void f(int now)
{
	if(D[now] == 0 || now > 10000) return;
	
	f(point[now][0]);
	f(point[now][1]);
	printf("%d\n",D[now]);
}
int main()
{
	int k;
	for(int i = 1; scanf("%d", &D[i]) != EOF; i++){
		k = 1;
		while(k<=10000){
			if(D[i] == D[k]){
				break;
			}
			if(D[i] < D[k]){
				if(point[k][0] == 0){
					point[k][0] = i;
					break;
				}
				k = point[k][0];
			}
			else{
				if(point[k][1] == 0){
					point[k][1] = i;
					break;
				}
				k = point[k][1];
			}
		}
	}
	
	f(1);
	return 0;
}