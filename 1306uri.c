#include<stdio.h>

int main()
{
    int a = -99, b = -99,e=1;
    while (scanf("%d%d",&a,&b)){

        if (a==0 && b == 0){
            break;
           }

        double ae = (double) (a-b)/b;

        int i = ae ;
        if ((ae-i)> 00){
           i = i + 1;
           }
         if (ae > 26){
                 printf("Case %d: impossible\n",e);
            }
          else {
                printf("Case %d: %d\n",e,i);
                }
        e++;

        }

      return 0;
}

