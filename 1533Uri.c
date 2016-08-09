#include<stdio.h>
int main()
{
    int a=0,b=0,c=0,m,n,min=1,cou=1;
while (1){
    scanf("%d",&a);

      if (a==0){
        break;
      }
    for (m=1;m<=a;m++){
      scanf("%d",&n);
      if (n > b ){
          c=b;
          b=n;
         min = cou;
         cou = m;
      }
      else if (n > c){
        c = n;
        min = m;
      }

    }

    printf("%d\n",min);
      a=0,b=0,c=0,m,n,min=1,cou=1;
    }


return 0;

}

