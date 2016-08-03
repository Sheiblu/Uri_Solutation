#include<stdio.h>
int main()
{
    int a,b,cc;
    char c ;
    while(scanf("%d %c%d",&a,&c,&b)!= EOF){

    if (a < 7 || a == 7 && b == 0 ) {
        printf("Atraso maximo: 0\n");
    }
    else {
            cc= (a-7)*60;
        printf("Atraso maximo: %d\n",(cc+b));
    }
    }

    return 0;
}
