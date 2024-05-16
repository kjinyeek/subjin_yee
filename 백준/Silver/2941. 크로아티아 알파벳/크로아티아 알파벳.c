#include <stdio.h>
char D[101];
int main(){
	int cnt = 0;
	scanf("%s", D);
	for(int i = 0; D[i]; i++){
		if(D[i] == 'c'){
			if(D[i + 1] =='='){
				cnt++;
				i++;
			}
			else if(D[i + 1] == '-'){
				cnt++;
				i++;
			}
			else{
				cnt++;
			}
		}
		else if(D[i] == 'd'){
			if(D[i + 1] == 'z' && D[i + 2] == '='){
				cnt++;
				i+=2;
			}
			else if (D[i + 1] == '-'){
				cnt++;
				i++;
			}
			else{
				cnt++;
			}
		}
		else if(D[i] == 'l' && D[i + 1] == 'j'){
			cnt++;
			i++;
		}
		else if(D[i] == 'n' && D[i + 1] == 'j'){
			cnt++;
			i++;
		}
		else if(D[i] == 's' && D[i + 1] == '='){
			cnt++;
			i++;
		}
		else if(D[i] == 'z' && D[i+ 1] == '='){
			cnt++;
			i++;
		}
		else if(D[i] == 'e' || D[i] == 'a' || D[i] == 'k'){
			cnt++;
		}
		else{
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}