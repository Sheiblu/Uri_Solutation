#include<stdio.h>
#include<string.h>

int main()
{
    char food [80];
    int a,i,l,j;
    float totaltak=0,totaltim =0,tim=1,tak=0;
    float r1,r2;
    scanf("%d",&a);

   for (i=1;i<=a;i++){
    scanf("%f",&tak);
    totaltak += tak;
    scanf(" %[^\n]",&food);

    for(j=0;;j++){
        if (food[j]==' '){
            tim = tim + 1;
        }
        if (food[j]=='\0'){
           break;
        }
      }
    printf("day %d: %.0f kg\n",i,tim);
    totaltim = totaltim + tim;
    tim = 1;

      }
       r1 = (float) (totaltim/a) ;
       r2 = (float) (totaltak/a);
     printf("%.2f kg by day\n",r1);
     printf("R$ %.2f by day\n",r2);

    return 0;
}
