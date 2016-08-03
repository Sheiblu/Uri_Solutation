#include<stdio.h>
#include<math.h>
int main(){

    double a,b;


    while(scanf("%lf",&a)!=EOF){
            b = 2*sqrt(3)*a*a;
        printf("%.2lf\n",b/5);
    }

    return 0;
}

