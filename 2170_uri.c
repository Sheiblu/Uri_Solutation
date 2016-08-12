#include<stdio.h>
 int main()
{
    double a,b,d;
    int i=1,c=0;

    double perc;

   while(scanf("%lf%lf",&a,&b)!=EOF){

    perc = (b/a)*100;
    perc = perc - 100;
    printf("Projeto %d:\nPercentual dos juros da aplicacao: %.2lf %c\n\n",i,perc,37);
    i++;
    c=1;

   }
return 0;

}


