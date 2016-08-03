#include<stdio.h>
int main()
{
    int a,b,c, m=0;
    while(scanf("%d",&a)!= EOF){
            b=0,c =0;

    if (m == 1){
        printf("\n\n");
    }

    if (a%4==0 && a%100 != 0){
            b= 1;
        printf("This is leap year.\n");

    }
     else if ( a%400 == 0){
         b = 1;
            printf("This is leap year.\n");
    }

    if (a%15 == 0){
            printf("This is huluculu festival year.\n");
        c = 1;
    }

    if (a%55 == 0 &&  b == 1){
            printf("This is Bulukulu festival year.\n");
    }

    if ( b == 0 &&  c == 0){
            printf("This is an ordinary year.\n");
    }
         b = 0, c = 0;
         m = 1;
    }
    return 0;
}

