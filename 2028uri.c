#include<stdio.h>
int main()
{
    int loop=1 ,b,c,i,j,z,y=1;


    while(scanf("%d",&b) != EOF){
    z=b;
    while (z!=0){
        y += z;
        z--;
    }
    if (y==1){
    printf("Caso %d: %d numero\n",loop,y);
    } else {
        printf("Caso %d: %d numeros\n",loop,y);
    }
     printf("%d",0);

    for (i=0;i<=b;i++){
            c=i;
        for (j = 0 ;j<c;j++){
            printf(" %d",i);

         }
       }

     printf("\n\n");
     y = 1;
     loop++;
    }

return 0;

}

