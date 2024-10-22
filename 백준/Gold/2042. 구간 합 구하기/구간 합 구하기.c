#include <stdio.h>
int N, M, K;
long long input[1000001];
long long tree[4000001];

long long reset_tree(int node, int start, int end){
	if(start == end) return tree[node] = input[start];
	int mid = (start + end) / 2;
	return tree[node] = reset_tree(node * 2, start, mid) + reset_tree(node * 2  + 1, mid + 1, end);
}
long long sum(int node, int start, int end, int left, int right)
{
	if(left > end || right < start) return 0;
	if(left <= start && right >= end) return tree[node];
	int mid = (start + end) / 2;
	
	return sum(node * 2, start, mid, left, right) + sum(node * 2 + 1, mid + 1, end, left, right);
}
void change(int node, int start, int end, int index, long long dif)
{
	if(index < start || index > end)return;
	tree[node] += dif;
	if(start == end)return;
	int mid = (start + end) / 2;
	change(node * 2, start, mid, index, dif);
	change(node * 2 + 1, mid + 1, end, index, dif);
}
int main(){
	long long a, b, c;
	long long temp;
	scanf("%d %d %d", &N, &M, &K);
	for(int i = 1; i <= N; i++){
		scanf("%lld", &temp);
		input[i] = temp;
	}
	tree[1] = reset_tree(1, 1, N);
	for(int i = 0; i < M + K; i++){
		scanf("%lld %lld %lld", &a, &b, &c);
		
		if(a == 1){
			change(1, 1, N, b, c - input[b]);
			input[b] = c;
		}
		else{
			printf("%lld\n", sum(1, 1, N, b, c));
		}
	}
	return 0;
}