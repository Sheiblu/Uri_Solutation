#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,i,j=0,k=0,l=0,loop;
    char ah[101],am[101],ans[1000];

     scanf("%d",&loop);

        for(i=0;i<loop;i++){
              scanf(" %s%s",&ah,&am);
                a = strlen(ah);
                b = strlen(am);

                if (a>b){
                    for (j=0;j<b;j++){
                        printf("%c",ah[j]);
                        printf("%c",am[j]);
                    }
                    for (j=b;j<a;j++){
                        printf("%c",ah[j]);
                    }
                }
                else if (a<b){
                    for (j=0;j<a;j++){
                        printf("%c",ah[j]);
                        printf("%c",am[j]);
                    }
                    for (j=a;j<b;j++){
                        printf("%c",am[j]);
                    }
                }
                else {
                   for (j=0;j<a;j++){
                        printf("%c",ah[j]);
                        printf("%c",am[j]);
                    }
                }


                printf("\n");

        }
  return 0;
}

