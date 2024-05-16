#include <stdio.h>
char trash[51];
float input;
char level[3];
int main()
{
	int cnt = 0;
	float ans = 0;
	float cal = 0;
	for(int i = 0; i < 20; i++){
		scanf("%s %f %s", trash, &input, level);
		cal += input;
		if(level[0] == 'A'){
			ans+=4.0 * input;
		}
		else if(level[0] == 'B'){
			ans+=3.0 * input;
		}
		else if(level[0] == 'C'){
			ans+=2.0 * input;
		}
		else if(level[0] == 'D'){
			ans+=1.0 * input;
		}
		else if(level[0] == 'P'){
			cal -= input;
		}
		
		if(level[1] == '+'){
			ans +=0.5 * input;
		}
	}
	
	printf("%f", ans / cal);
	
	return 0;
}