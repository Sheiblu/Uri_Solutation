#include<stdio.h>
int main()
{
   int p,q1,q2,a,b;


   scanf("%d%d%d%d%d",&p,&q1,&q2,&a,&b);
   if (a== 1 && b == 0){
    printf("Jogador 1 ganha!\n");
   }
   else if (a == 1 && b == 1){
    printf("Jogador 2 ganha!\n");
   }
   else {

    if ((q1+q2)%2==0 && p==1){
       printf("Jogador 1 ganha!\n");
    }
    else if ((q1+q2)%2!=0 && p==0){
       printf("Jogador 1 ganha!\n");
    }
    else {
         printf("Jogador 2 ganha!\n");
    }
   }
  return 0;

}
