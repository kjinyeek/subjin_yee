#include <stdio.h>
#include <algorithm>
using namespace std;

int D[6];
int main()
{
	int N = 0;
	for(int i = 0; i < 5; i++){
		scanf("%d", &D[i]);
		N += D[i];
	}
	sort(D, D + 5);
	printf("%d\n%d", N / 5, D[2]);
	return 0;
}