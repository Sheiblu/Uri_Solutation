#include<stdio.h>
#include<math.h>

int main (){

  int a,b,c,d,e,f;
    while(1){
      scanf("%d",&a);
        if (a == 0)
          break;

         scanf("%d%d",&b,&c);
         e = (a*b*100)/c;
         d = sqrt(e);

         printf("%d\n",d);

   }
}
