#include<stdio.h>
 int main()
{
    int a,b,c,d,i,j,k,total=0,temp;
    int ar[50];
    scanf("%d",&b);

    for (k=0;k<b;k++){
    scanf("%d",&a);

    for(i=0;i<a;i++){
            scanf("%d",&ar[i]);
    }
    total=0;
    for (i=0;i<a;i++){
        for (j=0;j<a-1-i;j++){
            if (ar[j]>ar[j+1]){
                temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
                total++;
            }
         }
      }
     printf("Optimal train swapping takes %d swaps.\n",total);


   }

 return 0;
}
