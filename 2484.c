#include<stdio.h>
#include<string.h>

int main()

{

    int j=0,check,i=10,k=0,l=0;
    char word[500];



           while(scanf(" %s",&word)!= EOF){
            check = strlen(word);
            l = check-1;

            for (i=0;i<check;i++){

               if (i>0){
                  for (j=0;j<i;j++){
                      printf(" ");
                     }
                  }

                  for (k=0;k<=l;k++){
                        printf("%c",word[k]);
                        if (k!=l){
                            printf(" ");
                        }
                  }
                  printf("\n");

                l--;
            }

        printf("\n");

 }

    return 0;
}

