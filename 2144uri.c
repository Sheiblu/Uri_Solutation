#include<stdio.h>
int main()
{
    double w1, w2,r,d=0,e=0,total=0;

    while(scanf("%lf%lf%lf",&w1,&w2,&r)){

            if (w1 == 0 && w2 == 0 && r == 0){
                break;
            }

    d = 1 + (r/30);
    d= (w1*d) + (w2*d);
    d = d/2;


    if (d>60){
        printf("AQUI E BODYBUILDER!!\n");
    }
    else if (d>=40){
        printf("Ta saindo da jaula o monstro!\n");
    }

    else if (d>=14){
        printf("Bora, hora do show! BIIR!\n");
    }
    else if (d>=13){
        printf("E 13\n");
    }
    else if (d>=1){
        printf("Nao vai da nao\n");
    }
    total += d;
    e++;

    }

    if ((total/e) > 40){
        printf("\nAqui nois constroi fibra rapaz! Nao e agua com musculo!\n");
    }
 return 0;
}
