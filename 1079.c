#include <stdio.h>

int main()

{
    int i, j;

    float a =0 , b=0, c=0;

    scanf("%d",&i);

    for(j=0;j<i;j++){


    scanf("%f%f%f",&a,&b,&c);

    printf("%.1f\n",((a*2+b*3+c*5)/10));

    }

    return 0;
}
