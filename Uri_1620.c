#include<stdio.h>
int main(){

    double a,l,i,x,d;

        while(1){
        scanf("%lf",&l);

        if (l==0)
            break;

        i = l+(l-3);
        a = i-l;

        if (a==0){
            l=0;
        }
        else {
            l = a/l;
        }

         printf ("%.6lf\n",l);
         }

}
