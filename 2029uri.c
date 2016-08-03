#include<stdio.h>
int main()
{
    double a,b,c,d;
    while(scanf("%lf%lf",&a,&b)!= EOF){

            c = b/2;
			d = c * c * 3.14;
			printf("ALTURA = %.2lf\n",a/d);
            printf("AREA = %.2lf\n",d);
    }

    return 0;
}

