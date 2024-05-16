#include <stdio.h>
char D[20];
int cnt;
int main()
{
	scanf("%s", D);
	for(int i = 0;D[i]; i++){
		if(D[i] >= 'A' && D[i] <= 'C'){
			cnt += 3;
		}
		else if(D[i] >= 'D' && D[i] <= 'F'){
			cnt +=4;
		}
		else if(D[i] >= 'G' && D[i] <= 'I'){cnt+=5;
		}
		else if(D[i] >= 'J' && D[i] <= 'L'){cnt+=6;
		}
		else if(D[i] >= 'M' && D[i] <= 'O'){cnt+=7;
		}
		else if(D[i] >= 'P' && D[i] <= 'S'){cnt+=8;
		}
		else if(D[i] >= 'T' && D[i] <= 'V'){cnt+=9;
		}
		else{
			cnt+=10;
		}
	}
	
	printf("%d", cnt);
	return 0;
}