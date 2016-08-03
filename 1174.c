#include<stdio.h>
int main(){
    float a,b,c;
    int i=0,j=100;
    float ar[100];

    for(i=0;i<100;i++){
        scanf("%f",&a);
          ar[i] = a;
    }

    for(i=0;i<j;i++){
            if(ar[i] < 11){
            printf("A[%d] = %.1f\n",i,ar[i]);
            }
    }

    return 0;
}

