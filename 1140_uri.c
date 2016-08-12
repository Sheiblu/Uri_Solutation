#include <stdio.h>
#include<string.h>
int main (){
    int n, m=1, i, j, k;
    char sen [1500];
    char a;

    while(1){
    gets(sen);
    n = strlen(sen);
    if (sen[0] == '*'){
        break;
    }

     for (i=0;i<n;i++){
              if(sen[i]>=65 && sen[i]<=90) {
                a=sen[i]+32;
                sen[i] = a;
       }
     }

    a = sen[0];

    for (i=1;i<n;i++){
              if (sen[i]==' '){
                       if(sen[i+1] != a){
                         m=0;
                        break;
                    }
            }
    }


    if (m==0){
        printf("N\n");
           }
    else {
         printf("Y\n");
          }
    m=1;

    }


    return 0;
}
