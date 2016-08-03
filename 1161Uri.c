#include<stdio.h>
#include<math.h>
int main(){
    int a,b,i;
    long long int total1=1 , total2 = 1 ;

    while(scanf("%d%d",&a,&b) !=EOF){

        total1=1 , total2 = 1;
    for(i=1;i<=a;i++){
        total1 = (i*total1);
    }
    for(i=1;i<=b;i++){
        total2 = (i*total2);
    }

    printf("%lld\n",total1+total2);

    }

    return 0;
}

