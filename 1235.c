#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,j,loop,k=0;
    char ah[101];
    scanf("%d",&loop);
     getchar();
        for(i=0;i<loop;i++){

               gets(ah);
                a = strlen(ah);
                char am[a-1];

                for (j=a/2-1;j>=0;j--){
                    am[k] = ah[j];
                    k++;
                        }
                for (j=a-1;j>=a/2;j--){
                   am[k] = ah[j];
                   k++;
                        }
              for (j=0;j<a;j++){
                printf("%c",am[j]);
                        }
                printf("\n");

                k=0;
        }
  return 0;
}

