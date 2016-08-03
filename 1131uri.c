#include<stdio.h>

int main (){

  int m = 1 , inter = 0, gremio = 0, draws =  0, tem1, tem2, cou=0;

  while (m == 1){
    scanf("%d%d",&tem1,&tem2);
    cou++;
    printf("Novo grenal (1-sim 2-nao)\n");

    if( tem1 > tem2){
        inter++;
    }
    else if( tem1 < tem2) {
        gremio++;
    }

    else  {
        draws++;  }

    scanf("%d" ,&m);
  }

  printf("%d grenais\n",cou);
  printf("Inter:%d\n",inter);
  printf("Gremio:%d\n",gremio);
  printf("Empates:%d\n",draws);
  printf("Inter venceu mais\n");

}
