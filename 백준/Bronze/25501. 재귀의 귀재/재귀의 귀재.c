#include <stdio.h>
#include <string.h>
char s[1001];
int cntrec,pal;
int recursion(const char *s, int l, int r){
	cntrec++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		cntrec = 0;
		pal = 0;
		scanf("%s", s);
		pal = isPalindrome(s);
//		recursion();
		printf("%d %d\n", pal, cntrec);
	}
}