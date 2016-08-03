#include <stdio.h>
int main()
{
    int a , b,r,day=0,cou,i;
    double c,d;
    scanf("%d",&cou);
    for (i=0;i<cou;i++){
    scanf("%d%d%lf%lf",&a,&b,&c,&d);
    day =0;
    while(a<=b){
            r = (a*c)/100;
            a += r;
            r = (b*d)/100;
            b += r;
            day++;
    }

    if(day>100){
        printf("Mais de 1 seculo.\n");
    }
    else
       printf("%d anos.\n", day);

    }

    return 0;
}

