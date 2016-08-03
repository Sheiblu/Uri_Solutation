#include <stdio.h>
int main()

{
    int a , b, c,i=1;

    while(i=1){
        scanf("%d%d",&a,&b);

        if(a==0 || b==0){
            break;
        }

        else if(a>0 && b>0){

                printf("primeiro\n");
         }
        else if(a<0 && b>0){
            printf("segundo\n");
        }
        else if(a<0 && b<0){
                printf("terceiro\n");
        }
        else {
        printf("quarto\n");
        }
    }
    return 0;
}
