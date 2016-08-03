#include<stdio.h>


int main() {

   int i, j = 0;
   long long int a, c,b,m;
   while(scanf("%lld",&a) != EOF){

   if  (a == 1){
    printf("0\n" );
   }
   else if  (a == 4 || a == 2 || a== 3){
    printf("1\n" );
   }
   else if  (a == 5 || a == 6){
    printf("2\n" );
   }
   else if (a == 7){
    printf("4\n" );
   }
   else if (a == 8){
    printf("8\n" );
   }
   else if (a == 9){
    printf("12\n" );
   }
   else if (a == 10){
    printf("96\n" );
   }
   else if (a == 11){
    printf("108\n" );
   }
   else if ( a > 11){
         c = 96, b = 108;
       for (i = 12 ;i<= a ;i++){
            m = c * b;
            c = b ;
            b = m;
            i++;

            if (a < i){
                break;
            }
            m = c + b;
            c = b ;
            b = m;
       }
       printf("%lld\n",m);
      }
   }
   return 0;
}

