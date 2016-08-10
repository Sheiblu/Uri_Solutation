#include<stdio.h>
int main()
{
    int a=0,b=0,c=0,i,d = 5,e=1,f;

    scanf("%d",&a);
    scanf("%d",&b);

    for (i = 1; i<a;i++){

       scanf("%d",&c);

        if (b > c && e == 1){
            d = 0;
            e = 0;
            f = i;
        }
         b = c ;
    }

    if(d == 0){
        printf("%d\n",f+1);
    }
    else {
        printf("0\n");
    }


return 0;

}

