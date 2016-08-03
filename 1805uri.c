#include<stdio.h>

int main(){
long long int a,b,i,n,total =0;
    scanf("%lld%lld",&a,&b);

 //   for (i=a;i<=b;i++){
 //       total += i;
  //  }

  i = a+b;
  n = b-a+1;
  total = i * n;

    printf("%lld\n",total/2);

    return 0;
}
