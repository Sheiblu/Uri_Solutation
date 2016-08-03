#include<stdio.h>
int main(){

   int a,b,i;
   scanf("%d",&a);
   while( a != 0){
      for (i=0;i<a;i++){
        scanf("%d",&b);
       if(b%2==0){
        printf("%d\n",(b*2)-2);
          }
          else {
            printf("%d\n",(b*2)-1);
          }
      }
      scanf("%d",&a);
  }

  return 0;
}

