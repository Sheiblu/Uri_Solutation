#include<stdio.h>
int main(){
    int a,i,cou1=0,cou2=0,cou3=0;

    while(1){
        scanf("%d",&a);
        if(a==1){
            cou1++;
        }
        else if(a==2){
        cou2++;
        }
        else if(a==3){
            cou3++;
        }
        else if(a==4){
            break;
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",cou1);
    printf("Gasolina: %d\n",cou2);
    printf("Diesel: %d\n",cou3);

    return 0;
}


