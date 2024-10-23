#include <stdio.h>
typedef long long ll;
int N;
ll D[500001];
ll temp[500001];
ll ans;
void merge(int left, int right, int mid)
{
	int i = left;
	int j = mid + 1;
	int k = left;
	while(i <= mid && j <= right){
		if(D[i] <= D[j]) temp[k++] = D[i++];
		else{
			temp[k++] = D[j++];
			ans += j - k;
		}
	}
	if(i > mid){
		while(j<=right){
			temp[k++] = D[j++];
		} 
	}
	else{
		while(i<=mid){
			temp[k++] = D[i++];
		} 
	}
	for(int l = left; l <= right; l++){
		D[l] = temp[l];
	}
}
void merge_sort(int left, int right)
{
	if(left < right){
		int mid = (left + right) / 2;
		merge_sort(left, mid);
		merge_sort(mid + 1, right);
		merge(left, right, mid);
	}
	
	
}
int main()
{
	scanf("%d", &N);
	for(int i = 0; i < N; i++) scanf("%lld", &D[i]);
	merge_sort(0, N - 1);
	printf("%lld", ans);
	
	return 0;
}