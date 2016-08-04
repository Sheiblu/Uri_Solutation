#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,i,l,j;
    while(1){
            scanf("%d%d",&a,&b);

      if (a==0 && b==0){
        break;
      }
      l = b-a;
      i = a-l;
     printf("%d\n",i);

    }

    return 0;
}
