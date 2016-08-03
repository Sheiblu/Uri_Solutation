#include<stdio.h>
int main(){

   int a,c=0,i=1,j,n,total=0;

    scanf("%d",&n);

    for(j=0;j<n;j++){

    scanf("%d",&a);

    while(1){

     total += i;
           if (total<=a){
                c++;
                i++;
            }
            else {
                i = 1;
                printf("%d\n",c);
                c=0;
                total = 0;
                break;
                }
            }
        }
    return 0;
}

