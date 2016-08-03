#include <stdio.h>

int main()

{
    int a =0 , b=0, c=0, d=0,temp,cou1,cou2;
    scanf("%d%d%d%d",&a,&b,&c,&d);

   /* if (a == c && b == d){
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",24,0);
    }

    else if ( b > d ){
        d = d+60-b;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(c-a-1),d);
    }

    else {

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(c-a),(d-b));
    }  */

     cou1 = c-a;
    cou2 = d-b;


    if (cou1<0){
        cou1 += 24 ;
    }

    if (cou2<0){
        cou2 += 60 ;
        cou1--;
    }

    if (a == c && b == d){
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24,0);
    }



    else {

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",cou1,cou2);
    }


  return 0;
}
