// ####################### fast one ##############

#include<stdio.h>
#include<string.h>

int main()

{

    int j=0,i=0,c=0,b=1;
    double a,total= 0,array[12][12];
    char word[2];

    scanf(" %s",&word);

    for (i=0;i<12;i++){
        for (j=0;j<12;j++){
               if (c<b){
                scanf("%lf",&a);
                c++;
               }
               else {
                scanf("%lf",&a);
                total += a;
                c++;
               }
            }
            c=0;
           b++;

        }

     if (word[0]=='S'){
        printf("%.1lf\n",total);
     }
     else {
        printf("%.1lf\n",total/66);
     }
    return 0;
}

// #############################   second one solutation #######################



#include<stdio.h>
#include<string.h>

int main()

{

    int j=0,i=0,c=-1,b=1;
    double a,total= 0,array[12][12];
    char word[2];



    scanf(" %s",&word);

    for (i=0;i<12;i++){
        for (j=0;j<12;j++){

         scanf("%lf",&array[i][j]);
            }

        }


        for (i=0;i<12;i++){

        for (j=b;j<12;j++){
                total += array[i][j];
            }
          b++;
        }

     if (word[0]=='S'){
        printf("%.1lf\n",total);
     }
     else {
        printf("%.1lf\n",total/66);
     }



    return 0;
}

