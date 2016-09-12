#include<stdio.h>
 int main()
{
     int alo,a,b,c,d,bon,j,e;

    scanf("%d",&e);
        for (j=0;j<e;j++){
            scanf("%d",&alo);
            scanf("%d%d%d",&a,&b,&bon);
             a = (a+b)/2;

                    if (bon%2==0){
                        a += alo;
                        }

            scanf("%d%d%d",&c,&d,&bon);
            c = (c+d)/2;

                    if (bon%2==0){
                        c += alo;
                        }

    if (a>c){
            printf("Dabriel\n");
        }
        else if (a<c){
            printf("Guarte\n");
      }
        else {
            printf("Empate\n");
      }

    }
 return 0;
}
