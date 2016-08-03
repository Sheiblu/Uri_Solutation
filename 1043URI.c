#include <stdio.h>

int main()

{


    float a =0 , b=0, c=0, d=0;
    scanf("%f%f%f",&a,&b,&c);

    if ((a+b)<= c && a>=b){
            d=(a+b)*.5*c;
            printf("Area = %.1f\n",d);
    }

    else if( (a+b)<= c && a<=b){
         d=(a+b)*.5*c;
         printf("Area = %.1f\n",d);
    }

    else if( (a+c)<= b && a<=c){
         d=(a+b)*.5*c;

         printf("Area = %.1f\n",d);
    }
    else if( (a+c)<= b && a>=c){
            d=(a+b)*.5*c;
            printf("Area = %.1f\n",d);
    }

    else if ((b+c)<= a && b<=c){
         d=(a+b)*.5*c;
         printf("Area = %.1f\n",d);
    }
    else if ((b+c)<= a && b>=c){
            d=(a+b)*.5*c;
            printf("Area = %.1f\n",d);
    }

    else {
        d=a+b+c;

    printf("Perimetro = %.1f\n",d);
    }

    return 0;
}

