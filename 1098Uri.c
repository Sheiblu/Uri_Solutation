#include<stdio.h>

int main (){

    int i,j,k=1,l=0,m=1,n=0;
    double a=.2;

    while(1){

    for (i=0;i<3;i++){
        printf("I=%d J=%d\n",l,m++);
    }

    for (j=0;j<4;j++){
            for (k=1;k<=3;k++){
                printf("I=%.1lf J=%.1lf\n",l+a,k+a+n);
            }
             a+=.2;
    }

    l++;
    a = .2;
    n++;
    m = m-2;

    if ( l==2 ){
    break;
    }
    }

    for (i=0;i<3;i++){
        printf("I=%d J=%d\n",l,m++);
    }
    return 0;
}
