#include <stdio.h>
int N, M, K;
long long input[1000001];
long long tree[4000001];

long long reset_tree(int node, int start, int end){
	if(start == end) return tree[node] = input[start];
	int mid = (start + end) / 2;
	return tree[node] = (reset_tree(node * 2, start, mid) * reset_tree(node * 2  + 1, mid + 1, end)) % 1000000007;
}
long long mult(int node, int start, int end, int left, int right)
{
	if(left > end || right < start) return 1;
	if(left <= start && right >= end) return tree[node];
	int mid = (start + end) / 2;
	
	return (mult(node * 2, start, mid, left, right) * mult(node * 2 + 1, mid + 1, end, left, right)) % 1000000007;
}
long long change(int node, int start, int end, int index, long long changing)
{
	if(index < start || index > end) return tree[node];
	if(start == end) return tree[node] = changing;
	
	int mid = (start + end) / 2;
	return tree[node] = change(node * 2, start, mid, index, changing) * change(node * 2 + 1, mid + 1, end, index, changing) % 1000000007;
	
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
//		for(int i = 1; i <= N * 4; i++) printf("%d ", tree[i]);
//		printf("\n");
		if(a == 1){
			change(1, 1, N, b, c);
			input[b] = c;
		}
		else{
			printf("%lld\n", mult(1, 1, N, b, c));
		}
	}
	return 0;
}