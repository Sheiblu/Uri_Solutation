#include<stdio.h>
 int main()
{
    float a,b,c;
    int m, i=0,j;
     scanf("%d",&m);

     for (j=0;j<m;j++){
    scanf("%f",&a);

    while (a>1){
        a = a/2;
        i++;

    }

    printf("%d dias\n",i);
    i=0;

     }


 return 0;
}
