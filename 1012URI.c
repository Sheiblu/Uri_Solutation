#include <stdio.h>
int main()

{
    float a , b, c;

    scanf("%f%f%f",&a,&b,&c);

    printf("TRIANGULO: %.3f\n",(.5*c*a));
    printf("CIRCULO: %.3f\n",(c*c*3.14159));
    printf("TRAPEZIO: %.3f\n",((a+b)*.5*c));
    printf("QUADRADO: %.3f\n",b*b);
    printf("RETANGULO: %.3f\n",a*b);

    return 0;

}
