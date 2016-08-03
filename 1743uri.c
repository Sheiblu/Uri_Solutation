#include<stdio.h>
//#include<math.h>
int main(){

    int a,b,c,d,e,a1,b1,c1,d1,e1;

    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    scanf("%d%d%d%d%d",&a1,&b1,&c1,&d1,&e1);

      if((a == a1) || (b == b1) || (c == c1) || (d == d1) || (e == e1)){
        printf("N\n");
      }
        else {
            printf("Y\n");
        }
    return 0;
}
