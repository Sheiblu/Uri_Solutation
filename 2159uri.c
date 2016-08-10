#include<stdio.h>
#include<math.h>
int main()
{
    double a=0,b=1.25506;
    scanf("%lf",&a);

    a = a/(log(a));


    printf("%.1lf %.1lf\n",a,a*b);

     return 0;

}

