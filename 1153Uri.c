#include<stdio.h>

int main()
{
    int m = 1 , i=0 , n,cou=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       m = m*i;
    }

    printf("%d\n",m);
     return 0;

}

