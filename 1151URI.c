#include<stdio.h>

int main()
{
    int num1 = 0 , num2 = 1 , i=2 , n,cou;

    scanf("%d",&n);

    printf("%d %d ",0 , 1);

    while(1){
        cou = num1+num2;
        num1 = num2 ;
        num2 = cou;
        printf("%d", cou);

               i++;
        if(i>=n){
            break;
        }
        printf(" ");
    }

    printf("\n");
    return 0;
}
