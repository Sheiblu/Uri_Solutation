#include<stdio.h>
#include<math.h>
int main(){
     double a,b,c,e;
    scanf("%lf%lf%lf",&a,&b,&c);

    double m = sqrt((b*b) -(4*a*c));
    double n = (b*b) -(4*a*c);
    e = pow(n,.5);

    if( a == 0 || n<0){
    printf("Impossivel calcular\n");
    }

    else {
   // printf("R1 = %.5lf\n",(-b+m)/(2*a));
    printf("R1 = %.5lf\n",(-b+m)/(2*a));
    printf("R2 = %.5lf\n",(-b-m)/(2*a));
    }
    return 0;
}

