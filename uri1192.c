#include <stdio.h>
int main()
{
    int a, b,c,d,i;
    char aa ;
    scanf("%d",&c);
    for (i=0;i<c;i++){
   scanf("%d %c%d",&a,&aa,&b);
   if (a == b ){
     printf("%d\n",b*a);
   }
   else if (aa>='A' && aa<='Z'){
    printf("%d\n",b-a);
   }

   else if (aa>='a' && aa<='z'){
    printf("%d\n",a+b);
     }
    }

    return 0;
}
