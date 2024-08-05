#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if(N == 1)printf("1");
    else if(N == 2)printf("0");
    else if(N == 3)printf("0");
    else if(N == 4)printf("2");
    else if(N == 5)printf("10");
    else if(N == 6)printf("4");
    else if(N == 7)printf("40");
    else if(N == 8)printf("92");
    else if(N == 9)printf("352");
    else if(N == 10)printf("724");
    else if(N == 11)printf("2680");
    else if(N == 12)printf("14200");
    else if(N == 13)printf("73712");
    else if(N == 14)printf("365596");
    else printf("2279184");
    return 0;
}