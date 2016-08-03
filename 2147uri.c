#include<stdio.h>
#include<string.h>

int main() {

   int i, j = 0,lop;
   char ab [10000];
   scanf("%d",&lop);
   float num ;
   for (j=0;j<lop;j++){
   scanf(" %s",&ab);
   i = strlen(ab);
   num = i * .01 ;
   printf("%1.2f\n",num);
   }
   return 0;
}

