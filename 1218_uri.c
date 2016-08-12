#include <stdio.h>
#include<string.h>
int main (){
    int n, m,i=1, man=0,woman=0;
    char a,c;
   while (scanf("%d",&m)!=EOF){



   while(1){
        scanf("%d %c%c",&n,&a,&c);

        if  (n==m && a== 'M'){
            man++;
        }
        else if  (n==m && a== 'F'){
            woman++;
        }

        if (c=='\n'){
            break;
        }

   }
   if  (i == 1){
            printf("Caso %d:\nPares Iguais: %d\nF: %d\nM: %d\n",i,(man+woman),woman,man);
        }
    else {
         printf("\nCaso %d:\nPares Iguais: %d\nF: %d\nM: %d\n",i,(man+woman),woman,man);
    }

   i++;
   man = 0;
   woman = 0;

   }

   return 0;
}
