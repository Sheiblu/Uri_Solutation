#include<stdio.h>
#include<string.h>

int main (){
   int  total =0 ,j, i ,fact = 0;
   int are[10 ] = {1,1,2,6,24,120,720,5040,40320,362880};
   char ama [30];
    scanf(" %s", &ama);

   while(ama[0]!= '0'){

        for(j = strlen(ama),i=0; j>0; i++,j--){

            fact = are[j];

            if( ama [i] == '1'){
                total += (1 * fact);
            }
            else if( ama [i] == '2'){
                total += (2 * fact);
            }
            else if( ama [i] == '3'){
                total += (3 * fact);
            }
            else if( ama [i] == '4'){
                total += (4 * fact);
            }
            else if( ama [i] == '5'){
                total += (5 * fact);
            }
            else if( ama [i] == '6'){
                total += (6 * fact);
            }
            else if( ama [i] == '8'){
                total += (8 * fact);
            }
            else if( ama [i] == '7'){
                total += (7 * fact);
            }
            else if( ama [i] == '9'){
                total += (9 * fact);
            }
        }

        printf("%d\n", total);
        total =0;
        scanf(" %s",&ama);

   }
   return 0;
}

