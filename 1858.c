#include <stdio.h>
int main ()
{
  int a,b[120],c,d;
  int i,j;
  scanf("%d",&a);

  for (i=0;i<a;i++){
    scanf("%d",&c);
    b[i] = c;
  }
   c = 1;
   d = b[0];
  for (i=0;i<a;i++){
   if( b[i] < d){
     c = i+1;
     d = b [i];
   }
  }
  printf("%d\n",c);

  return 0;
}
