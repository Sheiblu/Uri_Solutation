#include<stdio.h>
int main()
{
    int a=1,b=1,i,k,j;
    int ar[101] ={0},ac[101] ={0},result=0;

   scanf("%d%d",&a,&b);

    for (i=0;i<a;i++){
            for (j=0;j<b;j++){
                scanf("%d",&k);
                    ar[j] += k;
                    ac[i] += k;
    }
    }
      for (i=0;i<a;i++){
                if(ar[i]>result){
                    result = ar[i];
                }
      }

    for (i=0;i<b;i++){
        if( ac[i]>result){
            result = ac[i];
                }
    }
      printf("%d\n",result);

    return 0;
}

