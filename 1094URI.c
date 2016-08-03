#include <stdio.h>

int main()

{
    float a,b,c,e,f,d1=0,d2=0,d3=0;
    char d;

    scanf("%f",&a);

    for (e=0;e<a;e++){
            scanf("%f",&b);
            scanf(" %c",&d);

            if(d == 'C'){
                d1 += b;
            }
            else if (d =='R'){
                d2 += b;
            }

            else
                d3 += b;
    }
    f=d1+d2+d3;
    printf("Total: %.0f cobaias\n",f);
    printf("Total de coelhos: %.0f\n",d1);
    printf("Total de ratos: %.0f\n",d2);
    printf("Total de sapos: %.0f\n",d3);
    printf("Percentual de coelhos: %.2f %%\n",((d1/f)*100));
    printf("Percentual de ratos: %.2f %%\n",((d2/f)*100));
    printf("Percentual de sapos: %.2f %%\n",((d3/f)*100));


    return 0;
}
