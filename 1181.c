#include<stdio.h>
#include<string.h>

int main()

{

    int j=0,i=0,terget;
    double a,total= 0;
    char word[2];


    scanf("%d",&terget);
    scanf(" %s",&word);

    for (i=0;i<12;i++){
        for (j=0;j<12;j++){
            if(i==terget){
                scanf("%lf",&a);
                total += a;
            }
            else {
                 scanf("%lf",&a);
            }
        }
    }

     if (word[0]=='S'){
        printf("%.1lf\n",total);
     }
     else {
        printf("%.1lf\n",total/12);
     }



    return 0;
}

