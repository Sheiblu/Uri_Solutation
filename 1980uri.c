#include<stdio.h>
#include<string.h>

int main()
{

    int aa,bb,c,d,i,j;
    long long int total=1;

     char a[15];
     char b []= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
     while(scanf(" %s",&a)){

           if (a[0]=='0'){
               break;
           }

     c = strlen(a);
     for (i=0;i<c;i++){
        for (j=0;j<26;j++){
            if (a[i]== b[j]){
                total = total *(j+1);
                break;
            }
        }
     }

     printf("%lld\n", total);
      total = 1;
     }
    return 0;
}
