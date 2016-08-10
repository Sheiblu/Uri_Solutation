#include<stdio.h>
int main()
{
    int a=0,b,i,k,j,s=0,m;
    scanf("%d",&a);

    a = a+1;

    int arr [a][a] ;

            for ( i = 0;i<a;i++){
                for (j = 0;j<a;j++){
                        scanf("%d",&b);
                arr [i][j] = b;
            }
        }
        a =a-1;
     for (i=0;i<a;i++){
        for (j=0;j<a;j++){
            s = arr[i][j]+ arr[i][j+1]+ arr[i+1][j]+arr[i+1][j+1];

     if (s <= 1){
        printf("U");
     }
     else {
        printf("S");
          }
       }
       printf("\n");
    }

     return 0;

}

