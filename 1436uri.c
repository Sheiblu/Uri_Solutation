#include<stdio.h>
 int main()
{

    int loop,a,b,c,ans, i=0,j;

     scanf("%d",&loop);
     for (i= 0;i<loop;i++){
        scanf("%d",&a);
            b = (a/2)+1;

    for (j=1;j<=a;j++){
        scanf("%d",&c);
         if (j==b){
            ans = c;
         }
     }

    printf("Case %d: %d\n",i+1,ans);
  }

 return 0;
}
