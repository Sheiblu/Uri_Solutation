#include<stdio.h>
#include<string.h>
int main()
{
    double a, total = 0 ,cou = 0;
    char b[150];
    while(scanf("%[^\n]",&b) != EOF){
            scanf("%lf%c",&a,&b);
            total += a;
            cou++;
    }
    printf("%.1lf\n",total/cou);

    return 0;
}

