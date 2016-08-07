#include<stdio.h>

int main(){

    int a,b,c=0,d,i,j;

    while(scanf ("%d%d",&a,&b)){

            if (a==0 && b==0){
                break;
            }

    int ar [b][a];

    for (i=0;i<b;i++){
        for (j=0;j<a;j++){
            scanf("%d",&ar[i][j]);
        }
    }

      for (i=0;i<a;i++){
        for (j=0,c=0;j<b;j++){
        c+= ar[j][i];

           }

        if (c==b){
            printf("yes\n");
            break;
        }

        else {

        c = 0;

        }

       }

       if (c==0){
        printf("no\n");
       }

    }

    return 0;

 }
