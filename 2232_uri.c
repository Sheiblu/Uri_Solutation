#include<stdio.h>
#include<math.h>
 int main()
{
    long long int a,b=1,i,d,k,j;

    scanf("%lld",&k);

        for (j=0;j<k;j++){

            scanf("%lld",&d);
            b = 1;

        for (i=1;i<d;i++){
            a=pow(2,i);
            b+= a;
             }

      printf("%lld\n",b);

    }
 return 0;
}
