#include<stdio.h>
int main()
{
    double w1, w2,r,d,e=1,total=0;

    while(scanf("%lf%lf%lf",&w1,&w2,&r)){

            if (w1 == 0 && w2 == 0 && r == 0){
                break;
            }

    d =  (w2*(1+r/30) + w2*(1+r/60))/2;

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
    total += (w1+w2+r);
    e++;

    }
     //printf("%lf \n",total);
    if ((total/e)> 40){
        printf("\n\nAqui nois constroi fibra rapaz! Nao e agua com musculo!\n");
    }
 return 0;
}
