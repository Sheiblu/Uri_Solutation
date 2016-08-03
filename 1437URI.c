#include <stdio.h>
int main(){
   int a,i;
   char c,p='N';
    while(scanf("%d",&a)){
            if (a == 0){
                break;
            }
     for (i=0;i<a;i++){
            scanf(" %c",&c);

            if (p == 'N' && c == 'E' ){

                p = 'O';
            }
            else if ( p == 'N' && c == 'D' ){
                p = 'L';
            }
            else if (p == 'S' && c == 'E' ){
                p = 'L';
            }
            else if (p == 'S' && c == 'D' ){
                p = 'O';
            }
            else if (p == 'L' && c == 'E' ){
                p = 'N';
            }
            else if (p == 'L' && c == 'D' ){
                p = 'S';
            }
            else if (p == 'O' && c == 'E' ){
                p = 'S';
            }
            else if (p == 'O' && c == 'D' ){
                p = 'N';
            }

        }
         printf("%c\n",p);
         p = 'N';
    }

   return 0;
}

